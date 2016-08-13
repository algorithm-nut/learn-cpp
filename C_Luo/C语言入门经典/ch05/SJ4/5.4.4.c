#include<stdio.h>
main()
{
	int i=1;
	for(;i!=101;++i)
	{
		if(i%3==0)
			continue;
		else
			printf("%d\t\t",i);
	}
}