#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *p;									/*整型指针*/
	char *str;								/*指向字符数组的指针*/
	p=(int*)malloc(sizeof(int));			/*申请一个整型变量的内存*/
	str=(char*)malloc(sizeof(char[20]));	/*申请一个长度为20的字符数组所占的内存*/
	printf("请输入一个整数:\n");
	scanf("%d",p);
	printf("请输入一串字符串:\n");
	scanf("%s",str);
	printf("您刚输入的整数为:%d\n",*p);
	printf("您刚输入的字符串为:%s\n",str);
	return 0;
}