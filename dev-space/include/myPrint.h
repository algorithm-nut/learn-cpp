/*
	主要是展示特定数据，打印简单图形 
	authur:Luo_0412
	bulid_date:2016-4-17 
*/

#ifndef SHOW_H
#define SHOW_H

#define ARRAY_SIZE 6
#define STRING_LENGTH 80
#define ROW_SIZE 10
#define COLUMN_SIZE 10

/*声明学生结构*/ 
struct student1 {
    char name[8];
    double chinese, math, english;
    double average;
};
struct student2 {
    char name[8];
    double score[3];
    double total;
};
struct student3 {
    int number;
    char name[8];
    int score;
    char grade;
};

/*声明结点结构，自引用*/ 
struct node1 {
    unsigned int num;   // 存放正整数 
    struct node1 *next;
};
struct node2 {
    int num;			//存放整数 
	int count;			//存放整数出现的次数
    struct node2 *next;
};

/*建立单向链表，以-1为结束标志，根据node1结构*/
struct node1 *createList1(void);

/*建立单向有序链表，以-2为结束标志，根据node1结构*/      
struct node1 *createSortList(void);  

/*建立单向链表，以^z为结束标记，根据node2结构*/
struct node2 *createList2(int numbers[], int n);


/*类型值有关的数据*/ 
void show_dataofType();

/*打印字符金字塔*/ 
void print_triangleofCh(char,int);

/*指向指针的指针*/
void show_detailofPointer();

/*指针赋值和值赋值的区别*/ 
void show_assignment();

/*通用指针*/
void show_voidPointer();

/*用const保护指针*/
void show_const_pointer();

/*使一维数组逆序*/
void reverseArray(int array[], int n);

/* 输出一维数组 */ 
void print_array(int array[], int array_size);

/*矩阵转置，n X n类型 rowSize = columnSize*/
void transposeMatrix(int matrix[][COLUMN_SIZE], int rowSize, int columnSize);

/*输出矩阵*/ 
void printMatrix(int matrix[][COLUMN_SIZE], int rowSize, int columnSize);

/*展示数组的细节*/
void show_detailofArray();

/*矩阵乘法*/
void mulMatrix(int **a, int **b, int **c, int cRow, int cCol, int aCol);
void print_mulMatrix(int **array, int arrayRow, int arrayCol); 

/*输入字符串，返回长度*/
int readString(char str[], int arraySize);

/*字符串长度*/ 
int count_length(const char *str);

/*连接两个字符串*/ 
char *concatenate(char *str1, const char *str2);

/*统计平均分最高的学生,根据student1结构*/ 
void count_maxAverage();

/*输出node1的链表*/ 
void printList1(struct node1 *head);

/*输出node2的链表，用于统计*/ 
void printList2(struct node2 *head);

/*指定排序顺序，根据student2结构*/
int comp(const void *p, const void *q);

/*给学生总成绩排序，根据student2结构*/
void sort_totalScore();

/*统计学生成绩，根据student3结构*/
void compute_grade();







#endif
