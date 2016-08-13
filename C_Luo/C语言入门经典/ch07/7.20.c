#include<stdio.h>
main()
{
	register int i;
	long res=1;
	for(i=1;i<=25;++i)
	{
		res=res*i;
	}
	printf("25µÄ½×³ËÊÇ%d\n",res);
}