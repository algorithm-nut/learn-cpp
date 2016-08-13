#include<stdio.h>
int main()
{
	int ia,ib,ic;					/*声明变量*/
	ia=3;							/*为变量赋值*/
	ib=15;
	printf("ia=%d\n",ia);			/*显示变量值*/
	printf("ib=%d\n",ib);
	ic=ia+10;						/*表达式中变量ia加上一个常量10*/
	printf("ia+10=%d\n",ic);			/*显示ic的值*/
	ic=ib-10;						/*表达式中变量ib减去一个常量10*/
	printf("ib-ia=%d\n",ic);			/*显示ic的值*/
	ic=ia+ib;						/*表达式中两个变量进行计算*/
	printf("ia+ib=%d\n",ic);			/*将计算结果输出*/
	return 0;						/*程序结束*/
}
