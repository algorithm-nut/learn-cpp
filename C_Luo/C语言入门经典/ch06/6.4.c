#include<stdio.h>
int main()
{
	int index;
	char string[]={'H','e','l','l','o',',','W','o','r','l','d','!'};	/*�����ַ����鲢����ֵ*/
	for(index=0;index<12;++index)			/*ʹ��forѭ������ַ����������*/
	{
		printf("%c",string[index]);
	}
	printf("\n");							/*������з� */
	return 0;
}