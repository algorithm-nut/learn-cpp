#include<stdio.h>
int main()
{
	int score;						/*�������ͱ���score��ʾѧ���ɼ�*/
	printf("������ѧ���ɼ���\n");	/*�����ʾ��Ϣ*/
	scanf("%d",&score);				/*��ȡ�û����벢����score*/
	if(score>=60)					/*�жϣ����ɼ����ڵ���60�򼰸�*/
	{
		printf("ѧ���ɼ�����\n");
	}
	if(score<60)					/*��ѧ���ɼ�С��60��Ϊ������*/
	{
		printf("ѧ���ɼ�������\n");
	}
	return 0;
}