#include<stdio.h>
#include<stdlib.h>
int main()
{
	short *s;									/*����������ָ�����s*/
	double *f=(double*)malloc(sizeof(double));	/*����˫���ȸ����ͱ�����ռ�ڴ�ռ�*/
	printf("ָ��fָ���ڴ�ռ����ʼ��ַ:%d\n",f);/*��ӡ�׵�ַ*/
	printf("ָ��fָ���ڴ�ռ�Ĵ�С:%d�ֽ�\n",sizeof(*f));/*��ӡ�ռ��С*/
	s=(short*)realloc(f,sizeof(short));				/*���·����ڴ�*/
	printf("ָ��sָ���ڴ�ռ����ʼ��ַ:%d\n",s);	/*��ӡ�׵�ַ*/
	printf("ָ��sָ���ڴ�ռ�Ĵ�С:%d�ֽ�\n",sizeof(*s));/*��ӡ�ռ��С*/
	return 0;
}