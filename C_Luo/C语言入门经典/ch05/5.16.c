#include<stdio.h>
int main()
{
	int iSum=0;								/*�����������ʾ�����ܺ�*/
	int i=1;									/*��ʾÿһ������*/
	while(i<=100)							/*ʹ��whileѭ��*/
	{
		iSum=iSum+i;							/*�����ۼ�*/
		i++;									/*��������*/
	}
	printf("100������Ȼ�����ܺ�Ϊ��%d\n",iSum);	/*��������*/
	return 0;
}
