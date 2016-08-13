#include<stdio.h>
#include<stdlib.h>
main()
{
	FILE *fp;
	int n;
	char ch,filename[50];
	printf("请输入文件路径和文件名:\n");
	scanf("%s",filename);						/*输入文件名*/
	if((fp=fopen(filename,"r"))==NULL) 			/*以只读方式打开该文件*/
	{
		printf("cannot open this file.\n");
		exit(0);
	}
	ch = fgetc(fp);
	while (ch != EOF)
	{
		putchar(ch);								/*输出字符*/
		ch = fgetc(fp); 							/*获取fp指向文件中的字符*/
	}
	n=ftell(fp);
	printf("\n这个字符串的长度为:%d\n",n);
	fclose(fp); 									/*关闭文件*/
}
