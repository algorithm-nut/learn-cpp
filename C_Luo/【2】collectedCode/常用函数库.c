/*
*  Authur: Luo_0412(骆金参)
*    Date: 2016-06-08
*    Func: 常用头文件的使用 
*/ 

#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

int main() {
	
	/*stdio.h提供的函数========*/
	puts("hello world");
	printf("see you again\n");
	
	/*math.h提供的函数========*/
	printf("%d\n"   ,abs(-100)); 
	printf("%.0f\n" ,pow(2.0,3.0));	//注意double类型
	printf("%.0f\n" ,sqrt(100));    
	printf("%.0f\n" ,fmod(20,3));   
	printf("%.0f\n" ,floor(100.2));
	printf("%.0f\n" ,ceil(100.8));
	
	/*ctype.h提供的函数========*/
	printf("%c\n", toupper('c'));
	printf("%c\n", tolower('D'));
	printf("%d\n", isalpha('c'));	//返回2 
	
	/*math.h提供的函数========*/
	 
	
	
	return 0;	
}
