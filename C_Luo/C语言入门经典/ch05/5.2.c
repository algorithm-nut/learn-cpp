#include<stdio.h>
int main()
{
	int a,b,t;									/*定义三个整型变量*/
	printf("请输入两个整数值:\n");					/*显示提示信息*/
	scanf("%d,%d",&a,&b);						/*输入两个数*/
	printf("a=%d,b=%d\n",a,b);					/*输出两个变量的值*/
	t=a;											/*交换三个变量的过程*/
	a=b;
	b=t;
	printf(" 交换后的两个变量的值为\n");
	printf("a=%d,b=%d\n",a,b);					/*输出交换后的两个变量的值*/
	return 0;									/*程序结束*/
}
