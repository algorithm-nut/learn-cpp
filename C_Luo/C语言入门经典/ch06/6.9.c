#include<stdio.h>
int main()
{
	char cShmily[6]={'M','i','n','g','R','i'};	/*初始化字符数组*/
	int i;										/*循环控制变量*/
	for(i=0;i<6;i++)								/*进行循环*/
	{
		printf("%c",cShmily[i]);					/*输出字符数组元素*/
	}
	printf("\n");								/*输出换行*/
	return 0;
}
