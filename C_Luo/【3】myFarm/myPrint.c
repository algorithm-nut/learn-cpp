#include "myPrint.h"
#include <stdio.h>
#include <limits.h>
#include <float.h>
#include <string.h> 
#include <stdlib.h>

/*类型值有关的数据*/
void show_dataofType(void) 
{
	printf("各数据类型占用的内存字节数：\n"); 
	printf("short             : %u\n"  ,sizeof(short));
    printf("unsigned short    : %u\n"  ,sizeof(unsigned short));
    printf("int               : %u\n"  ,sizeof(int));
    printf("unsigned int      : %u\n"  ,sizeof(unsigned int));
    printf("long              : %u\n"  ,sizeof(long));
    printf("unsigned long     : %u\n"  ,sizeof(unsigned long));
    printf("float             : %u\n"  ,sizeof(float));
    printf("double            : %u\n"  ,sizeof(double));
    printf("char              : %u\n"  ,sizeof(char));
    printf("signed char       : %u\n"  ,sizeof(signed char));
    printf("unsigned char     : %u\n"  ,sizeof(unsigned char));
    printf("\n");
    
    printf("各数据类型取值范围：\n"); 
    printf("(字符占用的位数: %u  float类型的精度: %d  double类型的精度: %d)\n", 
	                         CHAR_BIT, FLT_DIG, DBL_DIG);
    printf("                   最小            最大\n");
    printf("char          :    %-16d%-16d\n"    , CHAR_MIN  ,   CHAR_MAX );
    printf("signed char   :    %-16d%-16d\n"    , SCHAR_MIN ,   SCHAR_MAX);
    printf("unsigned char :    %19d\n"          ,               UCHAR_MAX);
    printf("short         :    %-16hd%-16hd\n"  , SHRT_MIN  ,   SHRT_MAX );
    printf("unsigned short:    %21hu\n"         ,               USHRT_MAX);
    printf("int           :    %-16d-16%d\n"    , INT_MIN   ,   INT_MAX  );
    printf("unsigned int  :    %26u\n"          ,               UINT_MAX );
    printf("long          :    %-16ld%-16ld\n"  , LONG_MIN  ,   LONG_MAX );
    printf("unsigned long :    %26lu\n"         ,               ULONG_MAX);
    printf("float         :    %-16g%-16g\n"    , FLT_MIN   ,   FLT_MAX  );
    printf("double        :    %-16g%-16g\n"    , DBL_MIN   ,   DBL_MAX  );
    printf("两个连续单精度浮点数之间的最小差值: %g\n" ,    FLT_EPSILON);
    printf("两个连续双精度浮点数之间的最小差值: %g\n",     DBL_EPSILON);
}


/*打印字符金字塔*/
void print_triangleofCh(char ch,int height)
{
	int i, j, k;
	for(i = 1; i <= height; ++i) {
        for(j = 1; j <= height - i; ++j)
            printf(" ");
        for(k = 1; k <= 2 * i - 1; ++k)
            printf("%c", ch);
        printf("\n");
    }
    printf("\n");
}

/* 指向指针的指针 */ 
void show_detailofPointer()  
{
	int x = 88;
    int *p = &x;
    int **pp = &p;
    
    printf("x    :%-20d\n", x);
    printf("*&x  :%-20d\n", *&x);
    printf("*p   :%-20d\n", *p);
    printf("**pp :%-20d\n", **pp);
    printf("\n");
    
    printf("&x   :%#p\n", &x);
    printf("P    :%#p\n", p);
    printf("&*p  :%#p\n", &*p);
    printf("*&p  :%#p\n", *&p);
    printf("*pp  :%#p\n", *pp);
    printf("\n");
    
    printf("&p   :%#p\n", &p);
    printf("pp   :%#p\n", pp);
    printf("\n");
    
    printf("&pp  :%#p\n", &pp);
    printf("\n");
}

/* 指针赋值和值赋值的区别 */ 
void show_assignment()
{
	int x, y;
    int *p1, *p2;
    x = -42;
    y = 163;
    p1 = &x;
    p2 = &y;
    printf("x=%d, *p1=%d\n", x, *p1);
    printf("y=%d, *p2=%d\n", y, *p2);
    printf("\n");
	 
    printf("值赋值(*p1=*p2)处理以后\n"); 
    *p1 = *p2;
    printf("x=%d, *p1=%d\n", x, *p1);
    printf("y=%d, *p2=%d\n", y, *p2);
    printf("\n");
    
    printf("指针赋值(*p2=126; p1=p2)处理以后\n");
    *p2 = 126;
    p1 = p2;
    printf("x=%d, *p1=%d\n", x, *p1);
    printf("y=%d, *p2=%d\n", y, *p2);
    printf("\n");
}

/* 通用指针 */
void show_voidPointer()
{
	int x = 88;
	void *v = &x;
	printf("变量x的值: %d\n", x);
	printf("指针变量v指向的内存空间中所存放的值: %d\n", *(int *)v);
	printf("\n");
}

