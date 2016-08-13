#include<stdio.h>
int main()
{
	int score;						/*定义整型变量score表示学生成绩*/
	printf("请输入学生成绩：\n");	/*输出提示信息*/
	scanf("%d",&score);				/*读取用户输入并赋给score*/
	if(score>=60)					/*判断，若成绩大于等于60则及格*/
	{
		printf("学生成绩及格！\n");
	}
	else							/*若学生成绩小于60则为不及格*/
	{
		printf("学生成绩不及格！");
	}
	return 0;
}