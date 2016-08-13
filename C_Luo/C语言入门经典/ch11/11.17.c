#include<stdio.h>
enum Color{Red=1,Blue,Green} color;				/*定义枚举变量，并初始化*/
int main()
{
	int icolor;									/*定义整型变量*/
	printf("请输入一个数值:\n");					/*显示提示信息*/
	scanf("%d",&icolor);							/*输入数据*/
	switch(icolor)								/*判断icolor值*/
	{
		case Red:								/*枚举常量，Red表示1*/
			printf("选择的是红色\n");
			break;
		case Blue:								/*枚举常量，Blue表示2*/
			printf("选择的是蓝色\n");
			break;
		case Green:						/*枚举常量，Green表示3*/
			printf("选择的是绿色\n");
			break;
		default:
			printf("???\n");
			break;
	}
	return 0;
}
