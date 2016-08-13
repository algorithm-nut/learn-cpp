#include<stdio.h>
#include<stdlib.h>
main()
{
	FILE *fp;
	char filename[30],str[30];				/*定义两个字符型数组*/
	printf("请输入文件路径:\n");
	gets(filename);							/*输入文件名*/
	if((fp=fopen(filename,"w"))==NULL)		/*判断文件是否打开失败*/
	{
		printf("can not open!\npress any key to continue:\n");
		getchar();
		exit(0);
	}
	printf("请输入字符串:\n");					/*提示输入字符串*/
	gets(str);
	fputs(str,fp);							/*将字符串写入fp所指向的文件中*/
	fclose(fp);
	return 0;
}
