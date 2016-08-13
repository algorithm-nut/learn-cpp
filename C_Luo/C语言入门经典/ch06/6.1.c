#include<stdio.h>
int main()
{
	float score[10];			/*定义有10个元素的浮点型数组保存学生成绩*/
	int i,j;
	float max,min;				/*定义max和min保存最高成绩和最低成绩*/
	float avg_score=0.0;			/*定义浮点型变量avg_score用于计算学生平均成绩并赋初值0.0*/
	printf("请输入10个学生的成绩:\n");
	for(i=0;i<10;++i)
	{
		scanf("%f",&score[i]);
		avg_score+=score[i];				/*累加10个学生的成绩*/
	}
	avg_score=avg_score/10;					/*计算平均成绩*/
	min=score[0];							/*将第一个学生成绩赋给最低成绩*/		
	max=score[0];							/*将第一个学生成绩赋给最高成绩 */
	for(j=1;j<10;++j)
	{
		if(score[j]<min)	/*若score[j]比min小，则将score[j]的值赋给min*/
		{
			min=score[j];
		}
		if(score[j]>max)	/*若score[j]比max大，则将score[j]的值赋给max*/
		{
			max=score[j];
		}
	}
	printf("最高成绩为：%.2f\n",max);		/*输出最高成绩*/
	printf("最低成绩为：%.2f\n",min);		/*输出最低成绩*/
	printf("平均成绩为：%.2f\n",avg_score); /*输出平均成绩*/
	return 0;								/*程序结束*/
}