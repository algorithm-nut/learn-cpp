#include<stdio.h>
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
    printf("ֱ���������:%d\n",a);
    printf("ʹ��ָ���������:%d\n",*aInt);/*ʹ��ָ���������a*/
    printf("ֱ������ַ�:%c\n",b);
    printf("ʹ��ָ������ַ�:%c\n",*ch);	/*ʹ��ָ������ַ�b*/
    return 0;
}
