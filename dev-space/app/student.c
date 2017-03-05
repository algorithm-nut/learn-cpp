#include<stdlib.h>
#include<stdio.h>
#include<malloc.h>
#include<string.h>

#define LEN sizeof(struct Student)

typedef struct Student
{
    int id;					//学生编号
    char name[20];			
    char sex[7];		
    char birthday[20];		//出生日期
    char startDate[20];		//入学时间
    char college[20];		//学院
    char major[20];			//专业
    int score;				//入学分数
    struct Student *next;	//指向下一个节点的指针
} Stu;


/*统计链表长度====*/
int length(Stu*head)		
{
    Stu*p=head;
    int count=0;
    /*遍历链表===*/
    while(p)				
    {
        p=p->next;
        ++count;
    }
    return count;
}

/*查找学生=================*/ 
Stu *findStu(Stu*head,int id)
{
    Stu *p=head;
    
    /*如果p不为空并且p不是要找的结点===*/
    while(p&&p->id!=id)	
    {
        p=p->next; //令p指向下一个节点
    }
    return p;
}


/*添加学生信息========================*/ 
void insertStu(Stu**head,int stu_id)
{
	Stu *p,*q=*head;
	int sex=0;
    p=(Stu*)malloc(LEN);
    p->id=stu_id;
    printf("\t ════════════════════════════ \n");
    printf("\t               ***** 添加学生信息 *****                   \n");
    printf("\t ════════════════════════════ \n");
    printf("\t分配给该学生的编号为:%d\n",stu_id);
    printf("\t%s","输入学生姓名:\t");
    scanf("%s",p->name);
    printf("\t%s","输入学生性别，1表示男，2表示女:\t");
    scanf("%d",&sex);
    if(sex==1) strcpy(p->sex,"男");
    else strcpy(p->sex,"女");
    printf("\t%s","输入学生出生日期:\t");
    scanf("%s",p->birthday);
    printf("\t%s","输入学生入学时间:\t");
    scanf("%s",p->startDate);
    printf("\t%s","输入学生所在院系:\t");
    scanf("%s",p->college);
    printf("\t%s","输入学生专业:\t");
    scanf("%s",p->major);
    printf("\t%s","输入学生入学成绩:\t");
    scanf("%d",&p->score);
    p->next=NULL;
    if(!q)						//链表为空的情况
    {
        *head=p;				//令head指向新结点
    }
    else						//链表不为空的情况
    {
        while(q->next)			//遍历到链表尾
        {
            q=q->next;
        }
        q->next=p;				//将新结点插入到链表尾
    }
}

void loadStu(Stu**head,Stu*stu)
{
    Stu *p=*head;
    if(!p)						//链表为空的情况
    {
        *head=stu;				//令head指向新结点
    }
    else						//链表不为空的情况
    {
        while(p->next)			//遍历链表到表尾
        {
            p=p->next;
        }
        p->next=stu;			//将新结点插入到表尾
    }
}

void printStu(Stu *stu)
{
    if(!stu)			//如果指针为空，即不存在该结点
    printf("\t%s\n","没有查询到该学生的信息，请检查输入.");
    else				//若指针不为空则输出学生信息
    {
		printf("编号	姓名	性别	出生日期	入学时间	院系	专业	成绩\n");
		printf("----------------------------------------------------------------------------\n");
		printf("%d\t%s\t%s\t%s\t%s\t%s\t%s\t%d\n",stu->id,stu->name,stu->sex,
			stu->birthday,stu->startDate,stu->college,stu->major,stu->score);
    }
}

int loadData(Stu**head)
{
    int curr_id=0;				//记录当前最大的学生编号
    int ix;
    int count;					//读取学生数量
    FILE *fp;
    if((fp=fopen("studata.txt","r"))!=NULL) //打开文件
    {
        fscanf(fp,"%d\n",&count);			//读取学生数量
        for(ix=0;ix<count;++ix)
        {
            Stu*stu=(Stu*)malloc(LEN);		//申请内存空间
            fscanf(fp,"%d\t%s\t%s\t%s\t%s\t%s\t%s\t%d" //读取数据
            ,&stu->id,stu->name,stu->sex,stu->birthday,
            stu->startDate,stu->college,stu->major,&stu->score);
            stu->next=NULL;
            loadStu(head,stu);							//调用函数将新生成的结点插入链表
            curr_id=stu->id;
        }
        printf("\t%s%d\n","已经载入的学生数据数量：",count);	//输出提示信息
        fclose(fp);												//关闭文件
    }
    return curr_id;
}

