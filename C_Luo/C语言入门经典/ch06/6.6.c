#include<stdio.h>
#include<math.h>
int main()
{
	char data[50]={'0'};				/*定义长度为50的字符数组保存二进制数据的每一位*/
	short count=0;						/*定义count保存二进制数据的位数*/
	short index=0;						/*用作下循环变量*/
	int result=0;						/*保存最后的计算结果*/
	printf("请输入一个二进制数(50位以内)以#结束：\n");
	scanf("%c",&data[0]);				/*读入第一个字符*/
	while(data[index]!='#')				/*若字符不为#则执行循环体*/
	{
		++count;						/*数据长度增加1*/
		++index;						/*下标增加1*/
		scanf("%c",&data[index]);		/*继续读入*/
	}
	for(index=0;index<count;++index)	/*进制转换*/
	{
		result+=(data[index]-48)*((int)pow(2,count-index-1));
	}
	printf("转换成十进制后结果为：%d\n",result);
	return 0;
}