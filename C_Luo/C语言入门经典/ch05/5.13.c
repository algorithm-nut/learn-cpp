#include<stdio.h>
int main()
{
	float a,b;									/*�������������ȵı���*/
	char c;										/*����һ���ַ��ͱ���*/
	printf("Please input:a+(-,*,/)b\n");			/*��ʾ������Ϣ*/
	scanf("%f%c%f",&a,&c,&b);					/*��������ֵ*/
	switch(c)									/*����������ı仯�ó����*/
	{
		case '+':printf("%f\n",a+b);				/*�ӷ������������֮��*/
			break;
		case '-':printf("%f\n",a-b);				/*�����������������֮��*/
			break;
		case '*':printf("%f\n",a*b);				/*�˷��������������֮��*/
			break;
		case '/':								/*��������*/
		if(!b)									/*bֵȡ��*/
		{
			printf("can not divide by zero.\n ");	/*��ʾ��������bֵΪ0*/
			break;
		}
		else										/*��b������0ʱ*/
		{
			printf("%.2f\n",a/b);				/*������������������*/
			break;
		}
		default:									/*��������ʱ����*/
			printf("Please input:a+(-,*,/)b again\n");/*Ҫ����������*/
		}
	return 0;										/*�������*/
}
