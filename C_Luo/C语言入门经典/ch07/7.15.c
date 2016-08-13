#include<stdio.h>
int Fibonacci(int n);			/*函数声明*/
int main()
{
	int m,result;
	printf("请输入一于整数:\n");
	scanf("%d",&m);
	result=Fibonacci(m);		/*调用Fibonacci计算斐波纳契数列的第m项*/
	printf("斐波纳契数列的第%d项为：%d\n",m,result);
	return 0;					/*程序结束*/
}
int Fibonacci(int n)
{
	if(n==1||n==2)				/*如果n等于1或2，则结果就是1*/
	{
		return 1;
	}
	else						/*否则结果就是它前面两项的和*/
	{
		return Fibonacci(n-1)+Fibonacci(n-2);/*递归调用Fibonacci函数*/
	}
}