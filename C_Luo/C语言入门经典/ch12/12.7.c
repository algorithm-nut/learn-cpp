#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
int main()
{
	FILE *fp;
	char filename[30];					/*保存文件名称*/
	char str[30];						/*用于清除无用字符串*/
	float sum=0.0,amount;				/*sum表示总额，amount表示每笔消费*/
	printf("请输入文件路径：\n");
	scanf("%s",filename);
	if((fp=fopen(filename,"r"))==NULL)	/*打开文件失败*/
	{
		printf("can not open file\nPress any key to continue");
		getchar();
		exit(0);						/*退出程序*/
	}
	while(!feof(fp))					/*若文件未结束*/
	{
		fscanf(fp,"%s%f%s",str,&amount,str);/*按格式读取*/
		sum+=amount;						/*累加消费金额*/
	}
	printf("消费总额为：%.2f元\n",sum);
	fclose(fp);								/*关闭文件*/
	return 0;
}
