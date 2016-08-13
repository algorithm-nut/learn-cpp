#include<stdio.h>								/*引用头文件*/
Shmily_a()										/*定义无参函数Shmily_a*/
{
	int i;										/*定义整型变量i*/
	for(i=1;i<=20;i++)   	     					/*for循环语句*/
	{
		printf("*");								/*输出“*”号*/
	}
	printf("\n");								/*换行*/
}
Shmily_b(char s[])								/*定义有参函数Shmily_b*/
{
	printf("\t");		 		/*输出转义字符*/
	printf("%s\n",s);							/*输出字符串并换行*/
}
void main()										/*主函数main*/
{
	Shmily_a();									/*调用函数Shmily_a*/
	Shmily_b("Hello");							/*调用函数Shmily_b，													主函数的函数体			/*输出Hello字符串*/
	Shmily_a();              						/*调用函数Shmily_a*/
	Shmily_a();									/*调用函数Shmily_a*/
	Shmily_b("Ming Ri");							/*调用函数Shmily_b，																		/*输出Ming Ri字符串*/
		Shmily_a();								/*调用函数Shmily_a*/
}
