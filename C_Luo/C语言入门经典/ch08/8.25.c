#include<stdio.h>
#include<math.h>
int dif_sum(int,int,int);/*求等差数列前N项和函数*/
int div_sum(int,int,int);/*求等比数列前N项和函数*/
float integral(int,int,int,float,float,int(*fun)(int,int,int));/*计算定积分函数*/
int main()
{
    int a,n,p;                  /*保存首项、项数、公差或公比*/
    float x,y;                  /*保存积分区间*/
    float result1,result2;      /*保存积分结果*/
    printf("请输入等差数列的首项，项数，公差和积分区间：\n");
    scanf("%d%d%d%f%f",&a,&n,&p,&x,&y);
    result1=integral(a,n,p,x,y,dif_sum); /*计算等差数列情况下的积分结果*/
    printf("函数在该区间上的积分结果为：%.2f\n",result1);
    printf("请输入等比数列的首项，项数，公差和积分区间：\n");
    scanf("%d%d%d%f%f",&a,&n,&p,&x,&y);
    result2=integral(a,n,p,x,y,div_sum);/*计算等比数列情况下的积分结果*/
    printf("函数在该区间上的积分结果为：%.2f\n",result2);
    return 0;
}
int dif_sum(int a,int n,int p)
{
    int sum=0;
    sum=n*a+n*(n-1)*p/2;/*等差数列求和公式*/
    return sum;
}
int div_sum(int a,int n,int q)
{
    int sum=0;
    sum=a*(1-(int)pow(q,n))/(1-q);/*等比数列求和公式*/
    return sum;
}
float integral(int a,int n,int p,float x,float y,int(*fun)(int,int,int))
{
    int sum=(*fun)(a,n,p);  /*首先求数列的前N项之和*/
    float result=sum*(y*y-x*x)/2;/*计算区间[x,y]上的定积分*/
    return result;
}
