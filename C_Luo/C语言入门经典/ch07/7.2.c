#include<stdio.h>
void solve(int,int,int);		/*函数声明*/
int main()
{
	int a,b,c;
	printf("输入一元二次方程的系数a,b和c:\n");
	scanf("%d%d%d",&a,&b,&c);
	solve(a,b,c);				/*调用函数*/
	return 0;
}
void solve(int a,int b,int c)	/*函数定义*/
{
	double d=b*b-4*a*c;
	double x1,x2;
	if(d<0)						/*无根的情况*/
	{
		printf("方程无解！\n");
	}
	else
	{
		x1=(-b+d)/(2*a);		/*计算第一个根*/
		x2=(-b-d)/(2*a);		/*计算第二个根*/
		if(d==0)				/*只有一个根的情况*/
		{
			printf("方程有一个解，解为:%.2f\n",x1);
		}
		else					/*有两个根的情况*/
		{
			printf("方程有两个解，分别为%.2f和%.2f:\n",x1,x2);
		}
	}
}