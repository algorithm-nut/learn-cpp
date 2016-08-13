#include<stdio.h>
#include<string.h>
typedef char Array[50];
main()
{
	char a[50];
	Array b;
	printf("输入字符串a:\n");
	gets(a);
	printf("输入字符串b:\n");
	gets(b);
	printf("字符串a与b连接后为:\n");
	puts(strcat(a,b));
}
