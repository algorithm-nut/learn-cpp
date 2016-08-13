#include<stdio.h>
int main()
{
	int i=1,a,b,c,d;									/*声明整型变量*/
	a=++i;											/*前缀自增运算*/
	printf("a=%d,i=%d\n",a,i);						/*输出运算后的数值*/
	b=--i;											/*前缀自减运算*/
	printf("b=%d,i=%d\n",b,i);						/*输出运算后的数值*/
	c=i++;											/*后缀自增运算*/
	printf("c=%d,i=%d\n",c,i);						/*输出运算后的数值*/
	d=i--;											/*后缀自减运算*/
	printf("d=%d,i=%d\n",d,i);						/*输出运算后的数值*/
	return 0;
}
