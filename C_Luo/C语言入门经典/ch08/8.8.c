#include<stdio.h>
main()
{
	int a[3][5],i,j;
	printf("������15����ֵ:\n");
	for(i=0;i<3;i++)								/*���ƶ�ά���������*/
	{
		for(j=0;j<5;j++)							/*���ƶ�ά���������*/
		{
			scanf("%d",a[i]+j); 					/*����ά����Ԫ�ظ���ֵ*/
		}
	}
	printf("�����е�����Ϊ:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<5;j++)
		{
			printf("%5d",*(a[i]+j)); 			/*��������е�Ԫ��*/
		}
		printf("\n");
	}
	return 0;
}
