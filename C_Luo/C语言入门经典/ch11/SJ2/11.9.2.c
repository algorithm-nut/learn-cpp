#include<stdio.h>
union Dif
{
	int Class;
	char Position[20];
};
struct Person
{
    char name[10];
	char job;
    char sex;
    int number;
	union Dif dif;
}persion[4];
main()
{
    int i,j;
	for(i=0;i<4;++i)
	{
        scanf("%s %c %c%d",persion[i].name,&persion[i].job,&persion[i].sex,&persion[i].number);
        if(persion[i].job=='S')
        scanf("%d",&persion[i].dif.Class);
        else scanf("%s",persion[i].dif.Position);
	}
	for(j=0;j<4;++j)
	{
        printf("Job:\t\t%c\n",persion[j].job);
        printf("Name:\t\t%s\n",persion[j].name);
        printf("Number:\t\t%d\n",persion[j].number);
        printf("Sex:\t\t%c\n",persion[j].sex);
        if(persion[j].job=='S')
        printf("Class:\t%d\n",persion[j].dif.Class);
        else printf("Position:\t%s\n",persion[j].dif.Position);
		printf("\n");
	}
}

