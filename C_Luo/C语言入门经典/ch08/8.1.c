#include<stdio.h>
int main()
{
    int a;
    char b;
    int *aInt;				/*定义一个整型指针变量*/
    char *ch;				/*定义一个字符指针变量*/
    printf("输入一个整数和一个字符:\n");
    scanf("%d,%c",&a,&b);
    aInt=&a;				/*使整型指针变量指向整数a*/
    ch=&b;					/*使字符指针变量指向字符b*/
    printf("直接输出整数:%d\n",a);
    printf("使用指针输出整数:%d\n",*aInt);/*使用指针输出整数a*/
    printf("直接输出字符:%c\n",b);
    printf("使用指针输出字符:%c\n",*ch);	/*使用指针输出字符b*/
    return 0;
}
