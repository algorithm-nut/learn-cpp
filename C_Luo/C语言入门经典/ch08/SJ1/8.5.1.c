#include<stdio.h>
#include<string.h>
reverse(char*p)
{
	int len=strlen(p)-1;
	int i;
	for(i=0;i<=len/2;++i)
	{
		char ch=*(p+i);
		*(p+i)=*(p+len-i);
		*(p+len-i)=ch;
	}
}
main()
{
	char str[50];
	char *p;
	printf("输入一串字符：\n");
	gets(str);
	p=str;
	printf("原字符串为：\n");
	puts(p);
	reverse(p);
	printf("反转后字符串为：\n");
	puts(p);
}