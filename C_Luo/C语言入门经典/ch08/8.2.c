#include<stdio.h>
#include<ctype.h>
int main()
{
    int a;
    char b;
    int *aInt;				/*����һ������ָ�����*/
    char *ch;				/*����һ���ַ�ָ�����*/
    printf("����һ��������һ���ַ�:\n");
    scanf("%d,%c",&a,&b);
    aInt=&a;				/*ʹ����ָ�����ָ������a*/
    ch=&b;					/*ʹ�ַ�ָ�����ָ���ַ�b*/
    *aInt=*aInt+24;			/*ʹ��ָ��ı�������ֵ*/
    *ch=tolower(*ch);		/*ʹ��ָ��ı��ַ���ֵ*/
    printf("�ı�������:%d\n",*aInt);/*ʹ��ָ���������a*/
    printf("�ı����ַ�:%c\n",*ch);	/*ʹ��ָ������ַ�b*/
    return 0;
}
