#include<stdio.h>
void process(char*str)
{
	int i;
	printf("您输入的字符串中的字符及其对应的ASCII码如下：\n");
	for(i=0;str[i]!='\0';++i)		/*遍历字符串*/
	{
		printf("%c : %d\n",str[i],str[i]);/*打印字符及其对应的ASCII码*/
	}
}
int main()
{
	char string[30];
	printf("请输入一个字符串：\n");
	gets(string);						/*读入字符串*/
	process(string);					/*调用函数处理字符串*/
	return 0;
}