#include<stdio.h>
int main()
{
	int aInt=20;					/*整型变量赋初值为20*/
	char bChar='B';					/*字符型变量赋初值为字符B*/
	float cFloat=3.14f;				/*单精度浮点型变量赋初值为3.14*/
	double dDouble=1/3.0;			/*双精度浮点型变量赋初值为1/3.0*/
	printf("各变量的初值为：\n");	/*打印各变量的初值*/
	printf("aInt=%d\n",aInt);
	printf("bChar=%c\n",bChar);
	printf("cFloat=%f\n",cFloat);
	printf("dDouble=%f\n",dDouble);
	aInt=aInt+20;					/*将整型变量的值增加20*/
	bChar='C';						/*将字符型变量的值改变为字符C*/
	cFloat=cFloat*2;				/*将单精度浮点型变量的值改变为其初值乘2*/
	dDouble=dDouble*3.0;			/*将双精度浮点型变量的值改变为其初值乘3.0*/
	printf("改变后各变量的值为:\n");/*打印改变后各变量的值*/
	printf("aInt=%d\n",aInt);
	printf("bChar=%c\n",bChar);
	printf("cFloat=%f\n",cFloat);
	printf("dDouble=%f\n",dDouble);
	return 0;
}