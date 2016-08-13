#include<stdio.h>
#include<stdlib.h>
struct Student
{
	char cName[20];							/*姓名*/
	int iNumber;								/*学号*/
	struct Student* pNext;					/*指向下一个结点的指针*/
};
int iCount;									/*全局变量表示链表长度*/
struct Student* Create()
{
	struct Student* pHead=NULL;				/*初始化链表，头指针为空*/
	struct Student* pEnd,*pNew;
	iCount=0;								/*初始化链表长度*/
	pEnd=pNew=(struct Student*)malloc(sizeof(struct Student));
	printf("请先输入学生的姓名，然后输入学生的学号\n");
	scanf("%s",&pNew->cName);
	scanf("%d",&pNew->iNumber);
	while(pNew->iNumber!=0)
	{
		iCount++;
		if(iCount==1)
		{
			pNew->pNext=pHead;				/*使得指向为空*/
			pEnd=pNew;						/*跟踪新加入的结点*/
			pHead=pNew;						/*头指针指向首结点*/
		}
		else
		{
			pNew->pNext=NULL;				/*新结点的指针为空*/
			pEnd->pNext=pNew;				/*原来的结点指向新结点*/
			pEnd=pNew;						/*pEnd指向新结点*/
		}
		pNew=(struct Student*)malloc(sizeof(struct Student));
												/*再次分配结点内存空间*/
		scanf("%s",&pNew->cName);
		scanf("%d",&pNew->iNumber);
	}
	free(pNew);								/*释放没有用到的空间*/
	return pHead;
}
void Print(struct Student* pHead)
{
	struct Student *pTemp;					/*循环所用的临时指针*/
	int iIndex=1;							/*表示链表中结点的序号*/
	printf("*****本名单中有%d个学生:*****\n",iCount);		/*消息提示*/
	printf("\n");							/*换行*/
	pTemp=pHead;								/*指针得到首结点的地址*/
	while(pTemp!=NULL)
	{
		printf("第%d个学生是:\n",iIndex);
		printf("姓名: %s\n",pTemp->cName);		/*输出姓名*/
		printf("学号: %d\n",pTemp->iNumber);		/*输出学号*/
		printf("\n");							/*输出换行*/
		pTemp=pTemp->pNext;						/*移动临时指针到下一个结点*/
		iIndex++;								/*进行自加运算*/
	}
}
struct Student* Insert(struct Student* pHead)
{
	struct Student* pNew;						/*指向新分配的空间*/
	printf("请先输入学生的姓名，然后输入学生的学号\n");	/*提示信息*/
	pNew=(struct Student*)malloc(sizeof(struct Student));
													/*分配内存空间，并返回指向该
													内存空间的指针*/
	scanf("%s",&pNew->cName);
	scanf("%d",&pNew->iNumber);
	pNew->pNext=pHead;							/*新结点指针指向原来的首结点*/
	pHead=pNew;									/*头指针指向新结点*/
	iCount++;									/*增加链表结点数量*/
	return pHead;								/*返回头指针*/
}
int main()
{
	struct Student* pHead;						/*定义头结点*/
	pHead=Create();								/*创建结点*/
	pHead=Insert(pHead);							/*插入结点*/
	Print(pHead);								/*输出链表*/
	return 0;									/*程序结束*/
}
