#include<stdio.h>
int main()
{
	int ia,ib,ic,iSum;						/*声明变量，使用逗号运算符*/
	ia=10;									/*为变量赋值*/
	ib=43;
	ic=26;
	iSum=0;
	iSum=ia++,--ib,ic+4;						/*计算逗号表达式*/
	printf("the result is :%d\n",iSum);		/*将结果输出显示*/
	iSum=(ia++,--ib,ic+4);					/*计算逗号表达式*/
	printf("the result is :%d\n",iSum);		/*将结果输出显示*/
	return 0;								/*程序结束*/
}
