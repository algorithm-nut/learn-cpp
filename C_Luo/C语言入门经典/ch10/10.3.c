#include<stdio.h>
#include <stdlib.h>
int main()
{
	int* iIntMalloc=(int*)malloc(sizeof(int));		/*����ռ�*/
	*iIntMalloc=100;									/*ʹ�øÿռ䱣������*/
	printf("%d\n",*iIntMalloc);						/*�������*/
	return 0;
}
