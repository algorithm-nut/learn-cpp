#include<stdio.h>
int main()
{
	float length,width;
	printf("输入长方形的长和宽\n");
	scanf("%f%f",&length,&width);
	printf("长方形的面积是：%10.3f\n",length*width);
	return 0;
}