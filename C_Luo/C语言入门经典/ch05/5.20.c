#include<stdio.h>
int main()
{
	int i=1;										/*定义变量，表示数字*/
	int iSum=0;									/*表示计算的总和*/
	/*do-while语句*/
	do
	{
		iSum=iSum+i;								/*计算累加的总和*/
		i++;										/*进行自身加1*/
	}
	while(i<=100);								/*检验条件*/
	printf("计算1到100之间的累加结果: %d\n",iSum);	/*输出计算结果*/
	return 0;
}
