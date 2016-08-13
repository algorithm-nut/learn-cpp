#include<stdio.h>
int difference(int num)
{
    int min[4];
    int maxnum=0;
    int minnum=0;
    int i,j,d,tmp,result;
    min[0]=num/1000;        /*取千位数字*/
    min[1]=(num/100)%10;    /*取百位数字*/
    min[2]=(num/10)%10;    /*取十位数字*/
    min[3]=num%10;          /*取个位数字*/
    for(i=0;i<3;++i)        /*排序，求出min[]*/
    {
        d=i;
        for(j=i+1;j<=3;++j)
        {
            if(min[j]<min[d])
            {
                d=j;
            }
        }
        if(d!=i)
        {
            tmp=min[i];
            min[i]=min[d];
            min[d]=tmp;
        }
    }
    for(i=0,j=1000;i<=3;++i,j/=10)/*计算最大四位数与最小四位数*/
    {
        minnum+=min[i]*j;
        maxnum+=min[3-i]*j;
    }
    result=maxnum-minnum;       /*计算最大四位数与最小四位数之差*/
    printf("%d = %d - %d\n",result,maxnum,minnum);
    return result;
}
main()
{
    int num;
    scanf("%d",&num);
	while(num!=6174)
		num=difference(num);
}
