#include<stdio.h>
#include<string.h>
typedef char Array[50];
main()
{
	char a[50];
	Array b;
	printf("�����ַ���a:\n");
	gets(a);
	printf("�����ַ���b:\n");
	gets(b);
	printf("�ַ���a��b���Ӻ�Ϊ:\n");
	puts(strcat(a,b));
}
