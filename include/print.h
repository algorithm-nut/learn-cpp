#ifndef PRINT_H
#define PRINT_H

const int ROW_SIZE = 10;
const int COLUMN_SIZE = 10;

/*չʾָ��ϸ��*/
void show_detailofPointer();

/*չʾָ�븳ֵ��ֵ��ֵ*/
void show_assignment(); 

/*չʾͨ��ָ��*/
void show_voidPointer(); 

/*չʾ����*/
void show_quote(); 

/*���10000���ڵ�����*/
void print_completeNum(); 

/*չʾZeno���*/
void show_Zeno(); 

/*��ӡ�ַ�������*/
void print_triangleofCh(char ch, int height);

/*չʾ�������أ�c++������*/
int maxValue(int num1, int num2); 
double maxValue(double num1, double num2);
double maxValue(double num1, double num2, double num3);

/*չʾ��const����ָ�����,  ��ֹͨ��p�޸�*pֵ*/
void show_constPointer(const int *p);

/*չʾ����ָ����ú���*/ 
int sum(int, int);
int difference(int, int);
int product(int, int);
int divide(int, int);

/*չʾ����ָ��ص�����*/ 
int any_function(int (*pf)(int, int), int, int);

/*չʾ�쳣����*/
void show_errorProcessing();
void show_errorProcessing2();

/*�������һά���飬��^z��^dΪ������־*/
void reverseArray(int array[], int  arraySize);
void printArray(int array[], int  arraySize);

/*����ת��*/
void transposeMatrix(int matrix[][COLUMN_SIZE], int rowSize, int columnSize);
void printMatrix(const int matrix[][COLUMN_SIZE], int rowSize, int columnSize);

/*չʾ�����ϸ��*/
void show_detailofArray();

/*չʾ��̬�ڴ��������*/
void show_dynamicMemory_allocation();

/*����ӷ�*/
void addMatrix(int **a, int **b, int **c, int cRow, int cCol);
void printMatrix(int **array, int arrayRow, int arrayCol);

#endif
