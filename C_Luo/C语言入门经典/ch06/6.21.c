#include<stdio.h>
#include<string.h>
int main()
{
	char str1[50];						/*���������ַ����飬�����û�����������ַ���*/
	char str2[50];
	char str3[50];
	char *maxstr;						/*����һ���ַ���ָ�룬����ָ�򳤶������ַ�����ָ��*/
	printf("�����������ַ�����\n");		/*��ʾ�û����������ַ���*/
	scanf("%s%s%s",str1,str2,str3);					/*��ȡ�����ַ���*/
	maxstr=str1;						/*������maxstrָ���һ���ַ���*/
	if(strlen(maxstr)<strlen(str2))		/*��str2�ĳ��ȴ�����maxstrָ��str2*/
	{
		maxstr=str2;
	}
	if(strlen(maxstr)<strlen(str3))		/*��str3�ĳ��ȳ�������maxstrָ��str3*/
	{
		maxstr=str3;
	}

	printf("�ַ���1Ϊ��%s���䳤��Ϊ��%d\n",str1,strlen(str1));
	printf("�ַ���2Ϊ��%s���䳤��Ϊ��%d\n",str2,strlen(str2));
	printf("�ַ���3Ϊ��%s���䳤��Ϊ��%d\n",str3,strlen(str2));
	printf("��������ַ���Ϊ��%s,�䳤��Ϊ��%d\n",maxstr,strlen(maxstr));
	return 0;
}
