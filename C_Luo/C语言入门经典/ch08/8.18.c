#include<stdio.h>
void SUM(int *p,int n) 						/*�Զ��庯��SUM���������е�����*/
{
	int i,sum=0;
	printf("�����е�����Ϊ:\n");
	for(i=0;i<n;i++)
		if(*(p+i)%2!=0) 						/*�ж������е�Ԫ���Ƿ�Ϊ����*/
		{
			printf("%5d",*(p+i));
			sum=sum+*(p+i);
		}
		printf("\n");
		printf("�����ĺ�Ϊ:%d\n",sum);
}
main()
{
	int *pointer,a[10],i;
	pointer=a; 								/*ָ��ָ�������׵�ַ*/
	printf("������10������ֵ:\n");
	for(i=0;i<10;i++)
		scanf("%d",&a[i]);
	SUM(pointer,10); 							/*����SUM����*/
}
