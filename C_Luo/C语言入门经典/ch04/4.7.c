#include<stdio.h>
int main()
{
	float ax,ay,az,aS;		/*定义第一个长方体的长宽高和体积*/
	float bx,by,bz,bS;		/*定义第二个长方体的长宽高和体积*/
	printf("请输入第一个长方体的长宽和高：");
	scanf("%f%f%f",&ax,&ay,&az);	/*读取第一个长方体的长宽高*/
	printf("请输入第二个长方体的长宽和高：");
	scanf("%f%f%f",&bx,&by,&bz);	/*读取第二个长方体的长宽高*/
	aS=ax*ay*az;					/*计算第一个长方体的体积*/
	bS=bx*by*bz;					/*计算第二个长方体的体积*/
	if(aS>bS)						/*若第一个体积大*/
	{
		printf("第一个长方体的体积比第二个大.\n");
	}
	if(aS<bS)						/*若第二个体积大*/
	{
		printf("第二个长方体的体积比第一个大.\n");
	}
	if(aS==bS)						/*若两个体积一样大*/
	{
		printf("两个长方体的体积一样大.\n");
	}
}