#include<stdio.h>
#define MAX(x,y) (x)>(y)?(x):(y)
main()
{
	int a,b,c;
	printf("please input a,b and c:\n");
	scanf("%d%d%d",&a,&b,&c);
	printf("the maximum number is:%d\n",MAX(MAX(a,b),c));
}