#include <stdio.h>
int main()
{
	int i;											/*定义循环时使用的变量*/
	char String[7]  = {"mrsoft"};						/*定义并初始化源字符串*/
	char Reverse[7] = {0};							/*定义并初始化目标字符串*/
	int size;
	size = sizeof(String);							/*计算源字符串长度*/
	for(i=0;i<6;i++)									/*for循环语句读取字符*/
	{
		Reverse[size-i-2] = String[i];				/*向目标字符串中插入字符*/
	}
	printf("输出源字符串：%s\n",String);				/*输出源字符串*/
	printf("输出目标字符串：%s\n",Reverse);				/*输出目标字符串*/
	return 0;										/*程序结束*/
}
