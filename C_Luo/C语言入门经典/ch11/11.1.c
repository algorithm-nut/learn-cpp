#include<stdio.h>
struct Product								/*声明结构*/
{
	char cName[10];							/*产品的名称*/
	char cShape[20];							/*形状*/
	char cColor[10];							/*颜色*/
	int	 iPrice;								/*价格*/
	char cArea[20];							/*产地*/
};
int main()
{
	struct Product product1;					/*定义结构体变量*/
	printf("请输入产品的名称:\n");				/*信息提示*/
	scanf("%s",&product1.cName);				/*输出结构成员*/
	printf("请输入产品的形状:\n");				/*信息提示*/
	scanf("%s",&product1.cShape);			/*输出结构成员*/
	printf("请输入产品的颜色:\n");				/*信息提示*/
	scanf("%s",&product1.cColor);			/*输出结构成员*/
	printf("请输入产品的价格:\n");				/*信息提示*/
	scanf("%d",&product1.iPrice);			/*输出结构成员*/
	printf("请输入产品的产地\n");				/*信息提示*/
	scanf("%s",&product1.cArea);				/*输出结构成员*/
	printf("名称为: %s\n",product1.cName);		/*将成员变量输出*/
	printf("形状为: %s\n",product1.cShape);
	printf("颜色为: %s\n",product1.cColor);
	printf("价格为: %d\n",product1.iPrice);
	printf("产地为: %s\n",product1.cArea);
	return 0;
}
