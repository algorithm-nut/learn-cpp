#include<stdio.h>
main()
{
	long i;
	long *p;
	printf("请输入一个数值:\n");
	scanf("%ld",&i);
	p=&i;
	printf("输出*&i的结果为: %ld\n",*&i); 			/*输出变量i的值*/
	printf("输出i的结果为: %ld\n",i);				/*输入变量i的值*/
	printf("输出*&i的结果为: %ld\n",*p); 			/*使用指针形式输出i的值*/
	return 0;
}
