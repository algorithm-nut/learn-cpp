#include<stdlib.h>
#include<stdio.h>
#include<malloc.h>
#include<string.h>

#define LEN sizeof(struct Student)

typedef struct Student
{
    int id;					//ѧ�����
    char name[20];			
    char sex[7];		
    char birthday[20];		//��������
    char startDate[20];		//��ѧʱ��
    char college[20];		//ѧԺ
    char major[20];			//רҵ
    int score;				//��ѧ����
    struct Student *next;	//ָ����һ���ڵ��ָ��
} Stu;


/*ͳ��������====*/
int length(Stu*head)		
{
    Stu*p=head;
    int count=0;
    /*��������===*/
    while(p)				
    {
        p=p->next;
        ++count;
    }
    return count;
}

/*����ѧ��=================*/ 
Stu *findStu(Stu*head,int id)
{
    Stu *p=head;
    
    /*���p��Ϊ�ղ���p����Ҫ�ҵĽ��===*/
    while(p&&p->id!=id)	
    {
        p=p->next; //��pָ����һ���ڵ�
    }
    return p;
}


/*���ѧ����Ϣ========================*/ 
void insertStu(Stu**head,int stu_id)
{
	Stu *p,*q=*head;
	int sex=0;
    p=(Stu*)malloc(LEN);
    p->id=stu_id;
    printf("\t �T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T \n");
    printf("\t               ***** ���ѧ����Ϣ *****                   \n");
    printf("\t �T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T \n");
    printf("\t�������ѧ���ı��Ϊ:%d\n",stu_id);
    printf("\t%s","����ѧ������:\t");
    scanf("%s",p->name);
    printf("\t%s","����ѧ���Ա�1��ʾ�У�2��ʾŮ:\t");
    scanf("%d",&sex);
    if(sex==1) strcpy(p->sex,"��");
    else strcpy(p->sex,"Ů");
    printf("\t%s","����ѧ����������:\t");
    scanf("%s",p->birthday);
    printf("\t%s","����ѧ����ѧʱ��:\t");
    scanf("%s",p->startDate);
    printf("\t%s","����ѧ������Ժϵ:\t");
    scanf("%s",p->college);
    printf("\t%s","����ѧ��רҵ:\t");
    scanf("%s",p->major);
    printf("\t%s","����ѧ����ѧ�ɼ�:\t");
    scanf("%d",&p->score);
    p->next=NULL;
    if(!q)						//����Ϊ�յ����
    {
        *head=p;				//��headָ���½��
    }
    else						//����Ϊ�յ����
    {
        while(q->next)			//����������β
        {
            q=q->next;
        }
        q->next=p;				//���½����뵽����β
    }
}

void loadStu(Stu**head,Stu*stu)
{
    Stu *p=*head;
    if(!p)						//����Ϊ�յ����
    {
        *head=stu;				//��headָ���½��
    }
    else						//����Ϊ�յ����
    {
        while(p->next)			//����������β
        {
            p=p->next;
        }
        p->next=stu;			//���½����뵽��β
    }
}

void printStu(Stu *stu)
{
    if(!stu)			//���ָ��Ϊ�գ��������ڸý��
    printf("\t%s\n","û�в�ѯ����ѧ������Ϣ����������.");
    else				//��ָ�벻Ϊ�������ѧ����Ϣ
    {
		printf("���	����	�Ա�	��������	��ѧʱ��	Ժϵ	רҵ	�ɼ�\n");
		printf("----------------------------------------------------------------------------\n");
		printf("%d\t%s\t%s\t%s\t%s\t%s\t%s\t%d\n",stu->id,stu->name,stu->sex,
			stu->birthday,stu->startDate,stu->college,stu->major,stu->score);
    }
}

int loadData(Stu**head)
{
    int curr_id=0;				//��¼��ǰ����ѧ�����
    int ix;
    int count;					//��ȡѧ������
    FILE *fp;
    if((fp=fopen("studata.txt","r"))!=NULL) //���ļ�
    {
        fscanf(fp,"%d\n",&count);			//��ȡѧ������
        for(ix=0;ix<count;++ix)
        {
            Stu*stu=(Stu*)malloc(LEN);		//�����ڴ�ռ�
            fscanf(fp,"%d\t%s\t%s\t%s\t%s\t%s\t%s\t%d" //��ȡ����
            ,&stu->id,stu->name,stu->sex,stu->birthday,
            stu->startDate,stu->college,stu->major,&stu->score);
            stu->next=NULL;
            loadStu(head,stu);							//���ú����������ɵĽ���������
            curr_id=stu->id;
        }
        printf("\t%s%d\n","�Ѿ������ѧ������������",count);	//�����ʾ��Ϣ
        fclose(fp);												//�ر��ļ�
    }
    return curr_id;
}

