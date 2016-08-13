#include<stdio.h>
#include<stdlib.h>
main()
{
	FILE *fp;
	char filename[30],str[50];					/*定义两个字符型数组*/
	printf("请输入文件路径:\n");
	gets(filename);								/*输入文件名*/
	if((fp=fopen(filename,"wb"))==NULL)			/*判断文件是否打开失败*/
	{
		printf("can not open!\npress any key to continue\n");
		getchar();
		exit(0);
	}
	printf("请输入一个字符串:\n");
	gets(str);
	fputs(str,fp);
	fclose(fp);
	if((fp=fopen(filename,"rb"))==NULL)			/*判断文件是否打开失败*/
	{
		printf("can not open!\npress any key to continue\n");
		getchar();
		exit(0);
	}
	fseek(fp,6L,0);
	fgets(str,sizeof(str),fp);
	putchar('\n');
	puts(str);
	fclose(fp);								/*关闭文件*/
	return 0;
}
