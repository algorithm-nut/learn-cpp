#include<stdio.h>
int main()
{
	float score[10];			/*������10��Ԫ�صĸ��������鱣��ѧ���ɼ�*/
	int i,j;
	float max,min;				/*����max��min������߳ɼ�����ͳɼ�*/
	float avg_score=0.0;			/*���帡���ͱ���avg_score���ڼ���ѧ��ƽ���ɼ�������ֵ0.0*/
	printf("������10��ѧ���ĳɼ�:\n");
	for(i=0;i<10;++i)
	{
		scanf("%f",&score[i]);
		avg_score+=score[i];				/*�ۼ�10��ѧ���ĳɼ�*/
	}
	avg_score=avg_score/10;					/*����ƽ���ɼ�*/
	min=score[0];							/*����һ��ѧ���ɼ�������ͳɼ�*/		
	max=score[0];							/*����һ��ѧ���ɼ�������߳ɼ� */
	for(j=1;j<10;++j)
	{
		if(score[j]<min)	/*��score[j]��minС����score[j]��ֵ����min*/
		{
			min=score[j];
		}
		if(score[j]>max)	/*��score[j]��max����score[j]��ֵ����max*/
		{
			max=score[j];
		}
	}
	printf("��߳ɼ�Ϊ��%.2f\n",max);		/*�����߳ɼ�*/
	printf("��ͳɼ�Ϊ��%.2f\n",min);		/*�����ͳɼ�*/
	printf("ƽ���ɼ�Ϊ��%.2f\n",avg_score); /*���ƽ���ɼ�*/
	return 0;								/*�������*/
}