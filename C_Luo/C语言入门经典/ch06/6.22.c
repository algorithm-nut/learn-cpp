#include <stdio.h>
int main()
{
	int i;											/*����ѭ��ʱʹ�õı���*/
	char String[7]  = {"mrsoft"};						/*���岢��ʼ��Դ�ַ���*/
	char Reverse[7] = {0};							/*���岢��ʼ��Ŀ���ַ���*/
	int size;
	size = sizeof(String);							/*����Դ�ַ�������*/
	for(i=0;i<6;i++)									/*forѭ������ȡ�ַ�*/
	{
		Reverse[size-i-2] = String[i];				/*��Ŀ���ַ����в����ַ�*/
	}
	printf("���Դ�ַ�����%s\n",String);				/*���Դ�ַ���*/
	printf("���Ŀ���ַ�����%s\n",Reverse);				/*���Ŀ���ַ���*/
	return 0;										/*�������*/
}
