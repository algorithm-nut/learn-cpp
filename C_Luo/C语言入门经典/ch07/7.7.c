#include<stdio.h>
int max(int,int);				/*��������*/
int main()
{
	int a,b,c;
	printf("������������;\n");
	scanf("%d%d",&a,&b);
	c=max(a,b);					/*���ú���*/
	printf("�ϴ�����ǣ�%d\n",c);
	return 0;
}
int max(int x,int y)			/*��������*/
{
	int z;
	z=x>y?x:y;
	return z;
}