#include<stdio.h>
int max(int,int);				/*函数声明*/
int main()
{
	int a,b,c;
	printf("输入两个整数;\n");
	scanf("%d%d",&a,&b);
	c=max(a,b);					/*调用函数*/
	printf("较大的数是：%d\n",c);
	return 0;
}
int max(int x,int y)			/*函数调用*/
{
	int z;
	z=x>y?x:y;
	return z;
}