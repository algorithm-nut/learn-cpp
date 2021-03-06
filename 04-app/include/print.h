#ifndef PRINT_H
#define PRINT_H


// 定义数组定长
const int ROW_SIZE = 10;
const int COLUMN_SIZE = 10;


void show_detailofPointer();			// 展示指针细节
void show_assignment();					// 展示指针赋值与值赋值的区别
void show_voidPointer();				// 展示通用指针
void show_quote();						// 展示引用
void show_constPointer(const int *p);	// 展示用const保护指针参数,  防止通过p修改*p值


/*展示函数指针调用函数*/ 
int sum(int, int);
int difference(int, int);
int product(int, int);
int divide(int, int);


/*展示函数指针回调函数*/ 
int any_function(int (*pf)(int, int), int, int);


void print_completeNum();		// 输出10000以内的完数
void show_Zeno();				// 展示Zeno悖论


void print_triangleofCh(char ch, int height); //打印字符金字塔


/*展示函数重载，c++新内容*/
int maxValue(int num1, int num2); 
double maxValue(double num1, double num2);
double maxValue(double num1, double num2, double num3);


/*展示异常处理*/
void show_errorProcessing();
void show_errorProcessing2();


/*逆序输出一维数组，以^z或^d为结束标志*/
void reverseArray(int array[], int  arraySize);
void printArray(int array[], int  arraySize);
void transposeMatrix(int matrix[][COLUMN_SIZE], int rowSize, int columnSize);
void printMatrix(const int matrix[][COLUMN_SIZE], int rowSize, int columnSize); // 矩阵转置
void show_detailofArray(); // 展示数组的细节
void show_dynamicMemory_allocation(); // 展示动态内存分配数组
void addMatrix(int **a, int **b, int **c, int cRow, int cCol);
void printMatrix(int **array, int arrayRow, int arrayCol); // 展示动态内存分配数组

#endif
