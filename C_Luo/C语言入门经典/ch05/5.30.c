#include<stdio.h>
int main()
{
	int n,i,iSum;									/*�����������ͱ���*/
	iSum=0; 											/*��������ֵ*/
	i=1;
	printf("������һ������:");							/*�����ʾ��Ϣ*/
	scanf("%d",&n);									/*Ҫ������һ����ֵ*/
	loop:  if(i<=n)									/*��ת���ִ��λ��*/
	{
		iSum+=i;										/*ѭ����*/
		i++;
		goto loop;									/*ִ��goto��ת���*/
	}
	printf("����%d���ڵ������ܺ͵Ľ��Ϊ��%d\n",n,iSum);	/*��������*/
	return 0;
}
