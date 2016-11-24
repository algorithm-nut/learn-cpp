#include "compute.h"
#include <cmath>
#include <iostream>
#include <ctime>
#include <cstdlib>
#include <stdexcept>  //异常类处理需要加的 

using namespace std;

const double PI = 3.14159;
const double EPSILON = 1e-6;
const int ARRAY_SIZE = 10;

/*声明对象，计算圆面积*/
int Circle::numberOfObjects = 0;            // 静态变量初始化
Circle::Circle(double newRadius) {
    radius = newRadius;
//    cout << "创建半径" << radius << "的圆对象" << endl;
    ++numberOfObjects;
}
//Circle::Circle(double newRadius):radius(newRadius) {
//    cout << "创建半径" << radius << "的圆对象" << endl;
//}    //使用初始化列表 
Circle::~Circle() {
//    cout << "销毁半径" << radius << "的圆对象" << endl;
    --numberOfObjects;
}
void Circle::setRadius(double newRadius) {
    radius = newRadius;
}
double Circle::getRadius() const {
    return radius;
}
double Circle::computeArea() const {
    return PI * radius * radius;
}
int Circle::getNumberOfObjects() {
    return numberOfObjects;
}


/*圆柱体 演示 单继承*/
Cyclinder::Cyclinder(double newRadius, double newHeight):Circle(newRadius) {
    height = newHeight;
}
void Cyclinder::setHeight(double newHeight) {
    height = newHeight;
}
double Cyclinder::getHeight() const {
    return height;
}
double Cyclinder::computeVolume() const {
    return computeArea() * height;
}


/*计算圆面积*/ 
double computeArea_circle(double r) { 
    const double PI = 3.14159;
    double area = 0;
    if(r > 0)
    	area = PI * r * r;
    return area;
}

/*计算三角形面积*/
double computeArea_triangle(double a,double b,double c) 
{
	if(a + b > c && a + c > b && b + c > a) {
        double p = (a + b + c) * 0.5;
        double area = sqrt(p * (p - a) * (p - b) * (p - c));
        return area;
    }
    else
        return 0;
}

