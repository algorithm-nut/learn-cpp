#include<stdio.h>
int main()
{
	char *Char="I LOVE CHINA";			/*定义字符串指针变量*/
	puts("I LOVE CHINA!");				/*输出字符串常量*/
	puts("I\0 LOVE\0 CHINA!");			/*输出字符串常量，其中加入结束符'\0'*/
	puts(Char);							/*输出字符串变量的值*/
	Char="I LOVE\0 CHINA!";				/*改变字符串变量的值*/
	puts(Char);							/*输出字符串变量的值*/
	return 0;							/*程序结束*/
}
