#include<stdio.h>
char ShowChar();					/*函数的声明*/
int main()
{
	char cResult;
	cResult=ShowChar();			/*调用自定义函数Show Char()，并将出函数的结果赋
									/*值给变量cResult*/
	printf("%c\n",cResult);		/*将返回的结果进行输出*/
	return 0;					/*程序结束*/
}
char ShowChar()
{
	int iNumber;					/*定义整型变量*/
	printf("请输入ASCII码:\n");	/*输出提示信息*/
	scanf("%d",&iNumber);		/*输入一个整型变量*/
	return iNumber;				/*返回的是整型*/
}
