#include<stdio.h>
#include<stdlib.h>
#define SIZE 256							/*一般情况下一行字符不会超过256，所以用256表示一行的字符长度*/
main()
{
	char filename[30],buf[SIZE];			/*buf为缓冲数组，用于读取一整行*/
	int count=1;
	FILE *fp,*tmp;
	printf("请输入文件所在路径及名称:\n");
	gets(filename);
	if((tmp=fopen("tmp.txt","w"))==NULL)	/*新建临时文件，保存最终内容*/
	{
	    printf("Error: can not open file!");
	    exit(0);
	}
	if((fp=fopen(filename,"r"))==NULL)		/*打开原始文件*/
	{
		printf("Error: can not open file!");
		exit(0);
	}
	while(!feof(fp))
	{
	    fgets(buf,SIZE,fp);					/*读取一整行*/
	    fprintf(tmp,"%d\t",count);			/*向临时文件写行号*/
	    ++count;
	    fputs(buf,tmp);						/*将读取的内容写到临时文件*/
	}
	fclose(fp);
	fclose(tmp);
	remove(filename);						/*删除原始文件*/
	rename("tmp.txt",filename);				/*将临时文件重命名为原始文件名*/
}
