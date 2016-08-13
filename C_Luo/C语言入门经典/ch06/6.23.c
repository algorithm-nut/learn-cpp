#include<stdio.h>
#define MAX 100
int main()
{
	short N;								/*定义整数N保存要排序整数的个数*/
	int array[MAX];							/*定义array数组保存要排序的整数*/
	short i,j,k,tmp;						/*循环变量及临时变量*/
	printf("请输入要排序的整数的个数：\n");	/*输出提示信息*/
	scanf("%d",&N);							/*读取整数个数*/
	printf("请输入%d个整数:\n",N);			/*提示用户输入N个整数*/
	for(i=0;i<N;++i)						/*依次读取整数保存在array数组中*/
	{
		scanf("%d",&array[i]);
	}
	for(i=0;i<N-1;++i)						/*选择排序算法*/
	{
		k=i;								/*首先令下标等于当前元素的下标*/
		for(j=i+1;j<N;j++)					/*从当前元素的下一个元素开始遍历*/
		{
			if(array[j]<array[k])			/*若这个元素比当前元素小，记录这个元素的下标*/
			{
				k=j;
			}
		}
		if(k!=i)							/*若k发生了改变，即k所记录的是最小元素的下标，进行交换*/
		{
			tmp=array[k];
			array[k]=array[i];
			array[i]=tmp;
		}
	}
	printf("排序后的整数序列为：\n");		/*打印排序后的数组*/
	for(i=0;i<N;++i)
		printf("%d ",array[i]);
	printf("\n");
	return 0;								/*程序结束*/
}