#include<stdio.h>
typedef struct Student								/*学生结构*/
{
	char cName[20];							/*姓名*/
	int  iNumber;							/*学号*/
	char cSex[20];							/*性别*/
	int iGrade;								/*年级*/
} Stu[5];							/*定义数组并设置初始值*/
int main()
{
	int i;								/*循环控制变量*/
	Stu student={
		{"王家生",12062212,"男",3},
		{"玉龙娇",12062213,"女",3},
		{"姜雪环",12062214,"女",3},
		{"张萌",12062215,"女",3},
		{"韩亮",12062216,"男",3}
		};	
	for(i=0;i<5;i++)						/*使用for语句进行5次循环*/
	{
		printf("NO%d student:\n",i+1);	/*首先输出学生的名次*/
		/*使用变量i做下标，输出数组中的元素数据*/
		printf("Name: %s, Number: %d\n",student[i].cName,student[i].iNumber);
		printf("Sex: %s, Grade: %d\n",student[i].cSex,student[i].iGrade);
		printf("\n");					/*空格行*/
	}
	return 0;
}
