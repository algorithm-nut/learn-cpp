#include<stdio.h>
char ShowChar();					/*����������*/
int main()
{
	char cResult;
	cResult=ShowChar();			/*�����Զ��庯��Show Char()�������������Ľ����
									/*ֵ������cResult*/
	printf("%c\n",cResult);		/*�����صĽ���������*/
	return 0;					/*�������*/
}
char ShowChar()
{
	int iNumber;					/*�������ͱ���*/
	printf("������ASCII��:\n");	/*�����ʾ��Ϣ*/
	scanf("%d",&iNumber);		/*����һ�����ͱ���*/
	return iNumber;				/*���ص�������*/
}
