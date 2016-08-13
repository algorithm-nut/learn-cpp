#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Please input a,b,c;\n");		/*提示信息*/
	scanf("%d,%d,%d",&a,&b,&c);			/*输入三个数值*/
	if(a>b)								/*判断表达式1的真假条件*/
	{
		if(b>c)							/*判断表达式2的真假条件*/
			printf("%d,%d,%d\n",c,b,a);
		else  if(a>c)					/*判断表达式3的真假条件*/
			printf("%d,%d,%d\n",b,c,a);
		else								/*表达式1为真，表达式2、3为假时运行*/
			printf("%d,%d,%d\n",b,a,c);
	}
	else									/*当表达式1为假时运行*/
	{
		if(c<a)							/*判断表达式4的真假条件*/
		printf("%d,%d,%d\n",c,a,b);

		else  if(c<b)					/*判断表达式5的真假条件*/
				printf("%d,%d,%d\n",a,c,b);
		else								/*当前面所有的表达式为假时运行*/
				printf("%d,%d,%d\n",a,b,c);
	}
	return 0;
}
