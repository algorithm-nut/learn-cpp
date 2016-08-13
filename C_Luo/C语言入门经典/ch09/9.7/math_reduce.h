#ifndef MATH_REDUCE		/*若没有编译变量MATH_REDUCE则编译下面的内容*/
#define MATH_REDUCE		/*预定义变量MATH_REDUCE*/
#include"math_gcd.h"	/*包含头文件math_gcd.h*/
void reduce(int *a,int *b)
{
    int c=gcd(*a,*b);
    *a=(*a)/c;
    *b=(*b)/c;
}
#endif
