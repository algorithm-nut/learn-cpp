#include<stdio.h>
struct Student									/*ѧ���ṹ*/
{
	char cName[20];								/*����*/
	char cSex[20];								/*�Ա�*/
	int iAge;									/*����*/
} student1={"���¡","Ů",18};						/*������������ó�ʼֵ*/
int main()
{
	struct Student student2={"�ǿ","��",20};	/*������������ó�ʼֵ*/
	/*����һ���ṹ���е��������*/
	printf("����ѧ��1������Ϊ:\n");
	printf("����: %s\n",student1.cName);
	printf("�Ա�: %s\n",student1.cSex);
	printf("����: %d\n",student1.iAge);
	/*���ڶ����ṹ���е��������*/
	printf("����ѧ��2������Ϊ:\n");
	printf("����: %s\n",student2.cName);
	printf("�Ա�: %s\n",student2.cSex);
	printf("����: %d\n",student2.iAge);
	return 0;
}
