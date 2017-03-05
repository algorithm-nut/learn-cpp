#include "myPrint.h"
#include <stdio.h>
#include <limits.h>
#include <float.h>
#include <string.h> 
#include <stdlib.h>

/*����ֵ�йص�����*/
void show_dataofType(void) 
{
	printf("����������ռ�õ��ڴ��ֽ�����\n"); 
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
    
    printf("����������ȡֵ��Χ��\n"); 
    printf("(�ַ�ռ�õ�λ��: %u  float���͵ľ���: %d  double���͵ľ���: %d)\n", 
	                         CHAR_BIT, FLT_DIG, DBL_DIG);
    printf("                   ��С            ���\n");
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
    printf("�������������ȸ�����֮�����С��ֵ: %g\n" ,    FLT_EPSILON);
    printf("��������˫���ȸ�����֮�����С��ֵ: %g\n",     DBL_EPSILON);
}


/*��ӡ�ַ�������*/
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

/* ָ��ָ���ָ�� */ 
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

/* ָ�븳ֵ��ֵ��ֵ������ */ 
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
	 
    printf("ֵ��ֵ(*p1=*p2)�����Ժ�\n"); 
    *p1 = *p2;
    printf("x=%d, *p1=%d\n", x, *p1);
    printf("y=%d, *p2=%d\n", y, *p2);
    printf("\n");
    
    printf("ָ�븳ֵ(*p2=126; p1=p2)�����Ժ�\n");
    *p2 = 126;
    p1 = p2;
    printf("x=%d, *p1=%d\n", x, *p1);
    printf("y=%d, *p2=%d\n", y, *p2);
    printf("\n");
}

/* ͨ��ָ�� */
void show_voidPointer()
{
	int x = 88;
	void *v = &x;
	printf("����x��ֵ: %d\n", x);
	printf("ָ�����vָ����ڴ�ռ�������ŵ�ֵ: %d\n", *(int *)v);
	printf("\n");
}

/* ��const����ָ�� */ 
void show_const_pointer() 
{
	int x = 88; 
	const int *p = &x;  //��ֹͨ��ָ��p���޸�x��ֵ 
//    *p = 100; // ���� 
//    x = 100;
    printf("*p: %d\n" , *p);
    printf("x : %d\n" , x);
    printf("&x: %#p\n", &x);
    printf("p : %#p\n", p);
	printf("\n");  
}

/*ʹһά��������*/
void reverseArray(int array[], int n) 
{
    int i, temp;
    for(i = 0; i < n / 2; ++i) {
        temp = array[i];
        array[i] = array[n - i - 1];
        array[n - i - 1] = temp;
    }
}

/* ���һά���� */
void print_array(int array[], int n) 
{
    int i;
    for(i = 0; i < n; ++i)
        printf("%-4d", array[i]);
    printf("\n");
}

/*����ת�ã�n X n���� rowSize = columnSize*/ 
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

/*�������*/ 
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

