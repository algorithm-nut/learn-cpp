#include<stdio.h>
#include<stdlib.h>
struct Student
{
	char name[30];
	int math_score;
	int ch_score;
	int en_score;
}student[100];
save(char *filename,int n)
{
	FILE *fp;
	int i;
	if((fp=fopen(filename,"w"))==NULL)
	{
		printf("Error: can not open file!");
		exit(0);
	}
	for(i=0;i<n;++i)
	{
		if(fwrite(&student[i],sizeof(struct Student),1,fp)!=1)
		{
			printf("file write error!");
		}
	}
	fclose(fp);
}
main()
{
	char filename[30];
	int count;
	int i;
	printf("������ѧ������:\n");
	scanf("%d",&count);
	printf("�������ļ�����·��������:\n");
	scanf("%s",filename);
	printf("������ѧ������������ѧ�ɼ������Գɼ���Ӣ��ɼ���\n");
	for(i=0;i<count;++i)
	{
		printf("NO%d ",i+1);
		scanf("%s,%d,%d,%d",student[i].name,&student[i].math_score,&student[i].ch_score,&student[i].en_score);
	}
	save(filename,count);
}