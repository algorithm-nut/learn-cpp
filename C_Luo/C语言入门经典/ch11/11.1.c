#include<stdio.h>
struct Product								/*�����ṹ*/
{
	char cName[10];							/*��Ʒ������*/
	char cShape[20];							/*��״*/
	char cColor[10];							/*��ɫ*/
	int	 iPrice;								/*�۸�*/
	char cArea[20];							/*����*/
};
int main()
{
	struct Product product1;					/*����ṹ�����*/
	printf("�������Ʒ������:\n");				/*��Ϣ��ʾ*/
	scanf("%s",&product1.cName);				/*����ṹ��Ա*/
	printf("�������Ʒ����״:\n");				/*��Ϣ��ʾ*/
	scanf("%s",&product1.cShape);			/*����ṹ��Ա*/
	printf("�������Ʒ����ɫ:\n");				/*��Ϣ��ʾ*/
	scanf("%s",&product1.cColor);			/*����ṹ��Ա*/
	printf("�������Ʒ�ļ۸�:\n");				/*��Ϣ��ʾ*/
	scanf("%d",&product1.iPrice);			/*����ṹ��Ա*/
	printf("�������Ʒ�Ĳ���\n");				/*��Ϣ��ʾ*/
	scanf("%s",&product1.cArea);				/*����ṹ��Ա*/
	printf("����Ϊ: %s\n",product1.cName);		/*����Ա�������*/
	printf("��״Ϊ: %s\n",product1.cShape);
	printf("��ɫΪ: %s\n",product1.cColor);
	printf("�۸�Ϊ: %d\n",product1.iPrice);
	printf("����Ϊ: %s\n",product1.cArea);
	return 0;
}
