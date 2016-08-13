#include<stdio.h>
#include<math.h>
main()
{
	float a,b,c,s,S;
	printf("输入三角形的三条边：\n");
	scanf("%f%f%f",&a,&b,&c);
	s=(a+b+c)/2;
	S=(float)sqrt(s*(s-a)*(s-b)*(s-c));
	printf("三角形的面积为：%10.3f\n",S);
}