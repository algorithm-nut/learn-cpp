#include<stdio.h>
int main()
{
	int ia,ib,ic,iSum;						/*����������ʹ�ö��������*/
	ia=10;									/*Ϊ������ֵ*/
	ib=43;
	ic=26;
	iSum=0;
	iSum=ia++,--ib,ic+4;						/*���㶺�ű��ʽ*/
	printf("the result is :%d\n",iSum);		/*����������ʾ*/
	iSum=(ia++,--ib,ic+4);					/*���㶺�ű��ʽ*/
	printf("the result is :%d\n",iSum);		/*����������ʾ*/
	return 0;								/*�������*/
}
