#include<stdio.h>
void main()
{
	int i=1;
	int j=3;
	int my,mx,ny,nx;
	mx=++j;
	j+=2;
	my=j++;
	nx=i++;
	i+=i++;
	ny=++i;
	printf("%d\t%d\t%d\t%d\n",mx,my,nx,ny);
}