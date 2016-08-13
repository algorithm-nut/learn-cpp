#include<stdio.h>
struct Student								/*学生结构*/
{
	char cName[20];							/*姓名*/
	int  iNumber;							/*学号*/
	char cSex[20];							/*性别*/
	int iGrade;								/*年级*/
} student[5]={
		{"王家生",12062212,"男",3},
		{"玉龙娇",12062213,"女",3},
		{"姜雪环",12062214,"女",3},
		{"张萌",12062215,"女",3},
		{"韩亮",12062216,"男",3}
		};									/*定义数组并设置初始值*/
int main()
{
	struct Student* pStruct;
	int index;
	pStruct=student;
	for(index=0;index<5;index++,pStruct++)
	{
		printf("NO%d student:\n",index+1);		/*首先输出学生的名次*/
		/*使用变量index做下标，输出数组中的元素数据*/
		printf("Name: %s, Number: %d\n",pStruct->cName,pStruct->iNumber);
		printf("Sex: %s, Grade: %d\n",pStruct->cSex,pStruct->iGrade);
		printf("\n");							/*空格行*/
	}
	return 0;
}
