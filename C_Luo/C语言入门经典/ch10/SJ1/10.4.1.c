#include<stdio.h>
#include<stdlib.h>
main()
{
	int *pInt;
	int i;
	for(i=1;i<4;++i)
	{
		pInt=(int*)malloc(sizeof(int));
		*pInt=10*i;
		printf("%d\n",*pInt);
		free(pInt);
	}
}