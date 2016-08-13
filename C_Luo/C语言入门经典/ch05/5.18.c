#include<stdio.h>
int main()
{
	int n,i,iSum;									/*定义三个整型变量*/
	iSum=0;											/*给变量赋值*/
	printf("请输入一个整数:");							/*输出提示信息*/
	scanf("%d",&n);									/*要求输入一个数值*/
	i=n;
	while(i)											/*使用while循环*/
	iSum+=i--;										/*进行运算*/
	printf("计算%d以内的整数总和为：%d\n",n,iSum);		/*将结果输出*/
	return 0;
}
