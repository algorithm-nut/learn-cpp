/*////////////////////////////////////////////////////////*/
/*					ExternFun.c							*/
/*///////////////////////////////////////////////////////*/
#include<stdio.h>
extern char* GetString(char* pString);		/*声明外部函数*/
extern void ShowString(char* pString);		/*声明外部函数*/
int main()
{
	char* pMyString;							/*定义字符串变量*/
	pMyString=GetString("MingRi!");			/*调用函数为字符串赋值*/
	ShowString(pMyString);					/*显示字符串*/
 return 0;
}
/*////////////////////////////////////////////////////////*/
/*					ExternFun1.c							*/
/*///////////////////////////////////////////////////////*/
extern char* GetString(char* pString)
{
	return pString;							/*返回字符*/
}
/*////////////////////////////////////////////////////////*/
/*					ExternFun2.c							*/
/*////////////////////////////////////////////////////////*/
extern void ShowString(char* pString)
{
	printf("%s\n",pString);					/*显示字符串*/
}
