#include<stdio.h>
main()
{
	register int i;
	long res=1;
	for(i=1;i<=25;++i)
	{
		res=res*i;
	}
	printf("25�Ľ׳���%d\n",res);
}