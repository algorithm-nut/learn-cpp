#include<stdio.h>
int main()
{
	float cost;							/*�˿����ѽ��*/
	printf("������˿����ѽ��:\n");
	scanf("%f",&cost);					/*��ȡ���ѽ��*/
	if(cost<=100)						/*���ѽ��С�ڵ���100�����Ż�*/
	{
		printf("���Żݴ�ʩ��ʵ��Ӧ�����Ϊ%.2fԪ.\n",cost);
	}
	else if(cost<=300)					/*���ѽ����100Ԫ��300Ԫ֮�䣬9���Ż�*/
	{
		cost=cost*0.9f;
		printf("9���Żݣ�ʵ��Ӧ�����Ϊ%.2fԪ.\n",cost);
	}
	else if(cost<=500)					/*���ѽ����300Ԫ��500Ԫ֮�䣬8���Ż�*/
	{
		cost=cost*0.8f;
		printf("8���Żݣ�ʵ��Ӧ�����Ϊ%.2fԪ.\n",cost);
	}
	else								/*���ѽ�����500Ԫ��7���Ż�*/
	{
		cost=cost*0.7f;
		printf("7���Żݣ�ʵ��Ӧ�����Ϊ%.2fԪ.\n",cost);
	}
	return 0;
}