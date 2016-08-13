#include<stdio.h>
int main()
{
	int a,b,c;
	printf("请输入三角形的三条边：\n");
	scanf("%d%d%d",&a,&b,&c);
	if((a+b>c)&&(a+c>b)&&(b+c>a))							/*若任意两边之和大于第三边*/
	{
		if((a*a+b*b==c*c)||(a*a+c*c==b*b)||(b*b+c*c==a*a))	/*若存在两边的平方和等于第三边的平方*/
		{
			printf("这个三角形为直角三角形\n");
		}
		if((a*a+b*b>c*c)&&(a*a+c*c>b*b)&&(b*b+c*c>a*a))		/*若任意两边的平方和大于第三边的平方*/
		{
			printf("这个三角形为锐角三角形.\n");
		}
		if((a*a+b*b<c*c)||(a*a+c*c<b*b)||(b*b+c*c<a*a))		/*若存在两边的平方和小于第三边的平方*/
		{
			printf("这个三角形为钝角三角形.\n");
		}
	}
	if((a+b<=c)||(a+c<=b)||(b+c<=a))						/*若存在两边之和小于第三边*/
	{
		printf("这三条边不能组成三角形.\n");
	}
	return 0;
}