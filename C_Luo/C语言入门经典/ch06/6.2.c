#include<stdio.h>
int main()
{
	int index;
	char string[5]={'H','e','l','l','o'};	/*定义字符数组并赋初值*/
	for(index=0;index<5;++index)			/*使用for循环输出字符数组的内容*/
	{
		printf("%c",string[index]);
	}
	printf("\n");							/*输出换行符 */
	return 0;
}