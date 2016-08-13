#include<stdio.h>
int main()
{
	int iSum=0;								/*定义变量，表示计算总和*/
	int i=1;									/*表示每一个数字*/
	while(i<=100)							/*使用while循环*/
	{
		iSum=iSum+i;							/*进行累加*/
		i++;									/*增加数字*/
	}
	printf("100以内自然数的总和为：%d\n",iSum);	/*将结果输出*/
	return 0;
}
