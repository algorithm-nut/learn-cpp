#include<stdio.h>
int main()
{
	int i =1;									/*���������Ϊ��������ʼֵ*/
	int iSum=0;									/*��������Ľ��*/
	/*ʹ��forѭ��*/
	for(;i <=100;i ++)
	{
		iSum=i +iSum;							/*�ۼӼ���*/
	}
	printf("1��100���ּ���ۼӼ���:%d\n",iSum);	/*���������*/
	return 0;
}
