#include<stdio.h>
#include<stdlib.h>
main()
{
	FILE *fp;
	double a=1/3.0;
	char filename[30];						/*����һ���ַ�������*/
	printf("�������ļ�·��:\n");
	scanf("%s",filename);					/*�����ļ���*/
	if((fp=fopen(filename,"w"))==NULL)		/*�ж��ļ��Ƿ��ʧ��*/
	{
		printf("can not open!\npress any key to continue\n");
		getchar();
		exit(0);
	}
	fprintf(fp,"%.2f",a);				/*��a�Ա�����λС������ʽд���ļ���*/
	fclose(fp);
	return 0;
}
