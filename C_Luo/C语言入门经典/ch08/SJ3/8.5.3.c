#include<stdio.h>
#include<string.h>
mate(char *str1,char *str2)
{
	int len1=strlen(str1);
	int len2=strlen(str2);
	int i,j;
	for(i=0,j=len1;i<=len2;++i,j++)//i<=len2����'\0'���Ƶ�str1�У���Ϊ��β
	{
		*(str1+j)=*(str2+i);
	}
}
main()
{
	char str1[100],str2[50];
	printf("�����ַ���1��\n");
	gets(str1);
	printf("�����ַ���2��\n");
	gets(str2);
	mate(str1,str2);
	printf("���Ӻ���ַ���Ϊ��\n");
	puts(str1);
}