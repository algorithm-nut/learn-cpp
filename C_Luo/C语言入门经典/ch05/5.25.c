#include<stdio.h>
int main()
{
	int array[10];					/*保存数列*/
	short i;						/*循环变量*/
	short flag=1;					/*标志位*/
	printf("请输入10个整数:\n");	/*提示用户输入10个整数*/
	for(i=0;i<10;++i)				/*依次读取整数保存到数组中*/
	{
		scanf("%d",&array[i]);
	}
	for(i=2;i<10;++i)				/*判断是否满足条件*/
	{
		if(array[i]!=(array[i-1]+array[i-2]))/*若不满足*/
		{
			flag=0;							/*标志位置0*/
			break;							/*跳出循环*/
		}
	}
	if(flag)
	{
		printf("您输入的数列符合要求.\n");
	}
	else
	{
		printf("您输入的数列不符合要求.\n");
	}
	return 0;
}