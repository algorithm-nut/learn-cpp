#include "print.h"
#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;


/*չʾָ��ϸ��*/
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

/*չʾָ�븳ֵ��ֵ��ֵ*/
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
    cout << "ֵ��ֵ�Ժ�" << endl; 
    *p1 = *p2;
    cout << "x=" << x << ", *p1=" << *p1 << endl;
    cout << "y=" << y << ", *p2=" << *p2 << endl;
    cout << "ָ�븳ֵ�Ժ�" << endl; 
    *p2 = 126;
    p1 = p2;
    cout << "x=" << x << ", *p1=" << *p1 << endl;
    cout << "y=" << y << ", *p2=" << *p2 << endl;
}

/*չʾͨ��ָ��*/
void show_voidPointer()
{
	int x = 88;
    void *v = &x;
    cout << "����x��ֵ: " << x << endl;
	cout << "ָ�����vָ����ڴ�洢��Ԫ�е�ֵ: "
	        << *reinterpret_cast<int *>(v) << endl;
}

/*չʾ����*/
void show_quote() {
	int x = 88;
    int &r = x;
    cout << "����x��ֵ: " << x << endl;
	cout << "����r��ֵ: " << r << endl;
	cout << "����x�ĵ�ַ: " << &x << endl;
	cout << "����r�ĵ�ַ" << &r << endl;
    ++r;
    cout << "����x��ֵ: " << x << endl;
	cout << "����r��ֵ: " << r << endl;
}

/*���10000���ڵ�����*/
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

/*չʾZeno���,���ճ����˼�����ľ��ȷ�Χ*/
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

/*��ӡ�ַ�������*/
void print_triangleofCh(char ch, int height) {
    for(int i = 1; i <= height; ++i) {
        for(int j = 1; j <= height - i; ++j)
            cout << " ";
        for(int k = 1; k <= 2 * i - 1; ++k)
            cout << ch;
        cout << endl;
    }
}

/*չʾ�������أ�c++������*/
int maxValue(int num1, int num2) {
    return (num1 > num2) ? num1 : num2;
}
double maxValue(double num1, double num2) {
    return (num1 > num2) ? num1 : num2;
}
double maxValue(double num1, double num2, double num3) {
    return max(max(num1, num2), num3);
}

/*չʾ��const����ָ�����*/
void show_constPointer(const int *p) {
	cout << *p << endl;
//    *p = 100;  // ����
}

/*չʾ����ָ����ú���*/ 
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

/*չʾ����ָ��ص�����*/ 
int any_function(int (*pf)(int, int), int x, int y) {
    return pf(x, y);
}

/*չʾ�쳣����*/
void show_errorProcessing() {
	cout << "������������: ";
    int number1, number2;
    cin >> number1 >> number2;
    if(number2 != 0)
        cout << number1 << "/" << number2 << "="
                << (number1 / number2) << endl;
    else
        cerr << "��������Ϊ0!" << endl;
}
void show_errorProcessing2() {
	cout << "������������: ";
    int number1, number2;
    cin >> number1 >> number2;
    try {
        if(number2 == 0)
            throw -1;
        cout << number1 << "/" << number2 << "="
                << (number1 / number2) << endl;
    }
    catch(int e) {
        cerr << "��������Ϊ0!" << endl;
    }
}

/*�������һά���飬��^z��^dΪ������־*/
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


/*����ת��*/
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

/*չʾ�����ϸ��*/
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

/*չʾ��̬�ڴ��������*/
void show_dynamicMemory_allocation() {
	int arraySize;
    cout << "����������Ԫ�ظ���: ";
    cin >> arraySize;
    int *array = new(nothrow) int[arraySize];
	if(array == NULL) {
		cerr << "�ڴ����ʧ��!" << endl;
		exit(EXIT_FAILURE);
	}
    srand(time(NULL));
    for(int i = 0; i < arraySize; ++i)
        array[i] = rand() % 100;
    printArray(array, arraySize);
    delete[] array;
}

/*����ӷ�*/
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
