#include<stdio.h>
main()
{
	float average(float score[]);
	float Score[10];
	int i;
	printf("������10��ѧ���ĳɼ�:\n");
	for(i=0;i<10;++i)
		scanf("%f",&Score[i]);
	printf("10��ѧ����ƽ���ɼ�Ϊ��%10.2f\n",average(Score));
}
float average(float score[])
{
	float avg=0.0;
	int i;
	for(i=0;i<10;++i)
		avg+=score[i];
	return avg/10;
}