#include<stdio.h>
#include<string.h>
main()
{
	char str[100]={0};
	int index,len,i;
	int flag=1;					/*��־λ���н�������ʱΪ1���޽�������ʱΪ0*/
	printf("�������ַ���:\n");
	gets(str);
	len=strlen(str);			/*��ȡ�ַ�������*/
	index=len-1;
	while((index>0)&&flag)
	{
		flag=0;					/*�Ƚ���־λ��0*/
		for(i=0;i<index;++i)
		{
			if(str[i]>str[i+1])	/*���н�����������*/
			{
				int tmp=str[i];
				str[i]=str[i+1];
				str[i+1]=tmp;
				flag=1;			/*��־λ��1*/
			}
		}
	}
	printf("����ASCII����������Ϊ��\n");
	puts(str);
}