#include<stdio.h>
#include<stdlib.h>
#include<string.h>
change(char *str,int n)
{
	char *p=str;
	int len=strlen(str)-1;
	int count=len-n+1;
	if(len<n)
	{
		printf("�����λ�ó������ַ����ĳ���!\n");
		exit(0);
	}
	else
	{
		char str2[50];
		int i,j;
		for(i=count;i<=len;++i)
			str2[i-count]=p[i];
		str2[n]='\0';
		for(j=n;j<=len;++j)
			str2[j]=p[j-n];
		str2[len+1]='\0';
			printf("%s\n",str2);
	}
}
main()
{
	char str[50];
	int num;
	printf("�����ַ���:\n");
	gets(str);
	printf("����Ҫ��λ�����m���ַ� :\n");
	scanf("%d",&num);
	change(str,num);
}