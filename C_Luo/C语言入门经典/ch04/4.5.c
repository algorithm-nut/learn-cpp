#include<stdio.h>
int main()
{
	int iNumber1,iNumber2,iNumber3,iResult=0;		/*定义整型变量*/
	iNumber1=20;									/*为变量赋值*/
	iNumber2=5;
	iNumber3=2;
	iResult=iNumber1+iNumber2-iNumber3;			/*加法、减法表达式*/
	printf("公式1的运算结果为: %d\n\n",iResult);	/*显示结果*/
	iResult=iNumber1-iNumber2+iNumber3;			/*减法、加法表达式*/
	printf("公式2的运算结果为: %d\n\n",iResult);	/*显示结果*/
	iResult=iNumber1+iNumber2*iNumber3;			/*加法、乘法表达式*/
	printf("公式3的运算结果为: %d\n\n",iResult);	/*显示结果*/
	iResult=iNumber1/iNumber2*iNumber3;			/*除法、乘法表达式*/
	printf("公式4的运算结果为: %d\n\n",iResult);	/*显示结果*/
	iResult=(iNumber1+iNumber2)*iNumber3;			/*括号，以及加法、乘法表达式*/
	printf("公式5的运算结果为: %d\n\n",iResult);	/*显示结果*/
	return 0;
}
