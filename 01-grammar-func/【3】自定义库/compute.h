#ifndef COMPUTE_H
#define COMPUTE_H


/*声明对象，计算圆面积*/
class Circle {
public:
    Circle(double newRadius = 1);
    ~Circle();
    void setRadius(double newRadius);
    double getRadius() const;
    double computeArea() const;
    static int getNumberOfObjects();       // 静态函数
private:
    double radius;
    static int numberOfObjects;               // 静态变量
};

/*圆柱体 演示 单继承*/
class Cyclinder:public Circle {
public:
    Cyclinder(double newRadius, double newHeight);
    void setHeight(double newHeight);
    double getHeight() const;
    double computeVolume() const;
private:
    double height;
};

/*演示 超出有效范围异常类*/ 
class intRange {
public:
    intRange(int lower, int upper);
    int getValue();
private:
    int value;              // 存放输入值
    int lowerbound;   // 输入值的下限
    int upperbound;  // 输入值的上限
}; 

/*计算圆面积*/ 
double computeArea_circle(double r=1); 
            //默认参数，后面函数定义不要再写了 

/*计算三角形面积*/
double computeArea_triangle(double,double,double);

/*判断是不是闰年*/
bool judge_leapYear(int year); 

/*计算某年的某月有几天*/
int dayofYM1(int year,int month); 


/*计算若干个数的和，以^z或^d为结束标记*/
int addNum(); 

/*计算某个整数的位数*/
int digitofNum(int value);

/*计算阶乘*/
double factorial(int n);
double factorial2(int n); 

/*计算组合数, 其中k<=n*/
int combinations(int k, int n); 

/*计算阶乘的和*/
double sumofFactorial(int n); 

/*百鸡问题*/
void hundredofChickens1();
void hundredofChickens2();

/*用迭代法求平方根*/
double sqrtbyIteration(double num); 

/*求两者中的较大值*/
int max(int num1, int  num2);

/*指针返回两者中的较大值*/
int *max(int *x, int *y);

/*求n次幂，支持负整数幂*/
double power(double x, int n);
double powerHelper(double x, int n);

/*计算第n个斐波那契数*/
int fib(int n);
int fib2(int n);

/*指针交换两个数的数值*/ 
void swap(int *x, int *y);

/*用引用交换两个数的数值*/
void swap2(int &x, int &y); 

/*判断是不是素数*/ 
bool isPrime(int n);

/*求最大公约数*/
int gcd(int m, int n);

/*计算平均成绩*/
void averageScore(); 

/*查找矩阵最值下标*/
void indexofMatrix();

/*转换成大写字母*/
char toUppercase(char);

/*带异常处理的除法函数*/ 
int divide(int number1, int number2); 






 

#endif
