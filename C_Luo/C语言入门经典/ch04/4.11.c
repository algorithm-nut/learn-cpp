#include<stdio.h>
int main()
{
	int a;									/*声明变量*/
	printf("请输入一个数值:\n");				/*提示信息*/
	scanf("%d",&a);							/*要求输入一个数值，给变量赋值*/
	a+=a*=a/=a-6;							/*复合赋值运算*/
	printf("其运算的结果为:%d\n",a);			/*将运算结果输出*/
	return 0;
}
