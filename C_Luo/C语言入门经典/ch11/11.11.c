#include<stdio.h>
struct date							/*ʱ��ṹ*/
{
	int year;						/*��*/
	int month;						/*��*/
	int day;							/*��*/
};
struct student						/*ѧ����Ϣ�ṹ*/
{
	char name[30];					/*����*/
	int num;							/*ѧ��*/
	char sex[20];					/*�Ա�*/
	struct date birthday;			/*��������*/
}student={"����Ⱥ",12061212,"Ů",{1986,12,6}};	/*Ϊ�ṹ������ʼ��*/
int main()
{
	printf("********ѧ���ɼ�********\n");
	printf("����: %s\n",student.name);	/*����ṹ��Ա*/
	printf("ѧ��: %d\n",student.num);
	printf("�Ա�: %s\n",student.sex);
	printf("��������: %d,%d,%d\n",student.birthday.year,
	student.birthday.month,student.birthday.day);	/*�����Ա�ṹ������*/
	return 0;
}
