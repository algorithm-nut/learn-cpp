#include<stdio.h>
#define MAX 50
void transpose(int matrix[][MAX],int res[][MAX],int,int); /*函数声明*/
int main()
{
	int matrix[MAX][MAX];									/*保存用户输入的矩阵*/
	int res[MAX][MAX];										/*保存转置后的矩阵*/
	int m,n;												/*矩阵的行列数*/
	int i,j;												/*循环变量*/
	printf("请输入矩阵的行数和列数：\n");
	scanf("%d%d",&m,&n);
	printf("请输入矩阵：\n");
	for(i=0;i<m;++i)										/*读入矩阵*/
	{
		for(j=0;j<n;++j)
		{
			scanf("%d",&matrix[i][j]);
		}
	}
	transpose(matrix,res,m,n);								/*调用函数转置矩阵*/
	printf("转置矩阵：\n");
	for(i=0;i<n;++i)										/*打印转置矩阵*/
	{
		for(j=0;j<m;++j)
		{
			printf("%d\t",res[i][j]);
		}
		printf("\n");
	}
	return 0;
}
void transpose(int matrix[][MAX],int res[][MAX],int m,int n)
{
	int i,j;
	for(i=0;i<m;++i)
	{
		for(j=0;j<n;++j)
		{
			res[j][i]=matrix[i][j];							/*将矩阵转置*/
		}
	}
}
