#ifndef MATH_GCD		/*������MATH_GCDû�б�������ű������������*/
#define MATH_GCD		/*Ԥ�������MATH_GCD*/
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


