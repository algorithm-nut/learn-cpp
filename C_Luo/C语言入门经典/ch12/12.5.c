#include<stdio.h>
#include<stdlib.h>
main()
{
	FILE *fp;
	char filename[100],str[100];					/*定义两个字符型数组*/
	printf("请输入文件路径:\n");
	scanf("%s",filename);						/*输入文件名*/
	if((fp=fopen(filename,"r"))==NULL)			/*判断文件是否打开失败*/
	{
		printf("can not open!\npress any key to continue\n");
		getchar();
		exit(0);
	}
	fgets(str,sizeof(str),fp);					/*读取磁盘文件中的内容*/
	printf("%s",str);
	fclose(fp);
	return 0;
}
