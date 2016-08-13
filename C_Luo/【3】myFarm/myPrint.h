/*
	��Ҫ��չʾ�ض����ݣ���ӡ��ͼ�� 
	authur:Luo_0412
	bulid_date:2016-4-17 
*/

#ifndef SHOW_H
#define SHOW_H

#define ARRAY_SIZE 6
#define STRING_LENGTH 80
#define ROW_SIZE 10
#define COLUMN_SIZE 10

/*����ѧ���ṹ*/ 
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

/*�������ṹ��������*/ 
struct node1 {
    unsigned int num;   // ��������� 
    struct node1 *next;
};
struct node2 {
    int num;			//������� 
	int count;			//����������ֵĴ���
    struct node2 *next;
};

/*��������������-1Ϊ������־������node1�ṹ*/
struct node1 *createList1(void);

/*������������������-2Ϊ������־������node1�ṹ*/      
struct node1 *createSortList(void);  

/*��������������^zΪ������ǣ�����node2�ṹ*/
struct node2 *createList2(int numbers[], int n);


/*����ֵ�йص�����*/ 
void show_dataofType();

/*��ӡ�ַ�������*/ 
void print_triangleofCh(char,int);

/*ָ��ָ���ָ��*/
void show_detailofPointer();

/*ָ�븳ֵ��ֵ��ֵ������*/ 
void show_assignment();

/*ͨ��ָ��*/
void show_voidPointer();

/*��const����ָ��*/
void show_const_pointer();

/*ʹһά��������*/
void reverseArray(int array[], int n);

/* ���һά���� */ 
void print_array(int array[], int array_size);

/*����ת�ã�n X n���� rowSize = columnSize*/
void transposeMatrix(int matrix[][COLUMN_SIZE], int rowSize, int columnSize);

/*�������*/ 
void printMatrix(int matrix[][COLUMN_SIZE], int rowSize, int columnSize);

/*չʾ�����ϸ��*/
void show_detailofArray();

/*����˷�*/
void mulMatrix(int **a, int **b, int **c, int cRow, int cCol, int aCol);
void print_mulMatrix(int **array, int arrayRow, int arrayCol); 

/*�����ַ��������س���*/
int readString(char str[], int arraySize);

/*�ַ�������*/ 
int count_length(const char *str);

/*���������ַ���*/ 
char *concatenate(char *str1, const char *str2);

/*ͳ��ƽ������ߵ�ѧ��,����student1�ṹ*/ 
void count_maxAverage();

/*���node1������*/ 
void printList1(struct node1 *head);

/*���node2����������ͳ��*/ 
void printList2(struct node2 *head);

/*ָ������˳�򣬸���student2�ṹ*/
int comp(const void *p, const void *q);

/*��ѧ���ܳɼ����򣬸���student2�ṹ*/
void sort_totalScore();

/*ͳ��ѧ���ɼ�������student3�ṹ*/
void compute_grade();







#endif
