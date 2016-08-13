#include<stdio.h>
int gcd(int a,int b)	/*辗转相除法求最大公约数*/
{
	int c;
	while((c=a%b)!=0)
	{
		a=b;
		b=c;
	}
	return b;
}
int main()
{
	int a,b,c;
	int (*p)(int,int);	/*定义指向函数的指针p*/
	p=gcd;				/*使p指向gcd函数*/
	printf("请输入两个整数：\n");
	scanf("%d%d",&a,&b);
	c=(*p)(a,b);		/*使用指针调用函数*/
	printf("%d与%d的最大公约数为:%d\n",a,b,c);
	return 0;
}