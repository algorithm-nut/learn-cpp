#include<stdio.h>
int main()
{
	float a,b;									/*定义两个单精度的变量*/
	char c;										/*定义一个字符型变量*/
	printf("Please input:a+(-,*,/)b\n");			/*提示输入信息*/
	scanf("%f%c%f",&a,&c,&b);					/*给变量赋值*/
	switch(c)									/*根据运算符的变化得出结果*/
	{
		case '+':printf("%f\n",a+b);				/*加法运算输出两数之和*/
			break;
		case '-':printf("%f\n",a-b);				/*减法运算输出两个数之差*/
			break;
		case '*':printf("%f\n",a*b);				/*乘法运算输出两个数之积*/
			break;
		case '/':								/*除法运算*/
		if(!b)									/*b值取反*/
		{
			printf("can not divide by zero.\n ");	/*提示不能输入b值为0*/
			break;
		}
		else										/*当b不等于0时*/
		{
			printf("%.2f\n",a/b);				/*输出两个数相除运算结果*/
			break;
		}
		default:									/*输入其他时运行*/
			printf("Please input:a+(-,*,/)b again\n");/*要求重新输入*/
		}
	return 0;										/*程序结束*/
}
