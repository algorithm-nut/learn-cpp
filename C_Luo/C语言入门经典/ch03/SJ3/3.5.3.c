#include<stdio.h>
int main()
{
	char ch;
	printf("输入一个大写字母：\n");
	ch=getchar();
	ch=ch+32;
	printf("该字母的小写形式为：%c\n",ch);
	return 0;
}