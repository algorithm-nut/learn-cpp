#include<stdio.h>
struct Student								/*ѧ���ṹ*/
{
	char cName[20];							/*����*/
	int  iNumber;							/*ѧ��*/
	char cSex[20];							/*�Ա�*/
	int iGrade;								/*�꼶*/
} student[5]={
		{"������",12062212,"��",3},
		{"������",12062213,"Ů",3},
		{"��ѩ��",12062214,"Ů",3},
		{"����",12062215,"Ů",3},
		{"����",12062216,"��",3}
		};									/*�������鲢���ó�ʼֵ*/
int main()
{
	struct Student* pStruct;
	int index;
	pStruct=student;
	for(index=0;index<5;index++,pStruct++)
	{
		printf("NO%d student:\n",index+1);		/*�������ѧ��������*/
		/*ʹ�ñ���index���±꣬��������е�Ԫ������*/
		printf("Name: %s, Number: %d\n",pStruct->cName,pStruct->iNumber);
		printf("Sex: %s, Grade: %d\n",pStruct->cSex,pStruct->iGrade);
		printf("\n");							/*�ո���*/
	}
	return 0;
}
