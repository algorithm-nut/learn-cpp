#include<stdio.h>
void process(char*str)
{
	int i;
	printf("��������ַ����е��ַ������Ӧ��ASCII�����£�\n");
	for(i=0;str[i]!='\0';++i)		/*�����ַ���*/
	{
		printf("%c : %d\n",str[i],str[i]);/*��ӡ�ַ������Ӧ��ASCII��*/
	}
}
int main()
{
	char string[30];
	printf("������һ���ַ�����\n");
	gets(string);						/*�����ַ���*/
	process(string);					/*���ú��������ַ���*/
	return 0;
}