#include<stdio.h>
main()
{
	short i;
	short *p;
	printf("请输入一个数值\n");
	scanf("%d",&i);
	p=&i; 									/*将变量i的地址赋给指针变量*/
	printf("输出指针变量p的结果: %d\n",p);
	p++;										/*地址加1，这里的1并不代表一字节*/
	printf("输出指针变量p++的结果: %d\n",p);
	return 0;
}
