
#include<stdio.h>
#include<string.h>
struct Student								/*ѧ���ṹ*/
{
	char cName[20];							/*����*/
	int  iNumber;							/*ѧ��*/
	char cSex[20];							/*�Ա�*/
	int iGrade;								/*�꼶*/
}student;									/*�������*/
int main()
{
	struct Student* pStruct;					/*����ṹ������ָ��*/
	pStruct=&student;						/*ָ��ָ��ṹ�����*/
	strcpy(pStruct->cName,"����Ⱥ");			/*���ַ����������Ƶ���Ա������*/
	pStruct->iNumber=12061212;				/*Ϊ��Ա������ֵ*/
	strcpy(pStruct->cSex,"Ů");				/*���ַ����������Ƶ���Ա������*/
	pStruct->iGrade=2;
	printf("********ѧ������********\n");		/*��Ϣ��ʾ*/
	printf("����: %s\n",student.cName);		/*ʹ�ñ���ֱ�����*/
	printf("ѧ��: %d\n",student.iNumber);
	printf("�Ա�: %s\n",student.cSex);
	printf("�꼶: %d\n",student.iGrade);
	return 0;
}
