#include<stdio.h>
int main()
{
	int iCelsius,iFahrenheit;			/*������������*/
	printf("�����뻪���¶�:\n");			/*��ʾ��ʾ��Ϣ*/
	scanf("%d",&iFahrenheit);			/*�ڼ��������뻪���¶�*/
	iCelsius=5*(iFahrenheit-32)/9;		/*ͨ���������ʽ���м��㣬���������ֵ*/
	printf("�¶�Ϊ:\n");					/*�����ʾ��Ϣ*/
	printf("%d",iCelsius);				/*��������¶�*/
	printf(" �����¶�\n");				/*�����ʾ��Ϣ*/
	return 0;							/*�������*/
}
