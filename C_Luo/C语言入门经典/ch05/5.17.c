#include<stdio.h>
int main()
{
	int n,i,iSum;									/*�����������ͱ���*/
	i=1;												/*��������ֵ*/
	iSum=0;
	printf("������һ������:");							/*�����ʾ��Ϣ*/
	scanf("%d",&n);									/*Ҫ������һ����ֵ*/
	while(i<=n)										/*ʹ��whileѭ��*/
	{
		iSum+=i;										/*�����ۼ�*/
		i++;											/*��������*/
	}
	printf("����%d���ڵ������ܺ�Ϊ��%d\n",n,iSum);		/*��������*/
	return 0;
}
