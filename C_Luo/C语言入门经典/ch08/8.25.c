#include<stdio.h>
#include<math.h>
int dif_sum(int,int,int);/*��Ȳ�����ǰN��ͺ���*/
int div_sum(int,int,int);/*��ȱ�����ǰN��ͺ���*/
float integral(int,int,int,float,float,int(*fun)(int,int,int));/*���㶨���ֺ���*/
int main()
{
    int a,n,p;                  /*�����������������򹫱�*/
    float x,y;                  /*�����������*/
    float result1,result2;      /*������ֽ��*/
    printf("������Ȳ����е��������������ͻ������䣺\n");
    scanf("%d%d%d%f%f",&a,&n,&p,&x,&y);
    result1=integral(a,n,p,x,y,dif_sum); /*����Ȳ���������µĻ��ֽ��*/
    printf("�����ڸ������ϵĻ��ֽ��Ϊ��%.2f\n",result1);
    printf("������ȱ����е��������������ͻ������䣺\n");
    scanf("%d%d%d%f%f",&a,&n,&p,&x,&y);
    result2=integral(a,n,p,x,y,div_sum);/*����ȱ���������µĻ��ֽ��*/
    printf("�����ڸ������ϵĻ��ֽ��Ϊ��%.2f\n",result2);
    return 0;
}
int dif_sum(int a,int n,int p)
{
    int sum=0;
    sum=n*a+n*(n-1)*p/2;/*�Ȳ�������͹�ʽ*/
    return sum;
}
int div_sum(int a,int n,int q)
{
    int sum=0;
    sum=a*(1-(int)pow(q,n))/(1-q);/*�ȱ�������͹�ʽ*/
    return sum;
}
float integral(int a,int n,int p,float x,float y,int(*fun)(int,int,int))
{
    int sum=(*fun)(a,n,p);  /*���������е�ǰN��֮��*/
    float result=sum*(y*y-x*x)/2;/*��������[x,y]�ϵĶ�����*/
    return result;
}
