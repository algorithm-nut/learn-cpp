#include<stdio.h>
#include<string.h>
main()
{
	char str[100]={0};
	int index,len,i;
	int flag=1;					/*标志位，有交换动作时为1，无交换动作时为0*/
	printf("请输入字符串:\n");
	gets(str);
	len=strlen(str);			/*获取字符串长度*/
	index=len-1;
	while((index>0)&&flag)
	{
		flag=0;					/*先将标志位置0*/
		for(i=0;i<index;++i)
		{
			if(str[i]>str[i+1])	/*若有交换动作产生*/
			{
				int tmp=str[i];
				str[i]=str[i+1];
				str[i+1]=tmp;
				flag=1;			/*标志位置1*/
			}
		}
	}
	printf("按照ASCII表重新排列为：\n");
	puts(str);
}