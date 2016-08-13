
#include<stdio.h>
#include<string.h>
struct Student								/*学生结构*/
{
	char cName[20];							/*姓名*/
	int  iNumber;							/*学号*/
	char cSex[20];							/*性别*/
	int iGrade;								/*年级*/
}student;									/*定义变量*/
int main()
{
	struct Student* pStruct;					/*定义结构体类型指针*/
	pStruct=&student;						/*指针指向结构体变量*/
	strcpy(pStruct->cName,"苏玉群");			/*将字符串常量复制到成员变量中*/
	pStruct->iNumber=12061212;				/*为成员变量赋值*/
	strcpy(pStruct->cSex,"女");				/*将字符串常量复制到成员变量中*/
	pStruct->iGrade=2;
	printf("********学生资料********\n");		/*消息提示*/
	printf("姓名: %s\n",student.cName);		/*使用变量直接输出*/
	printf("学号: %d\n",student.iNumber);
	printf("性别: %s\n",student.cSex);
	printf("年级: %d\n",student.iGrade);
	return 0;
}
