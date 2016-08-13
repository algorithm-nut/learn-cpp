#ifndef MATH_GCD		/*若变量MATH_GCD没有被编译过才编译下面的内容*/
#define MATH_GCD		/*预定义变量MATH_GCD*/
int gcd(int a,int b)
{
    int c;
    while((c=a%b)!=0)
    {
        a=b;
        b=c;
    }
    return b;
}
#endif


