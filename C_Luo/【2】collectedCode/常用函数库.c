/*
*  Authur: Luo_0412(����)
*    Date: 2016-06-08
*    Func: ����ͷ�ļ���ʹ�� 
*/ 

#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

int main() {
	
	/*stdio.h�ṩ�ĺ���========*/
	puts("hello world");
	printf("see you again\n");
	
	/*math.h�ṩ�ĺ���========*/
	printf("%d\n"   ,abs(-100)); 
	printf("%.0f\n" ,pow(2.0,3.0));	//ע��double����
	printf("%.0f\n" ,sqrt(100));    
	printf("%.0f\n" ,fmod(20,3));   
	printf("%.0f\n" ,floor(100.2));
	printf("%.0f\n" ,ceil(100.8));
	
	/*ctype.h�ṩ�ĺ���========*/
	printf("%c\n", toupper('c'));
	printf("%c\n", tolower('D'));
	printf("%d\n", isalpha('c'));	//����2 
	
	/*math.h�ṩ�ĺ���========*/
	 
	
	
	return 0;	
}