/* 用const保护指针 */ 
void show_const_pointer() 
{
	int x = 88; 
	const int *p = &x;  //防止通过指针p来修改x的值 
//    *p = 100; // 错误 
//    x = 100;
    printf("*p: %d\n" , *p);
    printf("x : %d\n" , x);
    printf("&x: %#p\n", &x);
    printf("p : %#p\n", p);
	printf("\n");  
}

/*使一维数组逆序*/
void reverseArray(int array[], int n) 
{
    int i, temp;
    for(i = 0; i < n / 2; ++i) {
        temp = array[i];
        array[i] = array[n - i - 1];
        array[n - i - 1] = temp;
    }
}

/* 输出一维数组 */
void print_array(int array[], int n) 
{
    int i;
    for(i = 0; i < n; ++i)
        printf("%-4d", array[i]);
    printf("\n");
}

/*矩阵转置，n X n类型 rowSize = columnSize*/ 
void transposeMatrix(int matrix[][COLUMN_SIZE], int rowSize, int columnSize) 
{
    int row, column, temp;
    for(row = 0; row < rowSize; ++row) {
        for(column = 0; column < columnSize; ++column) {
            if(row < column) {
                temp = matrix[row][column];
                matrix[row][column] = matrix[column][row];
                matrix[column][row] = temp;
            }
        }
    }
}

/*输出矩阵*/ 
void printMatrix(int matrix[][COLUMN_SIZE], int rowSize, int columnSize) 
{
    int row, column;
    for(row = 0; row < rowSize; ++row) {
		for(column = 0; column < columnSize; ++column) {
    		printf("%d ", matrix[row][column]);
		}
		printf("\n");
	}
	printf("\n");
}

/*展示数组的细节*/
void show_detailofArray()
{
	#undef ARRAY_SIZE
	#define ARRAY_SIZE 3
	int list[ARRAY_SIZE] = {11, 12, 13};
    int i;
    int *p = list;      // 等价于int *p = &list[0]; 
    
    for(i = 0; i < ARRAY_SIZE; ++i) {
		printf("list+%d   :%#p\n", i, list+i);
		printf("p+%d      :%#p\n", i, p+i);
		printf("*(list+%d):%d\n",  i, *(list+i));
		printf("*(p+%d)   :%d\n",  i, *(p+i));
		printf("list[%d]  :%d\n",  i, list[i]);
		printf("p[%d]     :%d\n",  i, p[i]);
		printf("\n");
    }   
    #undef ARRAY_SIZE
	#define ARRAY_SIZE 6
}


/*矩阵乘法*/
void mulMatrix(int **a, int **b, int **c, int cRow, int cCol, int aCol) 
{
    int i, j, k;
    for(i = 0; i < cRow; ++i) {
        for(j = 0; j < cCol; ++j) {
            c[i][j] = 0;
            for(k = 0; k < aCol; ++k)
                c[i][j] += a[i][k] * b[k][j];
        }
    }
}

void print_mulMatrix(int **array, int arrayRow, int arrayCol) 
{
    int i, j;
    for(i = 0; i < arrayRow; ++i) {
        for(j = 0; j < arrayCol; ++j) {
            printf("%-4d", array[i][j]);
        }
        printf("\n");
    }
}

/*输入字符串，返回长度*/
int readString(char str[], int arraySize) 
{
    int ch, i = 0;
    while((ch = getchar()) != '\n') {
        if(i < arraySize) {
            str[i] = ch;
            ++i;
        }
    }
    str[i] = '\0';
    return i;
}

/*字符串长度*/ 
int count_length(const char *str) 
{
    int i = 0;
    while(str[i] != '\0')
        ++i;
    return i;
}

/*连接两个字符串*/ 
char *concatenate(char *str1, const char *str2) 
{
    char *p = str1;
    while(*p != '\0')
        ++p;
    while(*str2 != '\0') {
        *p = *str2;
        ++p;
        ++str2;
    }
    *p = '\0';
    return str1;
}


/*统计平均分最高的学生，根据student1结构*/ 
void count_maxAverage()
{
    struct student1 studentArray[ARRAY_SIZE];
    struct student1 maxAverage;
    int i, n;
    printf("输入学生人数: ");
    scanf("%d", &n);
    printf("输入学生的姓名和语文、数学、英语成绩:\n");
    for(i = 0; i < n; ++i) {
        printf("学生%d: ", i + 1);
        scanf("%s%lf%lf%lf", studentArray[i].name, &studentArray[i].chinese,
                 &studentArray[i].math, &studentArray[i].english);
        studentArray[i].average = (studentArray[i].chinese + studentArray[i].math +
                                                   studentArray[i].english) / 3;
    }
    maxAverage = studentArray[0];
    for(i = 1; i < n; ++i) {
        if(maxAverage.average < studentArray[i].average)
            maxAverage = studentArray[i];
    }
    printf("平均分最高的学生: %s\n", maxAverage.name);
    printf("平均分: %.2f\n", maxAverage.average);
}

