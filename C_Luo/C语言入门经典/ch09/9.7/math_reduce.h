#ifndef MATH_REDUCE		/*��û�б������MATH_REDUCE��������������*/
#define MATH_REDUCE		/*Ԥ�������MATH_REDUCE*/
#include"math_gcd.h"	/*����ͷ�ļ�math_gcd.h*/
void reduce(int *a,int *b)
{
    int c=gcd(*a,*b);
    *a=(*a)/c;
    *b=(*b)/c;
}
#endif
