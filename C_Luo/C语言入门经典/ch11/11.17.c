#include<stdio.h>
enum Color{Red=1,Blue,Green} color;				/*����ö�ٱ���������ʼ��*/
int main()
{
	int icolor;									/*�������ͱ���*/
	printf("������һ����ֵ:\n");					/*��ʾ��ʾ��Ϣ*/
	scanf("%d",&icolor);							/*��������*/
	switch(icolor)								/*�ж�icolorֵ*/
	{
		case Red:								/*ö�ٳ�����Red��ʾ1*/
			printf("ѡ����Ǻ�ɫ\n");
			break;
		case Blue:								/*ö�ٳ�����Blue��ʾ2*/
			printf("ѡ�������ɫ\n");
			break;
		case Green:						/*ö�ٳ�����Green��ʾ3*/
			printf("ѡ�������ɫ\n");
			break;
		default:
			printf("???\n");
			break;
	}
	return 0;
}