/*输出node1的单向链表*/
void printList1(struct node1 *head) 
{
    struct node1 *p=NULL;
    for(p = head; p != NULL; p = p->next)
        printf("%u ", p->num);
    printf("\n");
}

/*输出node2的链表*/ 
void printList2(struct node2 *head) {
    struct node2 *p;
    for(p = head; p != NULL; p = p->next)
        printf("%d(%d) ", p->num, p->count);
    printf("\n");
}


/*指定排序顺序，根据student2结构*/
int comp(const void *p, const void *q) 
{
    return ((struct student2 *)q)->total - ((struct student2 *)p)->total;
}

/*给学生总成绩排序，根据student2结构*/ 
void sort_totalScore()
{
	struct student2 studentArray[ARRAY_SIZE];
    int i, n;
    printf("输入学生人数: ");
    scanf("%d", &n);
    printf("输入学生的姓名和语文、数学、英语成绩:\n");
    for(i = 0; i < n; ++i) {
        printf("学生%d: ", i + 1);
        scanf("%s%lf%lf%lf", studentArray[i].name, &studentArray[i].score[0],
                 &studentArray[i].score[1], &studentArray[i].score[2]);
        studentArray[i].total = studentArray[i].score[0] + studentArray[i].score[1]
                                            + studentArray[i].score[2];
    }
    qsort(studentArray, n, sizeof(struct student2), comp);
    printf("按总分从高到低排序:\n");
    for(i = 0; i < n; ++i) {
        printf("%s%8.2f%8.2f%8.2f%8.2f\n", studentArray[i].name,
                  studentArray[i].score[0], studentArray[i].score[1],
                  studentArray[i].score[2], studentArray[i].total);
    }
}

/*统计学生成绩，根据student3结构*/
void compute_grade()
{
	struct student3 studentArray[ARRAY_SIZE], *studentPtr;
    int i, n, count = 0;
    printf("输入学生人数: ");
    scanf("%d", &n);
    printf("输入学生的学号、姓名和成绩:\n");
    for(i = 0; i < n; ++i) {
        printf("学生%d: ", i + 1);
        scanf("%d%s%d", &studentArray[i].number, studentArray[i].name,
                 &studentArray[i].score);
        switch (studentArray[i].score / 10) {
            case 0:
            case 1:
            case 2:
            case 3:
            case 4:
            case 5: studentArray[i].grade = 'E';
                        ++count;
                        break;
            case 6: studentArray[i].grade = 'D';
                        break;
            case 7: studentArray[i].grade = 'C';
                        break;
            case 8: studentArray[i].grade = 'B';
                        break;
            case 9:
            case 10: studentArray[i].grade = 'A';
                         break;
        }
    }
    for(studentPtr = studentArray; studentPtr < studentArray + n; ++studentPtr) {
        printf("%d %s %c\n", studentPtr->number, studentPtr->name,
                  studentPtr->grade);
    }
    printf("不及格人数: %d\n", count);
}


/*建立单向链表，以-1为结束标志，根据node1结构*/
struct node1 *createList1(void) 
{
    struct node1 *head = NULL, *tail, *t;
    int num;
    unsigned int size = sizeof(struct node1);
    printf("输入正整数:\n");
    scanf("%d", &num);
    while(num > 0) {
        t = (struct node1 *)malloc(size);
        t->num = num;
        t->next = NULL;
        if(head == NULL)
            head = t;
        else
            tail->next = t;
        tail = t;
        scanf("%d", &num);
    }
    return head;
}


/*建立单向有序链表，以-2为结束标志，根据node1结构*/
struct node1 *createSortList(void) 
{
    struct node1 *head = NULL, *p, *q, *t;
    int num;
    unsigned int size = sizeof(struct node1);
    printf("输入正整数:\n");
    scanf("%d", &num);
    while(num > 0) {
        t = (struct node1 *)malloc(size);    /* 建立新结点 */
        t->num = num;
        p = head;
        while(p != NULL && p->num < num) {
            q = p;
            p = p->next;
        }
        if(p == head)
            head = t;
        else
            q->next = t;
        t->next = p;
        scanf("%d", &num);
    }
	return head;
}

/*建立单向链表，以^z为结束标记，根据node2结构*/
struct node2 *createList2(int numbers[], int n) {
    struct node2 *p, *q, *t, *head = NULL;
    int i, size = sizeof(struct node2);
    for(i = 0; i < n; ++i) {
        if(head == NULL) {  /* 第一个结点 */
            t = (struct node2 *)malloc(size);
            t->num = numbers[i];
            t->count = 1;
            t->next = NULL;
            head = t;
        }
        else {
            p = head;
            while(p != NULL && p->num < numbers[i]) {
                q = p;
                p = p->next;
            }
            if(p != NULL && p->num == numbers[i]) { /* 已在链表中 */
                p->count++;
            }
            else {  /* 建立新结点 */
                t = (struct node2 *)malloc(size);
                t->num = numbers[i];
                t->count = 1;
                if(p == head)
                    head = t;           /* 新结点插入在头结点之前 */
                else
                    q->next = t;
                t->next = p;
            }
        }
    }
	return head;
}


