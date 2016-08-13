#include<stdio.h>
int main()
{
	char* StudentName[5];					/*字符指针数组*/
	int Age[5]={11,13,12,13,11};				/*为Age[5]数组初始化*/
	int i;									/*循环控制变量*/
	StudentName[0]="WangJiasheng";			/*为StudentName[5]数组元素赋值*/
	StudentName[1]="LiuWen";
	StudentName[2]="SuYuqun";
	StudentName[3]="LeiYu";
	StudentName[4]="ZhangMeng";
	for(i=0;i<5;i++)							/*使用循环显示名称*/
	{
		printf("%s\n",StudentName[i]);
		printf("%d\n",Age[i]);
	}
	return 0;
}
