#include <stdio.h>
#include<string.h>
int main()
{
	int result = 1;
	int i;
	int count = 0;
	char C1[128] = {'\0'};						/*����һ�������ַ�����*/
	char cryptograph[128] = {'\0'};				/*����һ�������ַ�����*/
	while (1)
	{
		if (result == 1)							/*����Ǽ�������*/
		{
			printf("������Ҫ���ܵ����ģ�\n");		/*����ַ���*/
			scanf("%s", &C1);					/*��ȡ���������*/
			count = strlen(C1);
			for(i=0; i<count; i++)				/*���������ַ���*/
			{
				cryptograph[i] = C1[i] + i + 5;	/*���ü����ַ�*/
			}
			cryptograph[i] = '\0';				/*�����ַ����������*/
			/*���������Ϣ*/
			printf("���ܺ�������ǣ�%s\n",cryptograph);
		}
		else if(result == 2)						/*����ǽ����ַ���*/
		{
			count = strlen(C1);
			for(i=0; i<count; i++)				/*���������ַ���*/
			{
				C1[i] = cryptograph[i] - i - 5;	/*���ý����ַ�*/
			}
			C1[i] = '\0';						/*�����ַ����������*/
			/*���������Ϣ*/
			printf("���ܺ�������ǣ�%s\n",C1);
		}
		else if(result == 3)						/*������˳�ϵͳ*/
		{
			break;								/*����ѭ��*/
		}
		else
		{
			printf("��������ȷ�������\n");			/*����ַ���*/
		}
		/*����ַ���*/
		printf("����1�����µ����ģ�����2�Ըռ��ܵ����Ľ��н��ܣ�����3�˳�ϵͳ��\n");
		printf("�������������\n");					/*����ַ���*/
		scanf("%d", &result);					/*��ȡ����������ַ�*/
	}
	return 0;									/*�������*/
}
