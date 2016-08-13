#include<stdio.h>
#include<string.h>
struct Person
{
	char name[3];
	short count;
}person[3]={{"白",0},{"李",0},{"王",0}};
main()
{
	int i,j;
	char name[10][3];
	for(i=0;i<10;++i)
		scanf("%s",name[i]);
	for(j=0;j<10;j++)
	{
		if(strcmp(name[j],"白")==0)
		{
			person[0].count++;
		}else if(strcmp(name[j],"李")==0)
		{
			person[1].count++;
		}else if(strcmp(name[j],"王")==0)
		{
			person[2].count++;
		}
	}
	for(j=0;j<3;++j)
		printf("%s,%d\n",person[j].name,person[j].count);
}