#include<stdio.h>
#include<math.h>
int main()
{
	char data[50]={'0'};				/*���峤��Ϊ50���ַ����鱣����������ݵ�ÿһλ*/
	short count=0;						/*����count������������ݵ�λ��*/
	short index=0;						/*������ѭ������*/
	int result=0;						/*�������ļ�����*/
	printf("������һ����������(50λ����)��#������\n");
	scanf("%c",&data[0]);				/*�����һ���ַ�*/
	while(data[index]!='#')				/*���ַ���Ϊ#��ִ��ѭ����*/
	{
		++count;						/*���ݳ�������1*/
		++index;						/*�±�����1*/
		scanf("%c",&data[index]);		/*��������*/
	}
	for(index=0;index<count;++index)	/*����ת��*/
	{
		result+=(data[index]-48)*((int)pow(2,count-index-1));
	}
	printf("ת����ʮ���ƺ���Ϊ��%d\n",result);
	return 0;
}