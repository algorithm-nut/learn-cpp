#include<stdio.h>
main()
{
	long i;
	long *p;
	printf("������һ����ֵ:\n");
	scanf("%ld",&i);
	p=&i;
	printf("���*&i�Ľ��Ϊ: %ld\n",*&i); 			/*�������i��ֵ*/
	printf("���i�Ľ��Ϊ: %ld\n",i);				/*�������i��ֵ*/
	printf("���*&i�Ľ��Ϊ: %ld\n",*p); 			/*ʹ��ָ����ʽ���i��ֵ*/
	return 0;
}
