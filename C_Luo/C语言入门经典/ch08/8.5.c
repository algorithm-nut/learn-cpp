#include<stdio.h>
main()
{
	int i;
	int *p;
	printf("������һ����ֵ:\n");
	scanf("%d",&i);
	p=&i; 									/*������i�ĵ�ַ����ָ�����*/
	printf("���p�Ľ��Ϊ: %d\n",p);
	p++;										/*��ַ��1�������1��������һ�ֽ�*/
	printf("���p++�Ľ��Ϊ: %d\n",p);
	return 0;
}
