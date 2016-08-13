#include<stdio.h>
int fac(int n)
{
	static int res=1;
	res=res*n;
	return res;
}
main()
{
	int i;
	for(i=1;i<=10;++i)
		printf("%2dµÄ½×³ËÎª:\t%d\n",i,fac(i));
}