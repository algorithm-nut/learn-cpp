#include<stdio.h>
#include"math_gcd.h"			/*�����Զ���ͷ�ļ�math_gcd.h*/
#include"math_reduce.h"			/*�����Զ���ͷ�ļ�math_reduce.h*/
int main()
{
    int a,b;
    printf("��������Ӻͷ�ĸ��\n");
    scanf("%d/%d",&a,&b);
    if(gcd(a,b)==1)				/*������Լ�֣��������ʾ*/
    {
        printf("�÷�������Լ�֡�\n");
    }
    else						/*����Լ�����ܸ�����ʾ*/
    {
        reduce(&a,&b);
        printf("Լ�ֺ�ķ���Ϊ:%d/%d\n",a,b);
    }
    return 0;
}
