#include<stdio.h>								/*����ͷ�ļ�*/
Shmily_a()										/*�����޲κ���Shmily_a*/
{
	int i;										/*�������ͱ���i*/
	for(i=1;i<=20;i++)   	     					/*forѭ�����*/
	{
		printf("*");								/*�����*����*/
	}
	printf("\n");								/*����*/
}
Shmily_b(char s[])								/*�����вκ���Shmily_b*/
{
	printf("\t");		 		/*���ת���ַ�*/
	printf("%s\n",s);							/*����ַ���������*/
}
void main()										/*������main*/
{
	Shmily_a();									/*���ú���Shmily_a*/
	Shmily_b("Hello");							/*���ú���Shmily_b��													�������ĺ�����			/*���Hello�ַ���*/
	Shmily_a();              						/*���ú���Shmily_a*/
	Shmily_a();									/*���ú���Shmily_a*/
	Shmily_b("Ming Ri");							/*���ú���Shmily_b��																		/*���Ming Ri�ַ���*/
		Shmily_a();								/*���ú���Shmily_a*/
}
