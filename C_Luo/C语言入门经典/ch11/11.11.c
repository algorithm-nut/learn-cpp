#include<stdio.h>
struct date							/*时间结构*/
{
	int year;						/*年*/
	int month;						/*月*/
	int day;							/*日*/
};
struct student						/*学生信息结构*/
{
	char name[30];					/*姓名*/
	int num;							/*学号*/
	char sex[20];					/*性别*/
	struct date birthday;			/*出生日期*/
}student={"苏玉群",12061212,"女",{1986,12,6}};	/*为结构变量初始化*/
int main()
{
	printf("********学生成绩********\n");
	printf("姓名: %s\n",student.name);	/*输出结构成员*/
	printf("学号: %d\n",student.num);
	printf("性别: %s\n",student.sex);
	printf("出生日期: %d,%d,%d\n",student.birthday.year,
	student.birthday.month,student.birthday.day);	/*输出成员结构体数据*/
	return 0;
}
