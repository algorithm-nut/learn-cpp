#include<stdio.h>
#include<math.h>
int Armstrong(int);
int main()
{
	int aInt;		/*�����û����������*/
	printf("������һ����λ���֣�\n");
	scanf("%d",&aInt);
	if(aInt==Armstrong(aInt))	/*��aInt������ÿλ����������*/
	{
		printf("%d��ˮ�ɻ�����\n",aInt);
	}
	else				/*��aInt��������ÿλ����������*/
	{
		printf("%d����ˮ�ɻ�����\n",aInt);
	}
	return 0;
}
int Armstrong(int x)
{
	int a,b,c;		/*����a,b,c�ֱ����ڱ����λ��ʮλ����λ�ϵ�����*/
	a=x/100;		/*ȡ��λ����*/
	b=(x/10)%10;	/*ȡʮλ��ѧ*/
	c=x%10;			/*ȡ��λ����*/
	return (int)(pow(a,3)+pow(b,3)+pow(c,3));/*����ÿλ����������*/
}