#include<stdio.h>
#include<stdlib.h>
#define SIZE 256
main()
{
	char firstfile[30],secondfile[30];
	char buf[SIZE];
	FILE *fp1,*fp2;
	printf("�����뽫Ҫ�����Ƶ��ļ����ڵ�·�������ƣ�\n");
	gets(firstfile);
	printf("�������½��Ľ����ڸ��Ƶ��ļ����ڵ�·�������ƣ�\n");
	gets(secondfile);
	if((fp1=fopen(firstfile,"r"))==NULL)
	{
		printf("Error: can not open file!");
		exit(0);
	}
	if((fp2=fopen(secondfile,"w"))==NULL)
	{
		printf("Error: can not open file!");
		exit(0);
	}
	while(!feof(fp1))
	{
		fgets(buf,SIZE,fp1);
		fputs(buf,fp2);
	}
	fclose(fp1);
	fclose(fp2);
}
