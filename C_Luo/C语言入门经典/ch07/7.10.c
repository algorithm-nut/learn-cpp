#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
int main(int argc,char **argv)
{
	int i,j;
	char *str;
	if(argc!=3)						/*��������������������򱨴�*/
	{
		printf("������������ȷ\n");
		exit(0);					/*�˳�����*/
	}
	if(strcmp(argv[1],"-length")==0)/*�����-length����*/
	{
		printf("the length of %s is %d\n",argv[2],strlen(argv[2]));
	}
	else if(strcmp(argv[1],"-tolower")==0)/*�����-tolower����*/
	{
		j=strlen(argv[2]);
		str=argv[2];
		for(i=0;i<j;++i)
		{
			if(isupper(str[i]))				/*�ж��ַ��Ƿ��Ǵ�д��ĸ*/
			{
				str[i]=tolower(str[i]);		/*���Ǵ�д��ĸ��ת����Сд*/
			}
		}
		printf("Сд��ʽΪ��%s\n",str);		/*���Сд��ʽ*/
	}
	else if(strcmp(argv[1],"-toupper")==0)	/*�����-toupper����*/
	{
		j=strlen(argv[2]);
		str=argv[2];
		for(i=0;i<j;++i)					
		{
			if(islower(str[i]))				/*�ж��ַ��Ƿ���Сд��ĸ*/
			{
				str[i]=toupper(str[i]);		/*����Сд��ĸ��ת���ɴ�д*/
			}
		}
		printf("��д��ʽΪ:%s\n",str);		 /*�����д��ʽ*/
	}
	else
	{
		printf("�﷨����ȷ.\n");			/*�����﷨����ȷ*/
	}
	return 0;								/*�������*/
}
