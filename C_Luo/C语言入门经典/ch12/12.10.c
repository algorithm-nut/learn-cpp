#include<stdio.h>
#include<stdlib.h>
main()
{
	FILE *fp;
	char ch,filename[50];
	printf("�������ļ�·��������:\n");
	scanf("%s",filename);					/*�����ļ���*/
	if((fp=fopen(filename,"r"))==NULL) 		/*��ֻ����ʽ�򿪸��ļ�*/
	{
		printf("cannot open this file.\n");
		exit(0);
	}
	ch = fgetc(fp);
	while (ch != EOF)
	{
		putchar(ch);							/*����ַ�*/
		ch = fgetc(fp); 						/*��ȡfpָ���ļ��е��ַ�*/
	}
printf("\n");
	rewind(fp); 								/*ָ��ָ���ļ���ͷ*/
	ch = fgetc(fp);
	while (ch != EOF)
	{
		putchar(ch); 						/*����ַ�*/
		ch = fgetc(fp);
	}
printf("\n");
	fclose(fp); 								/*�ر��ļ�*/
 }
