#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Please input a,b,c;\n");		/*��ʾ��Ϣ*/
	scanf("%d,%d,%d",&a,&b,&c);			/*����������ֵ*/
	if(a>b)								/*�жϱ��ʽ1���������*/
	{
		if(b>c)							/*�жϱ��ʽ2���������*/
			printf("%d,%d,%d\n",c,b,a);
		else  if(a>c)					/*�жϱ��ʽ3���������*/
			printf("%d,%d,%d\n",b,c,a);
		else								/*���ʽ1Ϊ�棬���ʽ2��3Ϊ��ʱ����*/
			printf("%d,%d,%d\n",b,a,c);
	}
	else									/*�����ʽ1Ϊ��ʱ����*/
	{
		if(c<a)							/*�жϱ��ʽ4���������*/
		printf("%d,%d,%d\n",c,a,b);

		else  if(c<b)					/*�жϱ��ʽ5���������*/
				printf("%d,%d,%d\n",a,c,b);
		else								/*��ǰ�����еı��ʽΪ��ʱ����*/
				printf("%d,%d,%d\n",a,b,c);
	}
	return 0;
}
