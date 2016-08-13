#include<stdio.h>
#include<string.h>
int main()
{
	char str1[50];						/*定义三个字符数组，保存用户输入的三个字符串*/
	char str2[50];
	char str3[50];
	char *maxstr;						/*定义一个字符串指针，保存指向长度最大的字符串的指针*/
	printf("请输入三个字符串：\n");		/*提示用户输入三个字符串*/
	scanf("%s%s%s",str1,str2,str3);					/*读取三个字符串*/
	maxstr=str1;						/*首先令maxstr指向第一个字符串*/
	if(strlen(maxstr)<strlen(str2))		/*若str2的长度大，则令maxstr指向str2*/
	{
		maxstr=str2;
	}
	if(strlen(maxstr)<strlen(str3))		/*若str3的长度长，则令maxstr指向str3*/
	{
		maxstr=str3;
	}

	printf("字符串1为：%s，其长度为：%d\n",str1,strlen(str1));
	printf("字符串2为：%s，其长度为：%d\n",str2,strlen(str2));
	printf("字符串3为：%s，其长度为：%d\n",str3,strlen(str2));
	printf("长度最长的字符串为：%s,其长度为：%d\n",maxstr,strlen(maxstr));
	return 0;
}
