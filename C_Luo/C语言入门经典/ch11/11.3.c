#include<stdio.h>
struct Student									/*学生结构*/
{
	char cName[20];								/*姓名*/
	char cSex[20];								/*性别*/
	int iAge;									/*年龄*/
} student1={"齐德隆","女",18};						/*定义变量并设置初始值*/
int main()
{
	struct Student student2={"祁东强","男",20};	/*定义变量并设置初始值*/
	/*将第一个结构体中的数据输出*/
	printf("输入学生1的资料为:\n");
	printf("姓名: %s\n",student1.cName);
	printf("性别: %s\n",student1.cSex);
	printf("年龄: %d\n",student1.iAge);
	/*将第二个结构体中的数据输出*/
	printf("输入学生2的资料为:\n");
	printf("姓名: %s\n",student2.cName);
	printf("性别: %s\n",student2.cSex);
	printf("年龄: %d\n",student2.iAge);
	return 0;
}
