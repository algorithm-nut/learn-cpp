#include<stdio.h>
int Fibonacci(int n);			/*��������*/
int main()
{
	int m,result;
	printf("������һ������:\n");
	scanf("%d",&m);
	result=Fibonacci(m);		/*����Fibonacci����쳲��������еĵ�m��*/
	printf("쳲��������еĵ�%d��Ϊ��%d\n",m,result);
	return 0;					/*�������*/
}
int Fibonacci(int n)
{
	if(n==1||n==2)				/*���n����1��2����������1*/
	{
		return 1;
	}
	else						/*������������ǰ������ĺ�*/
	{
		return Fibonacci(n-1)+Fibonacci(n-2);/*�ݹ����Fibonacci����*/
	}
}