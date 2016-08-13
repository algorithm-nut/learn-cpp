#include<stdio.h>
#include<malloc.h>
main()
{
	int *pInt,*p,i;
	pInt=(int*)calloc(3,sizeof(int));
	p=pInt;
	for(i=1;i<4;++i)
	{
		*pInt=10*i;
		printf("%d\n",*pInt);
		++pInt;
	}
	free(p);
}