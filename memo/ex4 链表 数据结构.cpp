/*
  Authur:Luo_0412
  Build_date:2016-3-22 
  Version:1.0
  Function:��ϰC���ԵĽṹ������ļ��� 
*/

/* head */ 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LINE 100        // һ����������ַ��� 
#define ARRAY_SIZE 50
#define MAX_SIZE 26
#define FILENAME "example.txt"
#define IN_FILENAME "example.txt"
#define OUT_FILENAME "duplication.txt"
#define FILENAME_2 "example.bin"

struct node_2 {
    int num;			/* ������� */
	int count;			/* ����������ֵĴ��� */
    struct node_2 *next;
};


/* main */
int main(void) {  
//    FILE *fp;
//    long l;
//    float f;
//    char s[81];
//    char c;
//    fp = fopen(FILENAME, "w");
//    if(fp == NULL) {
//        printf("���ܴ��ļ�: %s\n", FILENAME);
//        exit(EXIT_FAILURE);
//    }
//    fprintf(fp, "%s %ld %f %c", "a-string", 65000, 3.14159, 'x');
//    fclose(fp);
//    fp = fopen(FILENAME, "r");
//    if(fp == NULL) {
//        printf("���ܴ��ļ�: %s\n", FILENAME);
//        exit(EXIT_FAILURE);
//    }
//    fscanf(fp, "%s%ld%f%c", s, &l, &f, &c);
//    fclose(fp);
//    printf("%s\n", s);
//    printf("%ld\n", l); 
//    printf("%f\n", f);
//    printf("%c\n", c);

//    FILE *inFile, *outFile;
//    int ch;
//    inFile = fopen(IN_FILENAME, "rb");
//    if(inFile == NULL) {
//        printf("���ܴ��ļ�: %s\n", IN_FILENAME);
//        exit(EXIT_FAILURE);
//    }
//    outFile = fopen(OUT_FILENAME, "wb");
//    if(outFile == NULL) {
//        printf("���ܴ��ļ�: %s\n", OUT_FILENAME);
//        exit(EXIT_FAILURE);
//    }
//    while((ch = getc(inFile)) != EOF)
//        putc(ch, outFile);
//	fclose(inFile);
//	fclose(outFile);

//    FILE *inFile, *outFile;
//    char buffer[MAX_LINE];
//    inFile = fopen(IN_FILENAME, "r");
//    if(inFile == NULL) {
//        printf("���ܴ��ļ�: %s\n", IN_FILENAME);
//        exit(EXIT_FAILURE);
//    }
//    outFile = fopen(OUT_FILENAME, "w");
//    if(outFile == NULL) {
//        printf("���ܴ��ļ�: %s\n", OUT_FILENAME);
//        exit(EXIT_FAILURE);
//    }
//    while(fgets(buffer, MAX_LINE, inFile) != NULL)
//        fputs(buffer, outFile);
//  	fclose(inFile);
//	fclose(outFile);
   
    FILE *fp;
    char chunk[MAX_SIZE];
    int i, numRead, numWritten;
    fp = fopen(FILENAME_2, "wb");
    if(fp == NULL) {
        printf("���ܴ��ļ�: %s\n", FILENAME_2);
        exit(EXIT_FAILURE);
    }
    for(i = 0; i < MAX_SIZE; ++i)
        chunk[i] = (char)('z' - i);
    numWritten = fwrite(chunk, sizeof( char ), MAX_SIZE, fp);
    printf("д��%d��Ӣ����ĸ\n", numWritten);
    fclose(fp);
    fp = fopen(FILENAME_2, "rb");
    if(fp == NULL) {
        printf("���ܴ��ļ�: %s\n", FILENAME_2);
        exit(EXIT_FAILURE);
    }
    numRead = fread(chunk, sizeof(char), MAX_SIZE, fp);
    printf("����%d��Ӣ����ĸ\n", numRead);
    printf("%d��Ӣ����ĸ: %.26s\n", numRead, chunk);
 	fclose(fp);

	  
	return 0;
} 

