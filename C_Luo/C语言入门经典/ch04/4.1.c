#include<stdio.h>
int main()
{
	int ia,ib,ic;					/*��������*/
	ia=3;							/*Ϊ������ֵ*/
	ib=15;
	printf("ia=%d\n",ia);			/*��ʾ����ֵ*/
	printf("ib=%d\n",ib);
	ic=ia+10;						/*���ʽ�б���ia����һ������10*/
	printf("ia+10=%d\n",ic);			/*��ʾic��ֵ*/
	ic=ib-10;						/*���ʽ�б���ib��ȥһ������10*/
	printf("ib-ia=%d\n",ic);			/*��ʾic��ֵ*/
	ic=ia+ib;						/*���ʽ�������������м���*/
	printf("ia+ib=%d\n",ic);			/*�����������*/
	return 0;						/*�������*/
}
