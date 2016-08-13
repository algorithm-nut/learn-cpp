#include<stdio.h>
#define SWAP(x,y) x=x+y;y=x-y;x=x-y
main()
{
	int x,y;
	printf("please input x and y:\n");
	scanf("%d%d",&x,&y);
	printf("before swap:\n");
	printf("x=%d,y=%d\n",x,y);
	SWAP(x,y);
	printf("after swap:\n");
	printf("x=%d,y=%d\n",x,y);
}