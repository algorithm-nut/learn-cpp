#include<stdio.h>
void solve(int,int,int);		/*��������*/
int main()
{
	int a,b,c;
	printf("����һԪ���η��̵�ϵ��a,b��c:\n");
	scanf("%d%d%d",&a,&b,&c);
	solve(a,b,c);				/*���ú���*/
	return 0;
}
void solve(int a,int b,int c)	/*��������*/
{
	double d=b*b-4*a*c;
	double x1,x2;
	if(d<0)						/*�޸������*/
	{
		printf("�����޽⣡\n");
	}
	else
	{
		x1=(-b+d)/(2*a);		/*�����һ����*/
		x2=(-b-d)/(2*a);		/*����ڶ�����*/
		if(d==0)				/*ֻ��һ���������*/
		{
			printf("������һ���⣬��Ϊ:%.2f\n",x1);
		}
		else					/*�������������*/
		{
			printf("�����������⣬�ֱ�Ϊ%.2f��%.2f:\n",x1,x2);
		}
	}
}