#include<stdio.h>
#include<math.h>
main()
{
	float a,b,c,s,S;
	printf("���������ε������ߣ�\n");
	scanf("%f%f%f",&a,&b,&c);
	s=(a+b+c)/2;
	S=(float)sqrt(s*(s-a)*(s-b)*(s-c));
	printf("�����ε����Ϊ��%10.3f\n",S);
}