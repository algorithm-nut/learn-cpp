#include<stdio.h>
main()
{
	char str1[50]={0};
	char str2[50]={0};
	int index=0;
	printf("�������ַ���1��\n");
	gets(str1);
	while(str1[index]!='\0')
	{
		str2[index]=str1[index];
		++index;
	}
	printf("�ַ���2��\n");
	puts(str2);
}