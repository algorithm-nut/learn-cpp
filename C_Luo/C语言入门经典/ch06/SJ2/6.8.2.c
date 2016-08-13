#include<stdio.h>
#include<ctype.h>
main()
{
	char str[100]={0};
	int index=0;
	int alpha=0;
	int digit=0;
	int space=0;
	int other=0;
	printf("请输入一组字符串:\n");
	gets(str);
	while(str[index]!='\0')
	{
		if(isalpha(str[index]))
		{
			++alpha;
		}else if(isdigit(str[index]))
		{
			++digit;
		}else if(str[index]==' ')
		{
			++space;
		}else
		{
			++other;
		}
		++index;
	}
	printf("字符：%d\n",alpha);
	printf("数字：%d\n",digit);
	printf("空格：%d\n",space);
	printf("其他字符：%d\n",other);
}