#include<stdio.h>
int main()
{
	int ia, ib, ic,imin;					/*定义四个整型变量*/
	printf("Please input ia,ib,ic;\n");		/*提示信息*/
	scanf("%d,%d,%d",&ia,&ib,&ic);			/*输入三个数值*/
	if(ia<ib)								/*如果ia小于ib为真*/
	{
		imin=ia;								/*将ia的数值赋给imin*/
	}
	else										/*如果ia小于ib为假*/
	{
		imin=ib;								/*将ib的数值赋给imin*/
	}
	if(ic<imin)								/*如果ic的值小于imin的值为真*/
	{
		imin=ic;								/*将ic的值赋给imin*/
		printf("The result is %d\n",imin);	/*输出imin的值*/
	}
	else										/*如果ic的值小于imin的值为假*/
	{
		printf("The result is %d\n",imin);	/*输出imin的值*/
	}
	return 0;								/*程序结束*/
}
