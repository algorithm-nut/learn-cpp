#include<stdio.h>
int main()
{
	char *Char="I LOVE CHINA";			/*�����ַ���ָ�����*/
	puts("I LOVE CHINA!");				/*����ַ�������*/
	puts("I\0 LOVE\0 CHINA!");			/*����ַ������������м��������'\0'*/
	puts(Char);							/*����ַ���������ֵ*/
	Char="I LOVE\0 CHINA!";				/*�ı��ַ���������ֵ*/
	puts(Char);							/*����ַ���������ֵ*/
	return 0;							/*�������*/
}
