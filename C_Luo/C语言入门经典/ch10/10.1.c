#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *p;									/*����ָ��*/
	char *str;								/*ָ���ַ������ָ��*/
	p=(int*)malloc(sizeof(int));			/*����һ�����ͱ������ڴ�*/
	str=(char*)malloc(sizeof(char[20]));	/*����һ������Ϊ20���ַ�������ռ���ڴ�*/
	printf("������һ������:\n");
	scanf("%d",p);
	printf("������һ���ַ���:\n");
	scanf("%s",str);
	printf("�������������Ϊ:%d\n",*p);
	printf("����������ַ���Ϊ:%s\n",str);
	return 0;
}