#include<stdio.h>
int main()
{
	char s1[18],s2[18];							/*定义数组*/
	printf("请输入字符串：\n");						/*输出提示信息*/
	scanf("%s%s",&s1,&s2);						/*要求输入字符串*/
	printf("%s %s\n",s1,s2);						/*输出字符串*/
	return 0;
}
