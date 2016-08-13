#include<stdio.h>
#include<string.h>
mate(char *str1,char *str2)
{
	int len1=strlen(str1);
	int len2=strlen(str2);
	int i,j;
	for(i=0,j=len1;i<=len2;++i,j++)//i<=len2连接'\0'复制到str1中，作为结尾
	{
		*(str1+j)=*(str2+i);
	}
}
main()
{
	char str1[100],str2[50];
	printf("输入字符串1：\n");
	gets(str1);
	printf("输入字符串2：\n");
	gets(str2);
	mate(str1,str2);
	printf("连接后的字符串为：\n");
	puts(str1);
}