#include<stdio.h>
int main()
{
	int iIndex;								/*ѭ�����Ʊ���*/
	char cShmily[12]="MingRi KeJi";			/*�����ַ��������ڱ����ַ���*/
	for(iIndex=0;iIndex<12;iIndex++)
	{
		printf("%c",cShmily[iIndex]); 		/*�������ַ������е��ַ�*/
	}
	printf("\n%s\n",cShmily); 				/*ֱ�ӽ��ַ������*/
	return 0;
}
