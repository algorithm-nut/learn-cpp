#include<stdio.h>
int main()
{
	int aInt=20;					/*���ͱ�������ֵΪ20*/
	char bChar='B';					/*�ַ��ͱ�������ֵΪ�ַ�B*/
	float cFloat=3.14f;				/*�����ȸ����ͱ�������ֵΪ3.14*/
	double dDouble=1/3.0;			/*˫���ȸ����ͱ�������ֵΪ1/3.0*/
	printf("�������ĳ�ֵΪ��\n");	/*��ӡ�������ĳ�ֵ*/
	printf("aInt=%d\n",aInt);
	printf("bChar=%c\n",bChar);
	printf("cFloat=%f\n",cFloat);
	printf("dDouble=%f\n",dDouble);
	aInt=aInt+20;					/*�����ͱ�����ֵ����20*/
	bChar='C';						/*���ַ��ͱ�����ֵ�ı�Ϊ�ַ�C*/
	cFloat=cFloat*2;				/*�������ȸ����ͱ�����ֵ�ı�Ϊ���ֵ��2*/
	dDouble=dDouble*3.0;			/*��˫���ȸ����ͱ�����ֵ�ı�Ϊ���ֵ��3.0*/
	printf("�ı���������ֵΪ:\n");/*��ӡ�ı���������ֵ*/
	printf("aInt=%d\n",aInt);
	printf("bChar=%c\n",bChar);
	printf("cFloat=%f\n",cFloat);
	printf("dDouble=%f\n",dDouble);
	return 0;
}