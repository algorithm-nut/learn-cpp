#include<stdio.h>
struct Student								/*学生结构*/
{
	char cName[20];							/*姓名*/
	float fScore[3];							/*分数*/
}student={"苏玉群",98.5f,89.0,93.5f};			/*定义变量*/
void Display(struct Student* stu)			/*形参为结构体变量的指针*/
{
	printf("********学生成绩********\n");		/*提示信息*/
	printf("姓名: %s\n",stu->cName);			/*使用指针引用结构体变量中的成员*/
	printf("英语: %.2f\n",stu->fScore[2]);	/*输出英语的分数*/
	stu->fScore[2]=90.0f;					/*更改成员变量的值*/
}
int main()
{
	struct Student* pStruct=&student;  		/*定义结构体变量指针*/
	Display(pStruct);					/*调用函数，结构体变量作为参数进行传递*/
	printf("更改后的英语成绩: %.2f\n",pStruct->fScore[2]);	/*输出成员的值*/
	return 0;
}
