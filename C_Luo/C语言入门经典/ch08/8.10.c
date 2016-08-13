#include<stdio.h>
main()
{
	int a[3][5],i,j;
	printf("请输入15个数值:\n");
	for(i=0;i<3;i++)							/*控制二维数组的行数*/
		for(j=0;j<5;j++)						/*控制二维数组的列数*/
			scanf("%d",*(a+i)+j);			/*为二维数组中的元素赋值*/
											/*p为第一个元素的地址*/
		printf("其中第二行中的元素为:\n");
		for(j=0;j<5;j++)
			printf("%5d",*(*(a+1)+j));		/*输出二维数组中的元素*/
		printf("\n");
}
