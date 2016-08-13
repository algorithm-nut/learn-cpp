#include<stdio.h>
#include<stdlib.h>
#define LEN sizeof(char[26])
int main()
{
	int i;										/*循环变量*/
	char *ch1=(char*)calloc(26,sizeof(char));	/*使用calloc动态分配一个长度为26字符的字符数组*/
	char *ch2=(char*)malloc(LEN);				/*使用malloc动态分配一个长度为26字符的字符数组*/
	for(i=0;i<26;++i)							/*为两个字符数组赋值*/
	{	
		ch1[i]=65+i;							/*ch1是大写字母数组*/							
		ch2[i]=97+i;							/*ch2是小写字母数组*/
	}
	printf("26个大写字母：\n");
	for(i=0;i<26;++i)							/*打印大写字母*/
	{
		printf("%c ",ch1[i]);
		if(i==12||i==25)
			printf("\n");
	}
	printf("26个小写字母：\n");
	for(i=0;i<26;++i)							/*打印小写字母*/
	{
		printf("%c ",ch2[i]);
		if(i==12||i==25)
			printf("\n");
	}
	return 0;									/*程序结束*/
}