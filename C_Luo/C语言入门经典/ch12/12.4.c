#include<stdio.h>
#include<stdlib.h>
main()
{
	FILE *fp;
	char filename[30],str[30];				/*���������ַ�������*/
	printf("�������ļ�·��:\n");
	gets(filename);							/*�����ļ���*/
	if((fp=fopen(filename,"w"))==NULL)		/*�ж��ļ��Ƿ��ʧ��*/
	{
		printf("can not open!\npress any key to continue:\n");
		getchar();
		exit(0);
	}
	printf("�������ַ���:\n");					/*��ʾ�����ַ���*/
	gets(str);
	fputs(str,fp);							/*���ַ���д��fp��ָ����ļ���*/
	fclose(fp);
	return 0;
}
