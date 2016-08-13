#include<stdio.h>
int main()
{
	int iCelsius,iFahrenheit;			/*定义两个变量*/
	printf("请输入华氏温度:\n");			/*显示提示信息*/
	scanf("%d",&iFahrenheit);			/*在键盘上输入华氏温度*/
	iCelsius=5*(iFahrenheit-32)/9;		/*通过算术表达式进行计算，并将结果赋值*/
	printf("温度为:\n");					/*输出提示消息*/
	printf("%d",iCelsius);				/*输出摄氏温度*/
	printf(" 摄氏温度\n");				/*输出提示消息*/
	return 0;							/*程序结束*/
}
