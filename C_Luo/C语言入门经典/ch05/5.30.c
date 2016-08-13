#include<stdio.h>
int main()
{
	int n,i,iSum;									/*定义三个整型变量*/
	iSum=0; 											/*给变量赋值*/
	i=1;
	printf("请输入一个整数:");							/*输出提示信息*/
	scanf("%d",&n);									/*要求输入一个数值*/
	loop:  if(i<=n)									/*跳转语句执行位置*/
	{
		iSum+=i;										/*循环体*/
		i++;
		goto loop;									/*执行goto跳转语句*/
	}
	printf("计算%d以内的整数总和的结果为：%d\n",n,iSum);	/*将结果输出*/
	return 0;
}
