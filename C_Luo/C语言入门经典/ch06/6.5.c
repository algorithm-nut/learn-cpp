#include<stdio.h>
int main()
{
	char* StudentName[5];					/*�ַ�ָ������*/
	int Age[5]={11,13,12,13,11};				/*ΪAge[5]�����ʼ��*/
	int i;									/*ѭ�����Ʊ���*/
	StudentName[0]="WangJiasheng";			/*ΪStudentName[5]����Ԫ�ظ�ֵ*/
	StudentName[1]="LiuWen";
	StudentName[2]="SuYuqun";
	StudentName[3]="LeiYu";
	StudentName[4]="ZhangMeng";
	for(i=0;i<5;i++)							/*ʹ��ѭ����ʾ����*/
	{
		printf("%s\n",StudentName[i]);
		printf("%d\n",Age[i]);
	}
	return 0;
}
