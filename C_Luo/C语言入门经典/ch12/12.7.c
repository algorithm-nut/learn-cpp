#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
int main()
{
	FILE *fp;
	char filename[30];					/*�����ļ�����*/
	char str[30];						/*������������ַ���*/
	float sum=0.0,amount;				/*sum��ʾ�ܶamount��ʾÿ������*/
	printf("�������ļ�·����\n");
	scanf("%s",filename);
	if((fp=fopen(filename,"r"))==NULL)	/*���ļ�ʧ��*/
	{
		printf("can not open file\nPress any key to continue");
		getchar();
		exit(0);						/*�˳�����*/
	}
	while(!feof(fp))					/*���ļ�δ����*/
	{
		fscanf(fp,"%s%f%s",str,&amount,str);/*����ʽ��ȡ*/
		sum+=amount;						/*�ۼ����ѽ��*/
	}
	printf("�����ܶ�Ϊ��%.2fԪ\n",sum);
	fclose(fp);								/*�ر��ļ�*/
	return 0;
}
