#include<stdio.h>
#include<stdlib.h>
main()
{
	FILE *fp;
	if((fp=fopen("E:\\exp03.txt","r"))==NULL)		/*���ļ�*/
	{
		printf("Error: can not open file!");
		exit(0);									/*����ʧ�����˳�����*/
	}
	while(!feof(fp))								/*���ļ�û�н�����ִ��whileѭ��*/
	{
		putchar(fgetc(fp));						/*���ļ��ж�һ���ַ������*/
	}
	fclose(fp);									/*�ر��ļ�*/
}
