#include<stdio.h>
int f(int n) 							/*自定义f函数来求相应的函数值*/
{
	if(n>0) 								/*如果n大于0，则执行n+10*/
		n=n+10;
	else
		if(n<0) 							/*如果n小于0，则执行n+20*/
			n=n+20;
		else								/*如果n等于0，则n值为100*/
			n=100;
		printf("n=%d\n",n); 				/*输出n的值*/
	return n;
}
int main()
{
	int n;
	printf("input number\n");
	scanf("%d",&n);
	f(n); 								/*调用f函数*/
	return 0;
}
