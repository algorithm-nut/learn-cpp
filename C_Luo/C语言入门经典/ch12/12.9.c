#include<stdio.h>
#include<stdlib.h>
main()
{
	FILE *fp;
	char filename[30],str[50];					/*���������ַ�������*/
	printf("�������ļ�·��:\n");
	gets(filename);								/*�����ļ���*/
	if((fp=fopen(filename,"wb"))==NULL)			/*�ж��ļ��Ƿ��ʧ��*/
	{
		printf("can not open!\npress any key to continue\n");
		getchar();
		exit(0);
	}
	printf("������һ���ַ���:\n");
	gets(str);
	fputs(str,fp);
	fclose(fp);
	if((fp=fopen(filename,"rb"))==NULL)			/*�ж��ļ��Ƿ��ʧ��*/
	{
		printf("can not open!\npress any key to continue\n");
		getchar();
		exit(0);
	}
	fseek(fp,6L,0);
	fgets(str,sizeof(str),fp);
	putchar('\n');
	puts(str);
	fclose(fp);								/*�ر��ļ�*/
	return 0;
}
