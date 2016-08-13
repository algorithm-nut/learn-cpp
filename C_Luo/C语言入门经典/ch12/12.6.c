#include<stdio.h>
#include<stdlib.h>
main()
{
	FILE *fp;
	double a=1/3.0;
	char filename[30];						/*定义一个字符型数组*/
	printf("请输入文件路径:\n");
	scanf("%s",filename);					/*输入文件名*/
	if((fp=fopen(filename,"w"))==NULL)		/*判断文件是否打开失败*/
	{
		printf("can not open!\npress any key to continue\n");
		getchar();
		exit(0);
	}
	fprintf(fp,"%.2f",a);				/*将a以保留两位小数的形式写入文件中*/
	fclose(fp);
	return 0;
}
