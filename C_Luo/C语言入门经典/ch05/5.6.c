#include<stdio.h>
int main()
{
	int ia, ib, ic,imin;					/*�����ĸ����ͱ���*/
	printf("Please input ia,ib,ic;\n");		/*��ʾ��Ϣ*/
	scanf("%d,%d,%d",&ia,&ib,&ic);			/*����������ֵ*/
	if(ia<ib)								/*���iaС��ibΪ��*/
	{
		imin=ia;								/*��ia����ֵ����imin*/
	}
	else										/*���iaС��ibΪ��*/
	{
		imin=ib;								/*��ib����ֵ����imin*/
	}
	if(ic<imin)								/*���ic��ֵС��imin��ֵΪ��*/
	{
		imin=ic;								/*��ic��ֵ����imin*/
		printf("The result is %d\n",imin);	/*���imin��ֵ*/
	}
	else										/*���ic��ֵС��imin��ֵΪ��*/
	{
		printf("The result is %d\n",imin);	/*���imin��ֵ*/
	}
	return 0;								/*�������*/
}
