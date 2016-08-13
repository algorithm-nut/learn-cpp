#include<stdio.h>
#define MUL(x,y) ((x)*(y))				/*定义两个数之和*/
int main()
{
	int a,b,c;
	printf("请输入两个整数：\n");
	scanf("%d%d",&a,&b);
	c=MUL(a,b);						/*调用宏定义*/
	printf("两数乘积为：%d\n",c);
	return 0;
}