void saveData(Stu*head)
{
    Stu*p=head;
    FILE *fp=fopen("studata.txt","w");		//��ֻд��ʽ���ļ�
    int len=length(head);					//����������
    fprintf(fp,"%d\n",len);					//��������д���ļ���
    while(p)								//����������ÿ����������������ļ�
    {
        fprintf(fp,"%d\t%s\t%s\t%s\t%s\t%s\t%s\t%d\n"
            ,p->id,p->name,p->sex,p->birthday,p->startDate,
             p->college,p->major,p->score);
        p=p->next;
    }
    fclose(fp);								//�ر��ļ�
    printf("\t���ݱ���ɹ�......\n");
}

void modifyStu(Stu*head,int id)
{
    int sex=0;
    Stu *p=findStu(head,id);		//���Ȳ��Ҹ�id�ŵ�ѧ���������������p��
    /*������ҵ���ѧ����������޸�===*/ 
    if(p)							
    {
        printf("\t �T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T \n");
        printf("\t               ***** �޸�ѧ����Ϣ *****                   \n");
        printf("\t �T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T \n");
        printf("\t��ѧ������Ϣ���£�\n");
        printStu(p);
        printf("\t%s","�����µ�������");
        scanf("%s",p->name);
        printf("\t%s","�����µ��Ա�1��ʾ�У�2��ʾŮ:");
        scanf("%d",&sex);
        if(sex==1) strcpy(p->sex,"��");
        else strcpy(p->sex,"Ů");
        printf("\t%s","�����µĳ������ڣ�");
        scanf("%s",p->birthday);
        printf("\t%s","�����µ���ѧ���ڣ�");
        scanf("%s",p->startDate);
        printf("\t%s","�����µ�Ժϵ��");
        scanf("%s",p->college);
        printf("\t%s","�����µ�רҵ��");
        scanf("%s",p->major);
        printf("\t%s","�����µĳɼ���");
        scanf("%d",&p->score);
    }
    
    /*�����ѯ������ѧ������Ϣ�������������ʾ===*/
    else							
    {
        printf("\tδ��ѯ����ѧ������Ϣ,��������.\n");
    }
}

void deleteStu(Stu **head,int id)
{
    Stu *q,*p=*head;
    if((*head)->id==id)				//���Ҫɾ������ͷ���
    {
        *head=(*head)->next;
        free(p);
    }
    else							//��Ҫɾ���Ĳ���ͷ���
    {
        while(p)					//��������Ѱ��Ҫɾ���Ľ��
        {
            if(p->id==id)
            {
                q->next=p->next;
                free(p);			//�ͷ��ڴ�ռ�
                break;
            }
            q=p;					//qΪҪp��ǰ�����
            p=p->next;
        }
    }
}

void printAll(Stu *head)
{
    Stu *p=head;
    /*����Ϊ��ʱ�������ͷ===*/
    if(p)				
    {
        printf("���	����	�Ա�	��������	��ѧʱ��	Ժϵ	רҵ	�ɼ�\n");
		printf("--------------------------------------------------------------------------------\n");
    }
    /*�����������ÿ��������Ϣ===*/
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
    while(head)				//�������Ϊ��
    {
        p=head;				//��pָ��head
        head=head->next;	//��headָ��������һ�����
        free(p);			//�ͷ�p��ָ����ڴ�ռ�
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
		printf("\t�X�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�[\n");
		printf("\t�U            �� ӭ ʹ �� ѧ �� �� �� ϵ ͳ             �U\n");
		printf("\t�d�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�g\n");
		printf("\t�U                 1 -   ¼�뵵��                       �U\n");
		printf("\t�U                 2 - ��ѯѧ����Ϣ                     �U\n");
		printf("\t�U                 3 - �޸�ѧ����Ϣ                     �U\n");
		printf("\t�U                 4 - ɾ��ѧ����Ϣ                     �U\n");
		printf("\t�U                 5 - ��ʾѧ������                     �U\n");
		printf("\t�U                 6 - ��ʾ����ѧ��                     �U\n");
		printf("\t�U                 7 -   �˳�����                       �U\n");
		printf("\t�^�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�a\n");
		printf("\t��ѡ���� 1 - 7 :");
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
                printf("\t%s","����Ҫ��ѯ��ѧ���ı��:");
                scanf("%d",&id);
                printStu(findStu(head,id));
                break;
            }
            case 3:
            {
                int id;
                printf("\t%s","����Ҫ�޸ĵ�ѧ���ı��:");
                scanf("%d",&id);
                modifyStu(head,id);
                break;
            }
            case 4:
            {
                int id;
                printf("\t%s","����Ҫɾ����ѧ���ı��:");
                scanf("%d",&id);
                deleteStu(&head,id);
                break;
            }
            case 5:
                printf("\t%s%d\n","ѧ������Ϊ��",length(head));
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
