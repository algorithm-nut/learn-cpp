#include<stdio.h>
#include<stdlib.h>
main()
{
	FILE *fp;
	int n;
	char ch,filename[50];
	printf("�������ļ�·�����ļ���:\n");
	scanf("%s",filename);						/*�����ļ���*/
	if((fp=fopen(filename,"r"))==NULL) 			/*��ֻ����ʽ�򿪸��ļ�*/
	{
		printf("cannot open this file.\n");
		exit(0);
	}
	ch = fgetc(fp);
	while (ch != EOF)
	{
		putchar(ch);								/*����ַ�*/
		ch = fgetc(fp); 							/*��ȡfpָ���ļ��е��ַ�*/
	}
	n=ftell(fp);
	printf("\n����ַ����ĳ���Ϊ:%d\n",n);
	fclose(fp); 									/*�ر��ļ�*/
}