void saveData(Stu*head)
{
    Stu*p=head;
    FILE *fp=fopen("studata.txt","w");		//以只写方式打开文件
    int len=length(head);					//计算链表长度
    fprintf(fp,"%d\n",len);					//将链表长度写入文件中
    while(p)								//遍历链表，将每个结点的数据输出到文件
    {
        fprintf(fp,"%d\t%s\t%s\t%s\t%s\t%s\t%s\t%d\n"
            ,p->id,p->name,p->sex,p->birthday,p->startDate,
             p->college,p->major,p->score);
        p=p->next;
    }
    fclose(fp);								//关闭文件
    printf("\t数据保存成功......\n");
}

void modifyStu(Stu*head,int id)
{
    int sex=0;
    Stu *p=findStu(head,id);		//首先查找该id号的学生，将结果保存在p中
    /*如果查找到该学生，则可以修改===*/ 
    if(p)							
    {
        printf("\t ════════════════════════════ \n");
        printf("\t               ***** 修改学生信息 *****                   \n");
        printf("\t ════════════════════════════ \n");
        printf("\t该学生的信息如下：\n");
        printStu(p);
        printf("\t%s","输入新的姓名：");
        scanf("%s",p->name);
        printf("\t%s","输入新的性别：1表示男，2表示女:");
        scanf("%d",&sex);
        if(sex==1) strcpy(p->sex,"男");
        else strcpy(p->sex,"女");
        printf("\t%s","输入新的出生日期：");
        scanf("%s",p->birthday);
        printf("\t%s","输入新的入学日期：");
        scanf("%s",p->startDate);
        printf("\t%s","输入新的院系：");
        scanf("%s",p->college);
        printf("\t%s","输入新的专业：");
        scanf("%s",p->major);
        printf("\t%s","输入新的成绩：");
        scanf("%d",&p->score);
    }
    
    /*如果查询不到该学生的信息，则给出出错提示===*/
    else							
    {
        printf("\t未查询到该学生的信息,请检查输入.\n");
    }
}

void deleteStu(Stu **head,int id)
{
    Stu *q,*p=*head;
    if((*head)->id==id)				//如果要删除的是头结点
    {
        *head=(*head)->next;
        free(p);
    }
    else							//若要删除的不是头结点
    {
        while(p)					//遍历链表寻找要删除的结点
        {
            if(p->id==id)
            {
                q->next=p->next;
                free(p);			//释放内存空间
                break;
            }
            q=p;					//q为要p的前驱结点
            p=p->next;
        }
    }
}

void printAll(Stu *head)
{
    Stu *p=head;
    /*链表不为空时才输出表头===*/
    if(p)				
    {
        printf("编号	姓名	性别	出生日期	入学时间	院系	专业	成绩\n");
		printf("--------------------------------------------------------------------------------\n");
    }
    /*遍历链表，输出每个结点的信息===*/
    while(p)			
    {
		printf("%d\t%s\t%s\t%s\t%s\t%s\t%s\t%d\n",p->id,p->name,p->sex,
			p->birthday,p->startDate,p->college,p->major,p->score);
        p=p->next;
    }
}

void destory(Stu*head)
{
    Stu *p=head;
    while(head)				//如果链表不为空
    {
        p=head;				//令p指向head
        head=head->next;	//令head指向它的下一个结点
        free(p);			//释放p所指向的内存空间
    }
}


int main()
{
    Stu *head=NULL;
    int curr_id=loadData(&head);
    int cmd;
    while(1)
    {
		printf("\n\n");
		printf("\t╔═══════════════════════════╗\n");
		printf("\t║            欢 迎 使 用 学 生 管 理 系 统             ║\n");
		printf("\t╠═══════════════════════════╣\n");
		printf("\t║                 1 -   录入档案                       ║\n");
		printf("\t║                 2 - 查询学生信息                     ║\n");
		printf("\t║                 3 - 修改学生信息                     ║\n");
		printf("\t║                 4 - 删除学生信息                     ║\n");
		printf("\t║                 5 - 显示学生总数                     ║\n");
		printf("\t║                 6 - 显示所有学生                     ║\n");
		printf("\t║                 7 -   退出程序                       ║\n");
		printf("\t╚═══════════════════════════╝\n");
		printf("\t请选择功能 1 - 7 :");
        scanf("%d",&cmd);
		getchar();
		system("cls");
        switch(cmd)
        {
            case 1:
                ++curr_id;
                insertStu(&head,curr_id);
                break;
            case 2:
            {
                int id;
                printf("\t%s","输入要查询的学生的编号:");
                scanf("%d",&id);
                printStu(findStu(head,id));
                break;
            }
            case 3:
            {
                int id;
                printf("\t%s","输入要修改的学生的编号:");
                scanf("%d",&id);
                modifyStu(head,id);
                break;
            }
            case 4:
            {
                int id;
                printf("\t%s","输入要删除的学生的编号:");
                scanf("%d",&id);
                deleteStu(&head,id);
                break;
            }
            case 5:
                printf("\t%s%d\n","学生总数为：",length(head));
                break;
            case 6:
                printAll(head);
                break;
            default:
                saveData(head);
                destory(head);
                return 0;
        }
    }
}
