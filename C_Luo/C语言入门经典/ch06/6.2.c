#include<stdio.h>
int main()
{
	int index;
	char string[5]={'H','e','l','l','o'};	/*�����ַ����鲢����ֵ*/
	for(index=0;index<5;++index)			/*ʹ��forѭ������ַ����������*/
	{
		printf("%c",string[index]);
	}
	printf("\n");							/*������з� */
	return 0;
}