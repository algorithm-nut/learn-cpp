#include<stdio.h>
main()
{
	int a[3][5],i,j,(*p)[5];
	p=&a[0];
	printf("请输入15个数值:\n");
	for(i=0;i<3;i++)								/*控制二维数组的行数*/
		for(j=0;j<5;j++)							/*控制二维数组的列数*/
		scanf("%d",(*(p+i))+j);					/*为二维数组中的元素赋值*/
		p=&a[2]; 								/*p为第一个元素的地址*/
		printf("第三行中的元素为:\n");
			for(j=0;j<5;j++)
				printf("%5d",*((*p)+j));			/*输出二维数组中的元素*/
			printf("\n");
	return 0;
}
