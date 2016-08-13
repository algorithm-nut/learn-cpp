#include<stdio.h>
main()
{
	int i;
	int *p;
	printf("请输入一个数值:\n");
	scanf("%d",&i);
	p=&i; 									/*将变量i的地址赋给指针变量*/
	printf("输出p的结果为: %d\n",p);
	p++;										/*地址加1，这里的1并不代表一字节*/
	printf("输出p++的结果为: %d\n",p);
	return 0;
}
