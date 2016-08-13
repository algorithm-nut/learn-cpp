#include<stdio.h>
int main()
{
	char cChar;									/*字符型变量*/
	short int iShort;							/*短整型变量*/
	int iInt;									/*整型变量*/
	float fFloat=70000;							/*单精度浮点型变量*/
	cChar=(char)fFloat;							/*强制转换赋值*/
	iShort=(short)fFloat;
	iInt=(int)fFloat;
	printf("字符型变量的值为: %c\n",cChar);				/*输出字符变量值*/
	printf("短整型变量的值为: %ld\n",iShort);			/*输出短整型变量值*/
	printf("整型变量的值为: %d\n",iInt);				/*输出整型变量值*/
	printf("单精度浮点型变量的值为: %f\n",fFloat);		/*输出单精度浮点型变量值*/
	return 0;											/*程序结束*/
}
