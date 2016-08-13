#include<stdio.h>
int main()
{
	int a,b;						/*保存用户输入的两个数*/
	int min;						/*保存两个数中较小的数*/
	printf("请输入两个整数：\n");	
	scanf("%d%d",&a,&b);			/*读取用户输入的两个数*/
	min=(a<=b)?a:b;					/*使用条件运算符求较小的数*/
	printf("较小的数是：%d\n",min);	/*输出运算结果*/
	return 0;
}