#include<stdio.h>
main()
{
	float result;
	int flag;
	printf("���������\n");
	scanf("%f",&result);
	flag=(int)(result/10);
	switch(flag)
	{
	case 10:
	case 9:
		printf("���㣡\n");
		break;
	case 8:
		printf("���ã�\n");
		break;
	case 7:
		printf("�еȣ�\n");
		break;
	case 6:
		printf("����\n");
		break;
	default:
		printf("������\n");
		break;
	}
}