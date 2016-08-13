#include<stdio.h>
void main()
{
	int a,b,c;
	int tmp;
	printf("输入三个整数\n");
	scanf("%d%d%d",&a,&b,&c);
	tmp=(a<b)?a:b;
	printf("三个数中的最小值为：%d\n",(tmp<c)?tmp:c);
}