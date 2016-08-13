#include<stdio.h>
int main()
{
	float cost;							/*顾客消费金额*/
	printf("请输入顾客消费金额:\n");
	scanf("%f",&cost);					/*读取消费金额*/
	if(cost<=100)						/*消费金额小于等于100，无优惠*/
	{
		printf("无优惠措施，实际应付金额为%.2f元.\n",cost);
	}
	else if(cost<=300)					/*消费金额在100元与300元之间，9折优惠*/
	{
		cost=cost*0.9f;
		printf("9折优惠！实际应付金额为%.2f元.\n",cost);
	}
	else if(cost<=500)					/*消费金额在300元与500元之间，8折优惠*/
	{
		cost=cost*0.8f;
		printf("8折优惠！实际应付金额为%.2f元.\n",cost);
	}
	else								/*消费金额大于500元，7折优惠*/
	{
		cost=cost*0.7f;
		printf("7折优惠！实际应付金额为%.2f元.\n",cost);
	}
	return 0;
}