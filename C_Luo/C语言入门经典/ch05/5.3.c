#include<stdio.h>
#define PI 3.14
main()
{
	float mx,my,nx,ny;
	float r,S;
	printf("����Բ������\n");
	scanf("%f%f",&mx,&my);
	printf("����Բ���ϵ�����һ��\n");
	scanf("%f%f",&nx,&ny);
	r=(mx-nx)*(mx-nx)+(my-ny)*(my-ny);
	S=(float)PI*r;
	printf("Բ������ǣ�%.2f\n",S);
}