#include<stdio.h>
int difference(int num)
{
    int min[4];
    int maxnum=0;
    int minnum=0;
    int i,j,d,tmp,result;
    min[0]=num/1000;        /*ȡǧλ����*/
    min[1]=(num/100)%10;    /*ȡ��λ����*/
    min[2]=(num/10)%10;    /*ȡʮλ����*/
    min[3]=num%10;          /*ȡ��λ����*/
    for(i=0;i<3;++i)        /*�������min[]*/
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
    for(i=0,j=1000;i<=3;++i,j/=10)/*���������λ������С��λ��*/
    {
        minnum+=min[i]*j;
        maxnum+=min[3-i]*j;
    }
    result=maxnum-minnum;       /*���������λ������С��λ��֮��*/
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
