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
	printf("������һ���ַ���:\n");
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
	printf("�ַ���%d\n",alpha);
	printf("���֣�%d\n",digit);
	printf("�ո�%d\n",space);
	printf("�����ַ���%d\n",other);
}