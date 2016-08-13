#include<stdio.h>
int main()
{
	int i;									/*定义变量，表示1到100间的数字*/
	int iSum=0;								/*保存计算后的结果*/
	/*使用for循环*/
	for(i=1;i<=100;i++)
	{
		iSum=i+iSum;							/*累加计算*/
	}
	printf("1到100数字间的累加计算:%d\n",iSum);/*输出计算结果*/
	iSum=0;									/*恢复计算结果*/
	i=1;										/*设定循环控制变量的初值*/
	while(i<=100)							/*while语句*/
	{
		iSum=iSum+i;							/*累加计算*/
		i++;									/*循环变量自增*/
	}
	printf("1到100数字间的累加计算:%d\n",iSum);	/*输出计算结果*/
	return 0;
}
