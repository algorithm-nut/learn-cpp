#include<stdio.h>
#define MAX 50
void transpose(int matrix[][MAX],int res[][MAX],int,int); /*��������*/
int main()
{
	int matrix[MAX][MAX];									/*�����û�����ľ���*/
	int res[MAX][MAX];										/*����ת�ú�ľ���*/
	int m,n;												/*�����������*/
	int i,j;												/*ѭ������*/
	printf("����������������������\n");
	scanf("%d%d",&m,&n);
	printf("���������\n");
	for(i=0;i<m;++i)										/*�������*/
	{
		for(j=0;j<n;++j)
		{
			scanf("%d",&matrix[i][j]);
		}
	}
	transpose(matrix,res,m,n);								/*���ú���ת�þ���*/
	printf("ת�þ���\n");
	for(i=0;i<n;++i)										/*��ӡת�þ���*/
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
			res[j][i]=matrix[i][j];							/*������ת��*/
		}
	}
}
