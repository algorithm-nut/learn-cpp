#include<stdio.h>
typedef struct Student								/*ѧ���ṹ*/
{
	char cName[20];							/*����*/
	int  iNumber;							/*ѧ��*/
	char cSex[20];							/*�Ա�*/
	int iGrade;								/*�꼶*/
} Stu[5];							/*�������鲢���ó�ʼֵ*/
int main()
{
	int i;								/*ѭ�����Ʊ���*/
	Stu student={
		{"������",12062212,"��",3},
		{"������",12062213,"Ů",3},
		{"��ѩ��",12062214,"Ů",3},
		{"����",12062215,"Ů",3},
		{"����",12062216,"��",3}
		};	
	for(i=0;i<5;i++)						/*ʹ��for������5��ѭ��*/
	{
		printf("NO%d student:\n",i+1);	/*�������ѧ��������*/
		/*ʹ�ñ���i���±꣬��������е�Ԫ������*/
		printf("Name: %s, Number: %d\n",student[i].cName,student[i].iNumber);
		printf("Sex: %s, Grade: %d\n",student[i].cSex,student[i].iGrade);
		printf("\n");					/*�ո���*/
	}
	return 0;
}
