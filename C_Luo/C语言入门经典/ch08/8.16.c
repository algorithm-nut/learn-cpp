#include <stdio.h>
void swap(int *a,int *b)
{
	int tmp;
	tmp=*a;
	*a=*b;
	*b=tmp;
}
main()
{
	int x,y;
	int *p_x,*p_y;
	printf("������������:\n");
	scanf("%d",&x);
	scanf("%d",&y);
	printf("x=%d\n",x);
	printf("y=%d\n",y);
	p_x=&x;
	p_y=&y;
	swap(p_x,p_y);
	printf("�����������Ľ��Ϊ:\n");
	printf("x=%d\n",x);
	printf("y=%d\n",y);
	return 0;
}
