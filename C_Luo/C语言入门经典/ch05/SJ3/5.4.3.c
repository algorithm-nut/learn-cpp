#include<stdio.h>
main()
{
	char ch;
	for(ch='A';ch<='Z';++ch)
	{
		printf("字母 %c 对应的ASCII码为：%d\n",ch,ch);
	}
}