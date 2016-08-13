#include<stdio.h>
int main()
{
	int index;
	int iShmily[6]={1,2,3};					/*对数组中部分元素赋初值*/
	for(index=0;index<6;index++)				/*输出数组中的所有元素*/
	{
		printf("%d\n",iShmily[index]);
	}
	return 0;
}
