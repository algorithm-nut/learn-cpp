#include<stdio.h>
#include<stdlib.h>
main()
{
	int (*p)[3];
	int i,j;
	for(i=0;i<3;++i)
	{
		for(j=0;j<3;++j)
		{
			int *s=(*(p+i)+j);
			s=(int*)malloc(sizeof(int));
			*s=i+j;
			printf("%d\t",*s);
			free(s);
		}
		printf("\n");
	}
}
