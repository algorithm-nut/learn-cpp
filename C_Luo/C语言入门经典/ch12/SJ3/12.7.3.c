#include<stdio.h>
#include<stdlib.h>
#define SIZE 256							/*һ�������һ���ַ����ᳬ��256��������256��ʾһ�е��ַ�����*/
main()
{
	char filename[30],buf[SIZE];			/*bufΪ�������飬���ڶ�ȡһ����*/
	int count=1;
	FILE *fp,*tmp;
	printf("�������ļ�����·��������:\n");
	gets(filename);
	if((tmp=fopen("tmp.txt","w"))==NULL)	/*�½���ʱ�ļ���������������*/
	{
	    printf("Error: can not open file!");
	    exit(0);
	}
	if((fp=fopen(filename,"r"))==NULL)		/*��ԭʼ�ļ�*/
	{
		printf("Error: can not open file!");
		exit(0);
	}
	while(!feof(fp))
	{
	    fgets(buf,SIZE,fp);					/*��ȡһ����*/
	    fprintf(tmp,"%d\t",count);			/*����ʱ�ļ�д�к�*/
	    ++count;
	    fputs(buf,tmp);						/*����ȡ������д����ʱ�ļ�*/
	}
	fclose(fp);
	fclose(tmp);
	remove(filename);						/*ɾ��ԭʼ�ļ�*/
	rename("tmp.txt",filename);				/*����ʱ�ļ�������Ϊԭʼ�ļ���*/
}
