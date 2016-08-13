#include<stdio.h>
main()
{
	float mx,my,nx,ny;
	float r,result;
	printf("输入圆心坐标(a,b)、圆的半径r以及点的坐标(c,d):\n");
	scanf("(%f,%f) %f (%f,%f)",&mx,&my,&r,&nx,&ny);
	result=(mx-nx)*(mx-nx)+(my-ny)*(my-ny)-r*r;
	if(result>0)
	{
		printf("点在圆外\n");
	}
	else if(result<0)
	{
		printf("点在圆内\n");
	}
	else
	{
		printf("点在圆上\n");
	}
}