/*////////////////////////////////////////////////////////*/
/*					ExternFun.c							*/
/*///////////////////////////////////////////////////////*/
#include<stdio.h>
extern char* GetString(char* pString);		/*�����ⲿ����*/
extern void ShowString(char* pString);		/*�����ⲿ����*/
int main()
{
	char* pMyString;							/*�����ַ�������*/
	pMyString=GetString("MingRi!");			/*���ú���Ϊ�ַ�����ֵ*/
	ShowString(pMyString);					/*��ʾ�ַ���*/
 return 0;
}
/*////////////////////////////////////////////////////////*/
/*					ExternFun1.c							*/
/*///////////////////////////////////////////////////////*/
extern char* GetString(char* pString)
{
	return pString;							/*�����ַ�*/
}
/*////////////////////////////////////////////////////////*/
/*					ExternFun2.c							*/
/*////////////////////////////////////////////////////////*/
extern void ShowString(char* pString)
{
	printf("%s\n",pString);					/*��ʾ�ַ���*/
}
