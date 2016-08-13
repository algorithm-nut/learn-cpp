#include "print.h"
#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;


/*展示指针细节*/
void show_detailofPointer()
{
	int x = 88;
    int *p = &x;
    int **pp = &p;
    cout << "x    : " << x    << endl;
    cout << "*&x  : " << *&x  << endl;
    cout << "*p   : " << *p   << endl;
    cout << "**pp : " << **pp << endl;
	cout << "&x   : " << &x   << endl;
    cout << "p    : " << p    << endl;
    cout << "*pp  : " << *pp  << endl;
    cout << "&p   : " << &p   << endl;
    cout << "pp   : " << pp   << endl;  
} 

/*展示指针赋值与值赋值*/
void show_assignment()
{
	int x, y;
    int *p1, *p2;
    x = -42;
    y = 163;
    p1 = &x;
    p2 = &y;
    cout << "x=" << x << ", *p1=" << *p1 << endl;
    cout << "y=" << y << ", *p2=" << *p2 << endl;
    cout << endl;
    cout << "值赋值以后" << endl; 
    *p1 = *p2;
    cout << "x=" << x << ", *p1=" << *p1 << endl;
    cout << "y=" << y << ", *p2=" << *p2 << endl;
    cout << "指针赋值以后" << endl; 
    *p2 = 126;
    p1 = p2;
    cout << "x=" << x << ", *p1=" << *p1 << endl;
    cout << "y=" << y << ", *p2=" << *p2 << endl;
}

/*展示通用指针*/
void show_voidPointer()
{
	int x = 88;
    void *v = &x;
    cout << "变量x的值: " << x << endl;
	cout << "指针变量v指向的内存存储单元中的值: "
	        << *reinterpret_cast<int *>(v) << endl;
}

/*展示引用*/
void show_quote() {
	int x = 88;
    int &r = x;
    cout << "变量x的值: " << x << endl;
	cout << "引用r的值: " << r << endl;
	cout << "变量x的地址: " << &x << endl;
	cout << "引用r的地址" << &r << endl;
    ++r;
    cout << "变量x的值: " << x << endl;
	cout << "引用r的值: " << r << endl;
}

/*输出10000以内的完数*/
void print_completeNum()
{
	int sum;
    for(int i = 2; i <= 10000; ++i) {
        sum = 1;
        for(int j = 2; j <= i / 2; ++j)
            if(i % j == 0)
                sum += j;
        if(sum == i)
            cout << i << endl;
    }
}

/*展示Zeno悖论,最终超出了计算机的精度范围*/
void show_Zeno() {
	double sum, item;
    sum = 0;
    item = 0.5;
    while(sum != sum + item) {
        sum += item;
        item /= 2;
    }
    cout << sum << endl;
}

/*打印字符金字塔*/
void print_triangleofCh(char ch, int height) {
    for(int i = 1; i <= height; ++i) {
        for(int j = 1; j <= height - i; ++j)
            cout << " ";
        for(int k = 1; k <= 2 * i - 1; ++k)
            cout << ch;
        cout << endl;
    }
}

/*展示函数重载，c++新内容*/
int maxValue(int num1, int num2) {
    return (num1 > num2) ? num1 : num2;
}
double maxValue(double num1, double num2) {
    return (num1 > num2) ? num1 : num2;
}
double maxValue(double num1, double num2, double num3) {
    return max(max(num1, num2), num3);
}

/*展示用const保护指针参数*/
void show_constPointer(const int *p) {
	cout << *p << endl;
//    *p = 100;  // 错误
}

/*展示函数指针调用函数*/ 
int sum(int x, int y) {
    return x + y;
}
int difference(int x, int y) {
    return x - y;
}
int product(int x, int y) {
    return x * y;
}
int divide(int number1, int number2) {
    if(number2 == 0)
        throw -1;
    return number1 / number2;
}

/*展示函数指针回调函数*/ 
int any_function(int (*pf)(int, int), int x, int y) {
    return pf(x, y);
}

/*展示异常处理*/
void show_errorProcessing() {
	cout << "输入两个整数: ";
    int number1, number2;
    cin >> number1 >> number2;
    if(number2 != 0)
        cout << number1 << "/" << number2 << "="
                << (number1 / number2) << endl;
    else
        cerr << "除数不能为0!" << endl;
}
void show_errorProcessing2() {
	cout << "输入两个整数: ";
    int number1, number2;
    cin >> number1 >> number2;
    try {
        if(number2 == 0)
            throw -1;
        cout << number1 << "/" << number2 << "="
                << (number1 / number2) << endl;
    }
    catch(int e) {
        cerr << "除数不能为0!" << endl;
    }
}

/*逆序输出一维数组，以^z或^d为结束标志*/
void reverseArray(int array[], int  arraySize) {
    int temp;
    for(int i = 0; i < arraySize / 2; ++i) {
        temp = array[i];
        array[i] = array[arraySize - i - 1];
        array[arraySize - i - 1] = temp;
    }
}
void printArray(int array[], int  arraySize) {
    for(int i = 0; i < arraySize; ++i)
        cout << array[i] << " ";
    cout << endl;
}


/*矩阵转置*/
void transposeMatrix(int matrix[][COLUMN_SIZE], int rowSize, int columnSize) {
    int temp;
    for(int row = 0; row < rowSize; ++row) {
        for(int column = 0; column < columnSize; ++column) {
            if(row < column) {
                temp = matrix[row][column];
                matrix[row][column] = matrix[column][row];
                matrix[column][row] = temp;
            }
        }
    }
}
void printMatrix(const int matrix[][COLUMN_SIZE], int rowSize, int columnSize) {
    for(int row = 0; row < rowSize; ++row) {
		for(int column = 0; column < columnSize; ++column) {
    		cout << matrix[row][column] << " ";
		}
		cout << endl;
	}
}

/*展示数组的细节*/
void show_detailofArray()
{
	const int ARRAY_SIZE = 6;
    int list[ARRAY_SIZE] = {11, 12, 13, 14, 15, 16};
    int *p = list;
    for(int i = 0; i < ARRAY_SIZE; ++i) {
        cout << "(list + i)  : " << (list + i)   << endl;
        cout << "(p + i)     : " << (p + i)   	 << endl;
        cout << "p[i]        : " << p[i]   	     << endl;
		cout << "list[i]     : " << list[i]   	 << endl;
		cout << "*(list + i) : " << *(list + i)  << endl;
		cout << "*(p + i)    : " << *(p + i)     << endl;
		cout << endl;
    }

}

/*展示动态内存分配数组*/
void show_dynamicMemory_allocation() {
	int arraySize;
    cout << "请输入数组元素个数: ";
    cin >> arraySize;
    int *array = new(nothrow) int[arraySize];
	if(array == NULL) {
		cerr << "内存分配失败!" << endl;
		exit(EXIT_FAILURE);
	}
    srand(time(NULL));
    for(int i = 0; i < arraySize; ++i)
        array[i] = rand() % 100;
    printArray(array, arraySize);
    delete[] array;
}

/*矩阵加法*/
void addMatrix(int **a, int **b, int **c, int cRow, int cCol) {
    for(int i = 0; i < cRow; ++i) {
        for(int j = 0; j < cCol; ++j) {
            c[i][j] = a[i][j] + b[i][j];
        }
    }
}
void printMatrix(int **array, int arrayRow, int arrayCol) {
    for(int i = 0; i < arrayRow; ++i) {
        for(int j = 0; j < arrayCol; ++j) {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }
}
