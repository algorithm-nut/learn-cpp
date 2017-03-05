#ifndef PRINT_H
#define PRINT_H


// �������鶨��
const int ROW_SIZE = 10;
const int COLUMN_SIZE = 10;


void show_detailofPointer();			// չʾָ��ϸ��
void show_assignment();					// չʾָ�븳ֵ��ֵ��ֵ������
void show_voidPointer();				// չʾͨ��ָ��
void show_quote();						// չʾ����
void show_constPointer(const int *p);	// չʾ��const����ָ�����,  ��ֹͨ��p�޸�*pֵ


/*չʾ����ָ����ú���*/ 
int sum(int, int);
int difference(int, int);
int product(int, int);
int divide(int, int);


/*չʾ����ָ��ص�����*/ 
int any_function(int (*pf)(int, int), int, int);


void print_completeNum();		// ���10000���ڵ�����
void show_Zeno();				// չʾZeno���


void print_triangleofCh(char ch, int height); //��ӡ�ַ�������


/*չʾ�������أ�c++������*/
int maxValue(int num1, int num2); 
double maxValue(double num1, double num2);
double maxValue(double num1, double num2, double num3);


/*չʾ�쳣����*/
void show_errorProcessing();
void show_errorProcessing2();


/*�������һά���飬��^z��^dΪ������־*/
void reverseArray(int array[], int  arraySize);
void printArray(int array[], int  arraySize);
void transposeMatrix(int matrix[][COLUMN_SIZE], int rowSize, int columnSize);
void printMatrix(const int matrix[][COLUMN_SIZE], int rowSize, int columnSize); // ����ת��
void show_detailofArray(); // չʾ�����ϸ��
void show_dynamicMemory_allocation(); // չʾ��̬�ڴ��������
void addMatrix(int **a, int **b, int **c, int cRow, int cCol);
void printMatrix(int **array, int arrayRow, int arrayCol); // չʾ��̬�ڴ��������

#endif
