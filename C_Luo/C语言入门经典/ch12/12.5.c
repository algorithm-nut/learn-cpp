#include<stdio.h>
#include<stdlib.h>
main()
{
	FILE *fp;
	char filename[100],str[100];					/*���������ַ�������*/
	printf("�������ļ�·��:\n");
	scanf("%s",filename);						/*�����ļ���*/
	if((fp=fopen(filename,"r"))==NULL)			/*�ж��ļ��Ƿ��ʧ��*/
	{
		printf("can not open!\npress any key to continue\n");
		getchar();
		exit(0);
	}
	fgets(str,sizeof(str),fp);					/*��ȡ�����ļ��е�����*/
	printf("%s",str);
	fclose(fp);
	return 0;
}
