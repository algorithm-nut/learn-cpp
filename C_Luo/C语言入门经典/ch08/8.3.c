#include<stdio.h>
main()
{
	long i;
	long *p;
	printf("请输入一个数值:\n");
	scanf("%ld",&i);
	p=&i;
	printf("输出&*p结果为: %ld\n",&*p); 				/*输出变量i的地址*/
	printf("输出&i结果为: %ld\n",&i); 					/*输出变量i的地址*/
}
