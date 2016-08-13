#include<stdio.h>
#include<ctype.h>
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
    *aInt=*aInt+24;			/*使用指针改变整数的值*/
    *ch=tolower(*ch);		/*使用指针改变字符的值*/
    printf("改变后的整数:%d\n",*aInt);/*使用指针输出整数a*/
    printf("改变后的字符:%c\n",*ch);	/*使用指针输出字符b*/
    return 0;
}
