#include<stdio.h>
int main()
{
	struct Student							/*ѧ���ṹ*/
	{
		char cName[20];						/*����*/
		int  iNumber;						/*ѧ��*/
		char cSex[20];						/*�Ա�*/
		int iGrade;							/*�꼶*/
	}student={"����Ⱥ",12061212,"Ů",2};		/*�Խṹ��������г�ʼ��*/
	struct Student* pStruct;					/*����ṹ������ָ��*/
	pStruct=&student;						/*ָ��ָ��ṹ�����*/
	printf("********ѧ������********\n");		/*��Ϣ��ʾ*/
	printf("����: %s\n",(*pStruct).cName);	/*ʹ��ָ�����ñ����еĳ�Ա*/
	printf("ѧ��: %d\n",(*pStruct).iNumber);
	printf("�Ա�: %s\n",(*pStruct).cSex);
	printf("�꼶: %d\n",(*pStruct).iGrade);
	return 0;
}
