#include<stdio.h>
main()
{
	float mx,my,nx,ny;
	float r,result;
	printf("����Բ������(a,b)��Բ�İ뾶r�Լ��������(c,d):\n");
	scanf("(%f,%f) %f (%f,%f)",&mx,&my,&r,&nx,&ny);
	result=(mx-nx)*(mx-nx)+(my-ny)*(my-ny)-r*r;
	if(result>0)
	{
		printf("����Բ��\n");
	}
	else if(result<0)
	{
		printf("����Բ��\n");
	}
	else
	{
		printf("����Բ��\n");
	}
}