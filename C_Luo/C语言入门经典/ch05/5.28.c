#include<stdio.h>
int main()
{
	int iRow, iColumn; 					/*iRowΪ�У�iColumΪ��*/
	for (iRow = 1; iRow <= 9; iRow++)	/*iRowΪ�˷��ھ����е�����*/
	{
		for (iColumn = 1; iColumn <= iRow; iColumn++)
											/*����iRow��iColum��ȡֵѭ������*/
	{
		printf("%d*%d=%d ", iRow,iColumn,iRow *iColumn);/*������*/
	}
	printf("\n");						/*���л���*/
	}
	return 0;
}
