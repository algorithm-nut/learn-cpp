#include<stdio.h>
#include<stdlib.h>
struct Student
{
	char cName[20];							/*����*/
	int iNumber;								/*ѧ��*/
	struct Student* pNext;					/*ָ����һ������ָ��*/
};
int iCount;									/*ȫ�ֱ�����ʾ������*/
struct Student* Create()
{
	struct Student* pHead=NULL;				/*��ʼ������ͷָ��Ϊ��*/
	struct Student* pEnd,*pNew;
	iCount=0;								/*��ʼ��������*/
	pEnd=pNew=(struct Student*)malloc(sizeof(struct Student));
	printf("��������ѧ����������Ȼ������ѧ����ѧ��\n");
	scanf("%s",&pNew->cName);
	scanf("%d",&pNew->iNumber);
	while(pNew->iNumber!=0)
	{
		iCount++;
		if(iCount==1)
		{
			pNew->pNext=pHead;				/*ʹ��ָ��Ϊ��*/
			pEnd=pNew;						/*�����¼���Ľ��*/
			pHead=pNew;						/*ͷָ��ָ���׽��*/
		}
		else
		{
			pNew->pNext=NULL;				/*�½���ָ��Ϊ��*/
			pEnd->pNext=pNew;				/*ԭ���Ľ��ָ���½��*/
			pEnd=pNew;						/*pEndָ���½��*/
		}
		pNew=(struct Student*)malloc(sizeof(struct Student));
												/*�ٴη������ڴ�ռ�*/
		scanf("%s",&pNew->cName);
		scanf("%d",&pNew->iNumber);
	}
	free(pNew);								/*�ͷ�û���õ��Ŀռ�*/
	return pHead;
}
void Print(struct Student* pHead)
{
	struct Student *pTemp;					/*ѭ�����õ���ʱָ��*/
	int iIndex=1;							/*��ʾ�����н������*/
	printf("*****����������%d��ѧ��:*****\n",iCount);		/*��Ϣ��ʾ*/
	printf("\n");							/*����*/
	pTemp=pHead;								/*ָ��õ��׽��ĵ�ַ*/
	while(pTemp!=NULL)
	{
		printf("��%d��ѧ����:\n",iIndex);
		printf("����: %s\n",pTemp->cName);	/*�������*/
		printf("ѧ��: %d\n",pTemp->iNumber);	/*���ѧ��*/
		printf("\n");						/*�������*/
		pTemp=pTemp->pNext;					/*�ƶ���ʱָ�뵽��һ�����*/
		iIndex++;							/*�����Լ�����*/
	}
}
struct Student* Insert(struct Student* pHead)
{
	struct Student* pNew;					/*ָ���·���Ŀռ�*/
	printf("��������ѧ����������Ȼ������ѧ����ѧ��\n");	/*��ʾ��Ϣ*/
	/*�����ڴ�ռ䣬������ָ����ڴ�ռ��ָ��*/
	pNew=(struct Student*)malloc(sizeof(struct Student))	;
	scanf("%s",&pNew->cName);
	scanf("%d",&pNew->iNumber);
	pNew->pNext=pHead;						/*�½��ָ��ָ��ԭ�����׽��*/
	pHead=pNew;								/*ͷָ��ָ���½��*/
	iCount++;								/*��������������*/
	return pHead;							/*����ͷָ��*/
}
void Delete(struct Student* pHead,int iIndex)
											/*pHead��ʾͷ��㣬iIndex��ʾҪɾ����
											����±�*/
{
	int i; 								/*����ѭ������*/
	struct Student* pTemp;				/*��ʱָ��*/
	struct Student* pPre;				/*��ʾҪɾ�����ǰ�Ľ��*/
	pTemp=pHead;							/*�õ�ͷ���*/
	pPre=pTemp;
	printf("*****ɾ����%d��ѧ��*****\n",iIndex);	/*��ʾ��Ϣ*/
	for(i=1;i<iIndex;i++)				/*forѭ��ʹ��pTempָ��Ҫɾ���Ľ��*/
	{
		pPre=pTemp;
		pTemp=pTemp->pNext;
	}
	pPre->pNext=pTemp->pNext;			/*����ɾ��������ߵĽ��*/
	free(pTemp);							/*�ͷ�Ҫɾ�������ڴ�ռ�*/
	iCount--;							/*���������е�Ԫ�ظ���*/
}
int main()
{
	struct Student* pHead;				/*����ͷ���*/
	pHead=Create();						/*�������*/
	pHead=Insert(pHead);					/*������*/
	Delete(pHead,2);						/*ɾ���ڶ������Ĳ���*/
	Print(pHead);						/*�������*/
	return 0;							/*�������*/
}
