#include<stdio.h>
int main()
{
	int n,i,iSum;									/*�����������ͱ���*/
	iSum=0;											/*��������ֵ*/
	printf("������һ������:");							/*�����ʾ��Ϣ*/
	scanf("%d",&n);									/*Ҫ������һ����ֵ*/
	i=n;
	while(i)											/*ʹ��whileѭ��*/
	iSum+=i--;										/*��������*/
	printf("����%d���ڵ������ܺ�Ϊ��%d\n",n,iSum);		/*��������*/
	return 0;
}
