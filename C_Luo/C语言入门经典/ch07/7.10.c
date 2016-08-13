#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
int main(int argc,char **argv)
{
	int i,j;
	char *str;
	if(argc!=3)						/*如果参数个数不是三个则报错*/
	{
		printf("参数个数不正确\n");
		exit(0);					/*退出程序*/
	}
	if(strcmp(argv[1],"-length")==0)/*如果是-length命令*/
	{
		printf("the length of %s is %d\n",argv[2],strlen(argv[2]));
	}
	else if(strcmp(argv[1],"-tolower")==0)/*如果是-tolower命令*/
	{
		j=strlen(argv[2]);
		str=argv[2];
		for(i=0;i<j;++i)
		{
			if(isupper(str[i]))				/*判断字符是否是大写字母*/
			{
				str[i]=tolower(str[i]);		/*若是大写字母则转换成小写*/
			}
		}
		printf("小写形式为：%s\n",str);		/*输出小写形式*/
	}
	else if(strcmp(argv[1],"-toupper")==0)	/*如果是-toupper命令*/
	{
		j=strlen(argv[2]);
		str=argv[2];
		for(i=0;i<j;++i)					
		{
			if(islower(str[i]))				/*判断字符是否是小写字母*/
			{
				str[i]=toupper(str[i]);		/*若是小写字母则转换成大写*/
			}
		}
		printf("大写形式为:%s\n",str);		 /*输出大写形式*/
	}
	else
	{
		printf("语法不正确.\n");			/*否则语法不正确*/
	}
	return 0;								/*程序结束*/
}
