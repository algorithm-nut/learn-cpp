#include<stdio.h>
#include<stdlib.h>
main()
{
	FILE *fp;
	if((fp=fopen("E:\\exp03.txt","r"))==NULL)		/*打开文件*/
	{
		printf("Error: can not open file!");
		exit(0);									/*若打开失败则退出程序*/
	}
	while(!feof(fp))								/*若文件没有结束则执行while循环*/
	{
		putchar(fgetc(fp));						/*从文件中读一个字符并输出*/
	}
	fclose(fp);									/*关闭文件*/
}
