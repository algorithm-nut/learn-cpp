#include<stdio.h>
main()
{
	float result;
	int flag;
	printf("请输入分数\n");
	scanf("%f",&result);
	flag=(int)(result/10);
	switch(flag)
	{
	case 10:
	case 9:
		printf("优秀！\n");
		break;
	case 8:
		printf("良好！\n");
		break;
	case 7:
		printf("中等！\n");
		break;
	case 6:
		printf("及格！\n");
		break;
	default:
		printf("不及格！\n");
		break;
	}
}