/*判断是不是闰年*/
bool judge_leapYear(int year) {
	bool isLeapYear = (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
	return isLeapYear;
}

/*计算某年的某月有几天*/
int dayofYM1(int year,int month)
{
    int day = 0;
	switch(month) {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            day = 31;
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            day = 30;
            break;
        case 2:
            if((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
                day = 29;
            else
                day = 28;
            break;
        default:
            day = 0;
            break;
    }
    
    return day; 
}

/*计算若干个数的和，以^z或^d为结束标记*/
int addNum() {
    int value, total = 0;
    while(cin >> value)
        total += value;
    return total;
}


/*计算某个非负整数的位数*/
int digitofNum(int value) 
{
	int count; 
    do {
        value /= 10;
        ++count;
    } while(value > 0);
    return count;
}

/*计算阶乘*/
double factorial(int n) {
	double mul = 1;
    for(int i = 1; i <= n; ++i)
        mul *= i;
    return mul;
}
double factorial2(int n) {
    if(n == 0)
        return 1;
    else
        return n * factorial2(n - 1);
}

/*计算组合数*/
int combinations(int k, int n) {
    return factorial(n) / (factorial(k) * factorial(n - k));
}

/*计算阶乘的和*/
double sumofFactorial(int n)
{
	double mul, sum;
    sum = 0;
    for(int i = 1; i <= n; ++i) {
        mul = 1;
        for(int j = 1; j <= i; ++j)
            mul *= j;
        sum += mul;
    }
    return sum;
}

/*百鸡问题*/
void hundredofChickens1() {
	int cock, hen, chick;
    for(cock = 1; cock <= 19; ++cock) {
        for(hen = 1; hen <= 31; ++hen) {
            for(chick = 3; chick <= 96; ++chick) {
                if(cock + hen + chick != 100)
                    continue;
                if(cock * 5 + hen * 3 + chick / 3 != 100)
                    continue;
                if(chick % 3 != 0)
                    continue;
                cout << "cock=" << cock << ", hen=" << hen
                        << ", chick=" << chick << endl;
            }
        }
    }
}

void hundredofChickens2() 
{
	int cock, hen;
    for(cock = 1; cock <= 19; ++cock) {
        for(hen = 1; hen <= 31; ++hen) {
            if(cock * 5 + hen * 3 + (100 - cock - hen) / 3 != 100)
                continue;
            if((100 - cock - hen) % 3 != 0)
                continue;
            cout << "cock=" << cock << ", hen=" << hen
                    << ", chick=" << (100 - cock - hen) << endl;
        }
    }	
}


/*用迭代法求平方根*/
double sqrtbyIteration(double a)
{
	double x, g;
    if(a < 0) return -1;
    else {
        x = a;
        g = x / 2;
        while(fabs(x - g) >= EPSILON) {
            x = g;
            g = (x + a / x) / 2;
        }
        return g;
    }
}

/*求两者中的较大值*/
int max(int num1, int  num2) {
    int result;
    result = (num1 > num2) ? num1 : num2;
    return result;
}

/*指针返回两者中的较大值*/
int* max(int *x, int *y)
{
	return (*x > *y) ? x : y;
}

/*求n次幂，支持负整数幂*/
double power(double x, int n) {
    if(n >= 0)
        return powerHelper(x, n);
    else
        return 1 / powerHelper(x, -n);
}
double powerHelper(double x, int n) {
    if(n == 0)
        return 1;
    else
        return x * powerHelper(x, n - 1);
}

/*计算第n个斐波那契数*/
int fib(int n) {
    if(n == 0 || n == 1)
        return n;
    else
        return fib(n - 1) + fib(n - 2);
}

int fib2(int n) {
    int f0 = 0, f1 = 1, f, i;
    if(n == 0 || n == 1)
        return n;
    for(f = f0 + f1, i = 2; i < n; ++i) {
        f0 = f1;
        f1 = f;
        f = f0 + f1;
    }
    return f;
}

/*指针交换两个数的数值*/ 
void swap(int *x, int *y) {
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

/*用引用交换两个数的数值*/
void swap2(int &x, int &y) {
    int temp;
    temp = x;
    x = y;
    y = temp;
} 

/*判断是不是素数*/ 
bool isPrime(int n) {
    bool flag = true;
    if(n <= 1)
        flag = false;
    else if(n == 2)
        flag = true;
    else if(n % 2 == 0)
        flag = false;
    else {
        int limit = sqrt(n) + 1;
        for(int i = 3; i <= limit; i += 2) {
            if(n % i == 0) {
                flag = false;
                break;
            }
        }
    }
    return flag;
}


/*求最大公约数*/
int gcd(int m, int n) {
    if((m == 0) && (n == 0))
		return 0;
	if(m == 0)
		return n;
	if(n == 0)
		return m;
	if(m < 0)
		m = -m;
	if(n < 0)
		n = -n;
    int r;
    while(true) {
        r = m % n;
        if(r == 0)
            break;
        m = n;
        n = r;
    }
    return n;
}


/*计算平均成绩*/
void averageScore() {
	double score[ARRAY_SIZE];
    double total = 0.0;
    for(int i = 0; i < ARRAY_SIZE; ++i) {
        cout << "输入第" << (i + 1) << "个评委的分数: ";
        cin >> score[i];
        total += score[i];
    }
    double maxScore = score[0];
    double minScore = score[0];
    for(int i = 1; i < ARRAY_SIZE; ++i) {
        if(score[i] > maxScore)
            maxScore = score[i];
        if(score[i] < minScore)
            minScore = score[i];
    }
    double average = (total - maxScore - minScore) / (ARRAY_SIZE - 2);
    cout << "去掉一个最高分" << maxScore << ", 去掉一个最低分" << minScore
            << ", 最后得分" << average << endl;
}

/*查找矩阵最值下标*/
void indexofMatrix() {
	const int ROW_SIZE = 4;
    const int COLUMN_SIZE = 4;
    int matrix[ROW_SIZE][COLUMN_SIZE];
    srand(time(NULL));
    for(int row = 0; row < ROW_SIZE; ++row) {
        for(int column = 0; column < COLUMN_SIZE; ++column) {
            matrix[row][column] = 10 + rand() % 90;
            cout << matrix[row][column] << " ";
        }
        cout << endl;
    }
    int max = matrix[0][0];
    int min = matrix[0][0];
    int max_row = 0, max_column = 0;
    int min_row = 0, min_column = 0;
    for(int row = 0; row < ROW_SIZE; ++row) {
        for(int column = 0; column < COLUMN_SIZE; ++column) {
            if(matrix[row][column] > max) {
                max = matrix[row][column];
                max_row = row;
                max_column = column;
            }
            if(matrix[row][column] < min) {
                min = matrix[row][column];
                min_row = row;
                min_column = column;
            }
        }
    }
    cout << "矩阵中最大值: " << max << ", 位于"
            << max_row << "行" << max_column << "列\n";
    cout << "矩阵中最小值: " << min << ", 位于"
            << min_row << "行" << min_column << "列\n";
}

/*转换成大写字母*/
char toUppercase(char lowercase) {
	char uppercase = islower(lowercase) ? toupper(lowercase) : lowercase;
	return uppercase;
}

/*带异常处理的除法函数*/
int divide(int number1, int number2) {
    if(number2 == 0)
        throw runtime_error("除数不能为0!");
    return number1 / number2;
}

/*演示 超出有效范围异常类*/ 
intRange::intRange(int lower, int upper) {
        lowerbound = lower;
        upperbound = upper;
}
int intRange::getValue() {
        cin >> value;
        if(value < lowerbound || value > upperbound)
            throw out_of_range("输入值超出允许范围!");
        return value;
}

