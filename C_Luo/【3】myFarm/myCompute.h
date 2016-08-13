/*
	Authur:      骆金参(Luo_0412)
	Bulid_date:  2016-4-17
	Version:     1.0
    Function:    入门练习函数，偏数学概念的 
	Update:      	 
*/

#ifndef COMPUTE_H
#define COMPUTE_H

#define ARRAY_SIZE 6
#define STRING_LENGTH 80
#define ROW_SIZE 10
#define COLUMN_SIZE 10


/*声明日期结构*/
struct date_list {
    int year;
    int month;
    int day;
};


/*多个数相加*/
int add_nNum(int n);
int add_zNum(); 
int add_fNum(int flag); 

/*求一个数各位数之和*/
int sumOfEachDigit(int); 


/*计算常见平面几何体的面积*/ 
double computeArea_circle(double);
double computeArea_triangle(double,double,double);

/*计算一个数的位数*/ 
void compute_digitofNum(int);

/*求最大公约数*/ 
int gcd(int, int);
int gcdHelper(int, int);
int gcd1(int, int);
int gcd2(int, int); 


/*某年的某月有几天*/ 
void dayofYM1(int,int);
void dayofYM2();

/*计算第n个斐波那契数，从0开始*/ 
int fib1(int);
int fib2(int);

/*计算PI,利用数学公式*/ 
void compute_PI();

/*摄氏温度转换成华氏温度*/ 
void convert_fahtoCel(double);

/*计算阶乘*/ 
double factorial1(int);
double factorial2(int);

/*计算阶乘的和*/ 
double compute_sumofFactorial(double);

/*计算组合数*/ 
int combinations(int k, int n);

/*判断是不是闰年*/ 
int judge_leapYear(int);

/*计算若干个数中最值*/ 
int maxNum3(int,int,int);
int minNum3(int,int,int);
int max(int ,int);

/*大小写字母的转换*/ 
int toUppercase(int); 
int toLowercase(int);

/*判断是不是素数*/ 
int isPrimeNum(int);

/*打印一定范围内的素数*/
void print_primeNumBet(int, int, int);  

/*计算利息*/ 
double bankProfits(double, double ,double);

/*计算提成*/ 
double compute_bonus(double);

/*x的n次幂*/ 
double power(double x, int n);
double powerHelper(double x, int n);

/*输出一定范围内的水仙花数，同构数，完数*/ 
void print_narNum();
void print_isomorphNum();
void print_completeNum();

/*输出n个随机数*/ 
void print_randNum1(int); 
void print_randNum2(int);

/*输出a~b的随机数*/ 
void initSeed(void);
int  randNum(int a, int b);

/*统计班级成绩*/
void count_gradeofClass();

/*判断是不是回文数*/
int judge_palindrome(int);

/*递归：猴子吃桃问题，参数：第n天*/
int peach(int); 

/*百鸡问题*/ 
void hundredofChicken1(); 
void hundredofChicken2();

/*用迭代法(连续逼近法)求平方根*/
void sqrtbyIteration(double);

/*交换两个数的值*/
void swap(int *a, int *b);

/*用指针返回最大值 */ 
int *maxbyPointer(int *x, int *y);

/* 用函数指针调用函数 */
int sum(int, int);
int difference(int, int);
int product(int, int);

/* 用函数指针回调函数 */
int any_function(int (*pf)(int, int), int, int);

/*调用三角函数*/
void tabulate(double (*pf)(double), double, double, double);

/*计算平均年龄*/
void compute_averageAge();

/*统计平均年龄*/
void count_averageAge();

/*计算平均分*/
void compute_averageScore();

/*统计随机数各自出现次数,参数：随机数总数*/ 
void count_randNum(int n);

/*判断一个数是否有重复数字*/
int judge_repeatedNum(int);

/*计算某日期是该年第几天,参数：年，月，日*/
void compute_dayNumofYear(int, int,int); 
int  compute_dayNumofYear1(struct date_list d);
int  compute_dayNumofYear2(struct date_list *p);

/*查找二维数组的最值下标*/
void indexofMatrix(int matrix[ROW_SIZE][COLUMN_SIZE]);

/*计算均值和标准差*/ 
double mean(const double x[], int arraySize);
double deviation(const double x[], int arraySize);

/*输出均值和标准差*/ 
void print_doubleArray(const double x[], int arraySize);

/*计算年利润*/
void compute_yearTotal();


#endif
