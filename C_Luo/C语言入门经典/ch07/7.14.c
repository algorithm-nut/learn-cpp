#include<stdio.h>
#include<math.h>
int Armstrong(int);
int main()
{
	int aInt;		/*保存用户输入的数字*/
	printf("请输入一个三位数字：\n");
	scanf("%d",&aInt);
	if(aInt==Armstrong(aInt))	/*若aInt等于其每位数字立方和*/
	{
		printf("%d是水仙花数。\n",aInt);
	}
	else				/*若aInt不等于其每位数字立方和*/
	{
		printf("%d不是水仙花数。\n",aInt);
	}
	return 0;
}
int Armstrong(int x)
{
	int a,b,c;		/*定义a,b,c分别用于保存百位，十位，个位上的数字*/
	a=x/100;		/*取百位数字*/
	b=(x/10)%10;	/*取十位数学*/
	c=x%10;			/*取个位数字*/
	return (int)(pow(a,3)+pow(b,3)+pow(c,3));/*返回每位数字立方和*/
}