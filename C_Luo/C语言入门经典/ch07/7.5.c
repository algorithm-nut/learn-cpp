#include<stdio.h>
int f(int n) 							/*�Զ���f����������Ӧ�ĺ���ֵ*/
{
	if(n>0) 								/*���n����0����ִ��n+10*/
		n=n+10;
	else
		if(n<0) 							/*���nС��0����ִ��n+20*/
			n=n+20;
		else								/*���n����0����nֵΪ100*/
			n=100;
		printf("n=%d\n",n); 				/*���n��ֵ*/
	return n;
}
int main()
{
	int n;
	printf("input number\n");
	scanf("%d",&n);
	f(n); 								/*����f����*/
	return 0;
}
