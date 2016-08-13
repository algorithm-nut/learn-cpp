#include<stdio.h>
main()
{
	char str1[50]={0};
	char str2[50]={0};
	int index=0;
	printf("ÇëÊäÈë×Ö·û´®1£º\n");
	gets(str1);
	while(str1[index]!='\0')
	{
		str2[index]=str1[index];
		++index;
	}
	printf("×Ö·û´®2£º\n");
	puts(str2);
}