#include<stdio.h>
int main()
{
	int i=1;										/*�����������ʾ����*/
	int iSum=0;									/*��ʾ������ܺ�*/
	/*do-while���*/
	do
	{
		iSum=iSum+i;								/*�����ۼӵ��ܺ�*/
		i++;										/*���������1*/
	}
	while(i<=100);								/*��������*/
	printf("����1��100֮����ۼӽ��: %d\n",iSum);	/*���������*/
	return 0;
}
