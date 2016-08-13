#include<stdio.h>
int main()
{
	int i =1;									/*定义变量，为变量赋初始值*/
	int iSum=0;									/*保存计算后的结果*/
	/*使用for循环*/
	for(;i <=100;i ++)
	{
		iSum=i +iSum;							/*累加计算*/
	}
	printf("1到100数字间的累加计算:%d\n",iSum);	/*输出计算结果*/
	return 0;
}
