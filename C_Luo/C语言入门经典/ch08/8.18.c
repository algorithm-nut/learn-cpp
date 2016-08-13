#include<stdio.h>
void SUM(int *p,int n) 						/*自定义函数SUM查找数组中的奇数*/
{
	int i,sum=0;
	printf("数组中的奇数为:\n");
	for(i=0;i<n;i++)
		if(*(p+i)%2!=0) 						/*判断数组中的元素是否为奇数*/
		{
			printf("%5d",*(p+i));
			sum=sum+*(p+i);
		}
		printf("\n");
		printf("奇数的和为:%d\n",sum);
}
main()
{
	int *pointer,a[10],i;
	pointer=a; 								/*指针指向数组首地址*/
	printf("请输入10个整数值:\n");
	for(i=0;i<10;i++)
		scanf("%d",&a[i]);
	SUM(pointer,10); 							/*调用SUM函数*/
}
