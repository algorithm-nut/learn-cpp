#include<stdio.h>
int gcd(int a,int b)	/*շת����������Լ��*/
{
	int c;
	while((c=a%b)!=0)
	{
		a=b;
		b=c;
	}
	return b;
}
int main()
{
	int a,b,c;
	int (*p)(int,int);	/*����ָ������ָ��p*/
	p=gcd;				/*ʹpָ��gcd����*/
	printf("����������������\n");
	scanf("%d%d",&a,&b);
	c=(*p)(a,b);		/*ʹ��ָ����ú���*/
	printf("%d��%d�����Լ��Ϊ:%d\n",a,b,c);
	return 0;
}