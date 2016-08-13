#include<stdio.h>
int main()
{
	struct Student							/*学生结构*/
	{
		char cName[20];						/*姓名*/
		int  iNumber;						/*学号*/
		char cSex[20];						/*性别*/
		int iGrade;							/*年级*/
	}student={"苏玉群",12061212,"女",2};		/*对结构体变量进行初始化*/
	struct Student* pStruct;					/*定义结构体类型指针*/
	pStruct=&student;						/*指针指向结构体变量*/
	printf("********学生资料********\n");		/*消息提示*/
	printf("姓名: %s\n",(*pStruct).cName);	/*使用指针引用变量中的成员*/
	printf("学号: %d\n",(*pStruct).iNumber);
	printf("性别: %s\n",(*pStruct).cSex);
	printf("年级: %d\n",(*pStruct).iGrade);
	return 0;
}
