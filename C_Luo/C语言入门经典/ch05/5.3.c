#include<stdio.h>
#define PI 3.14
main()
{
	float mx,my,nx,ny;
	float r,S;
	printf("输入圆心坐标\n");
	scanf("%f%f",&mx,&my);
	printf("输入圆弧上的任意一点\n");
	scanf("%f%f",&nx,&ny);
	r=(mx-nx)*(mx-nx)+(my-ny)*(my-ny);
	S=(float)PI*r;
	printf("圆的面积是：%.2f\n",S);
}