/*չʾ�����ϸ��*/
void show_detailofArray()
{
	#undef ARRAY_SIZE
	#define ARRAY_SIZE 3
	int list[ARRAY_SIZE] = {11, 12, 13};
    int i;
    int *p = list;      // �ȼ���int *p = &list[0]; 
    
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


/*����˷�*/
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

/*�����ַ��������س���*/
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

/*�ַ�������*/ 
int count_length(const char *str) 
{
    int i = 0;
    while(str[i] != '\0')
        ++i;
    return i;
}

/*���������ַ���*/ 
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


/*ͳ��ƽ������ߵ�ѧ��������student1�ṹ*/ 
void count_maxAverage()
{
    struct student1 studentArray[ARRAY_SIZE];
    struct student1 maxAverage;
    int i, n;
    printf("����ѧ������: ");
    scanf("%d", &n);
    printf("����ѧ�������������ġ���ѧ��Ӣ��ɼ�:\n");
    for(i = 0; i < n; ++i) {
        printf("ѧ��%d: ", i + 1);
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
    printf("ƽ������ߵ�ѧ��: %s\n", maxAverage.name);
    printf("ƽ����: %.2f\n", maxAverage.average);
}

/*���node1�ĵ�������*/
void printList1(struct node1 *head) 
{
    struct node1 *p=NULL;
    for(p = head; p != NULL; p = p->next)
        printf("%u ", p->num);
    printf("\n");
}

/*���node2������*/ 
void printList2(struct node2 *head) {
    struct node2 *p;
    for(p = head; p != NULL; p = p->next)
        printf("%d(%d) ", p->num, p->count);
    printf("\n");
}


/*ָ������˳�򣬸���student2�ṹ*/
int comp(const void *p, const void *q) 
{
    return ((struct student2 *)q)->total - ((struct student2 *)p)->total;
}

/*��ѧ���ܳɼ����򣬸���student2�ṹ*/ 
void sort_totalScore()
{
	struct student2 studentArray[ARRAY_SIZE];
    int i, n;
    printf("����ѧ������: ");
    scanf("%d", &n);
    printf("����ѧ�������������ġ���ѧ��Ӣ��ɼ�:\n");
    for(i = 0; i < n; ++i) {
        printf("ѧ��%d: ", i + 1);
        scanf("%s%lf%lf%lf", studentArray[i].name, &studentArray[i].score[0],
                 &studentArray[i].score[1], &studentArray[i].score[2]);
        studentArray[i].total = studentArray[i].score[0] + studentArray[i].score[1]
                                            + studentArray[i].score[2];
    }
    qsort(studentArray, n, sizeof(struct student2), comp);
    printf("���ִܷӸߵ�������:\n");
    for(i = 0; i < n; ++i) {
        printf("%s%8.2f%8.2f%8.2f%8.2f\n", studentArray[i].name,
                  studentArray[i].score[0], studentArray[i].score[1],
                  studentArray[i].score[2], studentArray[i].total);
    }
}

/*ͳ��ѧ���ɼ�������student3�ṹ*/
void compute_grade()
{
	struct student3 studentArray[ARRAY_SIZE], *studentPtr;
    int i, n, count = 0;
    printf("����ѧ������: ");
    scanf("%d", &n);
    printf("����ѧ����ѧ�š������ͳɼ�:\n");
    for(i = 0; i < n; ++i) {
        printf("ѧ��%d: ", i + 1);
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
    printf("����������: %d\n", count);
}


/*��������������-1Ϊ������־������node1�ṹ*/
struct node1 *createList1(void) 
{
    struct node1 *head = NULL, *tail, *t;
    int num;
    unsigned int size = sizeof(struct node1);
    printf("����������:\n");
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


/*������������������-2Ϊ������־������node1�ṹ*/
struct node1 *createSortList(void) 
{
    struct node1 *head = NULL, *p, *q, *t;
    int num;
    unsigned int size = sizeof(struct node1);
    printf("����������:\n");
    scanf("%d", &num);
    while(num > 0) {
        t = (struct node1 *)malloc(size);    /* �����½�� */
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

/*��������������^zΪ������ǣ�����node2�ṹ*/
struct node2 *createList2(int numbers[], int n) {
    struct node2 *p, *q, *t, *head = NULL;
    int i, size = sizeof(struct node2);
    for(i = 0; i < n; ++i) {
        if(head == NULL) {  /* ��һ����� */
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
            if(p != NULL && p->num == numbers[i]) { /* ���������� */
                p->count++;
            }
            else {  /* �����½�� */
                t = (struct node2 *)malloc(size);
                t->num = numbers[i];
                t->count = 1;
                if(p == head)
                    head = t;           /* �½�������ͷ���֮ǰ */
                else
                    q->next = t;
                t->next = p;
            }
        }
    }
	return head;
}


