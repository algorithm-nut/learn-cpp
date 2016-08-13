#include<stdio.h>
#define MUL(x,y) (x)*(y)
main()
{
	int x,y;
	printf("please input x and y:\n");
	scanf("%d%d",&x,&y);
	printf("the result is:%d\n",MUL(x,y));
}
