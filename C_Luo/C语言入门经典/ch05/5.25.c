#include<stdio.h>
int main()
{
	int array[10];					/*��������*/
	short i;						/*ѭ������*/
	short flag=1;					/*��־λ*/
	printf("������10������:\n");	/*��ʾ�û�����10������*/
	for(i=0;i<10;++i)				/*���ζ�ȡ�������浽������*/
	{
		scanf("%d",&array[i]);
	}
	for(i=2;i<10;++i)				/*�ж��Ƿ���������*/
	{
		if(array[i]!=(array[i-1]+array[i-2]))/*��������*/
		{
			flag=0;							/*��־λ��0*/
			break;							/*����ѭ��*/
		}
	}
	if(flag)
	{
		printf("����������з���Ҫ��.\n");
	}
	else
	{
		printf("����������в�����Ҫ��.\n");
	}
	return 0;
}