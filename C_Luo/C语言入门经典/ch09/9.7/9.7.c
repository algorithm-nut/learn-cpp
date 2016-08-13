#include<stdio.h>
#include"math_gcd.h"			/*包含自定义头文件math_gcd.h*/
#include"math_reduce.h"			/*包含自定义头文件math_reduce.h*/
int main()
{
    int a,b;
    printf("请输入分子和分母：\n");
    scanf("%d/%d",&a,&b);
    if(gcd(a,b)==1)				/*若不能约分，则给出提示*/
    {
        printf("该分数不能约分。\n");
    }
    else						/*若能约分则能给出提示*/
    {
        reduce(&a,&b);
        printf("约分后的分数为:%d/%d\n",a,b);
    }
    return 0;
}
