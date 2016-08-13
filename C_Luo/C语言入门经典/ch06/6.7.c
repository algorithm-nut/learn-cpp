#include<stdio.h>
int main()
{
	float score[10][3];									/*定义10*3的二维数组保存10个学生三种科目的成绩*/
	float avg[3]={0};									/*定义有三个元素的一维数组分别保存三个科目的平均成绩*/
	float max[3];										/*定义有三个元素的一维数组分别保存三个科目的最高成绩*/
	float min[3];										/*定义有三个元素的一维数组分别保存三个科目的最低成绩*/
	short m,n;											/*循环变量*/
	printf("请输入10个学生的语文、数学和英语成绩:\n");	/*提示用户输入学生成绩*/
		for(m=0;m<10;++m)
		{
			for(n=0;n<3;++n)
			{
				scanf("%f",&score[m][n]);				/*将成绩保存到二维数组中*/
				avg[n]+=score[m][n];					/*累加每个科目的成绩*/
			}
		}
		for(m=0;m<3;++m)								 /*计算每个科目的平均成绩*/
		{
			avg[m]=avg[m]/10;
		}
		for(m=0;m<3;++m)								/*求每个科目的最高和最低成绩*/
		{
			max[m]=score[0][m];							/*将每个科目的最高成绩初始化为第一个学生的成绩*/
			min[m]=score[0][m];							/*将每个科目的最低成绩初始化为第一个学生的成绩*/
			for(n=0;n<10;++n)
			{
				if(max[m]<score[n][m])					/*若最高成绩小于score[n][m],则令最高成绩等于score[n][m]*/
				{
					max[m]=score[n][m];
				}
				if(min[m]>score[n][m])					/*若最低成绩等于score[n][m],则令最低成绩等于score[n][m]*/
				{
					min[m]=score[n][m];
				}
			}
		}
		printf("语文学科最高成绩：%.2f\n",max[0]);		/*打印语文科目统计信息*/
		printf("语文学科最低成绩：%.2f\n",min[0]);		
		printf("语文学科平均成绩：%.2f\n",avg[0]);
		printf("数学学科最高成绩：%.2f\n",max[1]);		/*打印数学科目统计信息*/
		printf("数学学科最低成绩：%.2f\n",min[1]);
		printf("数学学科平均成绩：%.2f\n",avg[1]);
		printf("英语学科最高成绩：%.2f\n",max[2]);       /*打印英语科目统计信息*/
		printf("英语学科最低成绩：%.2f\n",min[2]);
		printf("英语学科平均成绩：%.2f\n",avg[2]);
	return 0;											/*程序结束*/
}