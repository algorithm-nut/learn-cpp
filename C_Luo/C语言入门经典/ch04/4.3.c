#include<stdio.h>
int main()
{
	char cChar;									/*�ַ��ͱ���*/
	short int iShort;							/*�����ͱ���*/
	int iInt;									/*���ͱ���*/
	float fFloat=70000;							/*�����ȸ����ͱ���*/
	cChar=(char)fFloat;							/*ǿ��ת����ֵ*/
	iShort=(short)fFloat;
	iInt=(int)fFloat;
	printf("�ַ��ͱ�����ֵΪ: %c\n",cChar);				/*����ַ�����ֵ*/
	printf("�����ͱ�����ֵΪ: %ld\n",iShort);			/*��������ͱ���ֵ*/
	printf("���ͱ�����ֵΪ: %d\n",iInt);				/*������ͱ���ֵ*/
	printf("�����ȸ����ͱ�����ֵΪ: %f\n",fFloat);		/*��������ȸ����ͱ���ֵ*/
	return 0;											/*�������*/
}
