#include<stdio.h>
main()
{
	long i;
	long *p;
	printf("������һ����ֵ:\n");
	scanf("%ld",&i);
	p=&i;
	printf("���&*p���Ϊ: %ld\n",&*p); 				/*�������i�ĵ�ַ*/
	printf("���&i���Ϊ: %ld\n",&i); 					/*�������i�ĵ�ַ*/
}
