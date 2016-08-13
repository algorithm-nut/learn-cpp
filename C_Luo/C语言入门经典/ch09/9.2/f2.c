#include<stdio.h>
#include"f1.h"							/*包含文件f1.h*/
main()
{
	int a;
	P("请输入一个整数值:\n");
	S(D,&a); 							/*调用f1中的宏定义*/
	P("输入的整数值为:\n");
	P(D,a); 								/*调用f1中的宏定义*/
	P("\n");
	P(C,a);
	P("\n");
}
