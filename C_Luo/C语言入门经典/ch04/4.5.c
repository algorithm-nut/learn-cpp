#include<stdio.h>
int main()
{
	int iNumber1,iNumber2,iNumber3,iResult=0;		/*�������ͱ���*/
	iNumber1=20;									/*Ϊ������ֵ*/
	iNumber2=5;
	iNumber3=2;
	iResult=iNumber1+iNumber2-iNumber3;			/*�ӷ����������ʽ*/
	printf("��ʽ1��������Ϊ: %d\n\n",iResult);	/*��ʾ���*/
	iResult=iNumber1-iNumber2+iNumber3;			/*�������ӷ����ʽ*/
	printf("��ʽ2��������Ϊ: %d\n\n",iResult);	/*��ʾ���*/
	iResult=iNumber1+iNumber2*iNumber3;			/*�ӷ����˷����ʽ*/
	printf("��ʽ3��������Ϊ: %d\n\n",iResult);	/*��ʾ���*/
	iResult=iNumber1/iNumber2*iNumber3;			/*�������˷����ʽ*/
	printf("��ʽ4��������Ϊ: %d\n\n",iResult);	/*��ʾ���*/
	iResult=(iNumber1+iNumber2)*iNumber3;			/*���ţ��Լ��ӷ����˷����ʽ*/
	printf("��ʽ5��������Ϊ: %d\n\n",iResult);	/*��ʾ���*/
	return 0;
}
