#include<stdio.h>
void swap(int *p1, int *p2) 						/*�Զ��彻������*/
{
	int temp;
	temp =  *p1;
	*p1 =  *p2;
	*p2 = temp;
}
void exchange(int *pt1, int *pt2, int *pt3) 		/*�������Ӵ�С����*/
{
	if (*pt1 <  *pt2)
		swap(pt1, pt2); 						/*����swap����*/
	if (*pt1 <  *pt3)
		swap(pt1, pt3);
	if (*pt2 <  *pt3)
		swap(pt2, pt3);
}
main()
{
	int a, b, c,  *q1,  *q2,  *q3;
	puts("��������������Ҫ�Ƚϴ�С������:");
	scanf("%d,%d,%d", &a, &b, &c);
	q1 = &a; 								/*������a��ַ����ָ�����q1*/
	q2 = &b;
	q3 = &c;
	exchange(q1, q2, q3); 					/*����exchange����*/
	printf("���������Ӵ�С��˳�����Ϊ:");
	printf("\n%d,%d,%d\n", a, b, c);
}
