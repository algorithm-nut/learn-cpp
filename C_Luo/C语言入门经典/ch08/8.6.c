#include<stdio.h>
main()
{
	short i;
	short *p;
	printf("������һ����ֵ\n");
	scanf("%d",&i);
	p=&i; 									/*������i�ĵ�ַ����ָ�����*/
	printf("���ָ�����p�Ľ��: %d\n",p);
	p++;										/*��ַ��1�������1��������һ�ֽ�*/
	printf("���ָ�����p++�Ľ��: %d\n",p);
	return 0;
}
