/*
	Authur:      ����(Luo_0412)
	Bulid_date:  2016-4-17
	Version:     1.0
    Function:    ������ϰ������ƫ��ѧ����� 
	Update:      	 
*/

#ifndef COMPUTE_H
#define COMPUTE_H

#define ARRAY_SIZE 6
#define STRING_LENGTH 80
#define ROW_SIZE 10
#define COLUMN_SIZE 10


/*�������ڽṹ*/
struct date_list {
    int year;
    int month;
    int day;
};


/*��������*/
int add_nNum(int n);
int add_zNum(); 
int add_fNum(int flag); 

/*��һ������λ��֮��*/
int sumOfEachDigit(int); 


/*���㳣��ƽ�漸��������*/ 
double computeArea_circle(double);
double computeArea_triangle(double,double,double);

/*����һ������λ��*/ 
void compute_digitofNum(int);

/*�����Լ��*/ 
int gcd(int, int);
int gcdHelper(int, int);
int gcd1(int, int);
int gcd2(int, int); 


/*ĳ���ĳ���м���*/ 
void dayofYM1(int,int);
void dayofYM2();

/*�����n��쳲�����������0��ʼ*/ 
int fib1(int);
int fib2(int);

/*����PI,������ѧ��ʽ*/ 
void compute_PI();

/*�����¶�ת���ɻ����¶�*/ 
void convert_fahtoCel(double);

/*����׳�*/ 
double factorial1(int);
double factorial2(int);

/*����׳˵ĺ�*/ 
double compute_sumofFactorial(double);

/*���������*/ 
int combinations(int k, int n);

/*�ж��ǲ�������*/ 
int judge_leapYear(int);

/*�������ɸ�������ֵ*/ 
int maxNum3(int,int,int);
int minNum3(int,int,int);
int max(int ,int);

/*��Сд��ĸ��ת��*/ 
int toUppercase(int); 
int toLowercase(int);

/*�ж��ǲ�������*/ 
int isPrimeNum(int);

/*��ӡһ����Χ�ڵ�����*/
void print_primeNumBet(int, int, int);  

/*������Ϣ*/ 
double bankProfits(double, double ,double);

/*�������*/ 
double compute_bonus(double);

/*x��n����*/ 
double power(double x, int n);
double powerHelper(double x, int n);

/*���һ����Χ�ڵ�ˮ�ɻ�����ͬ����������*/ 
void print_narNum();
void print_isomorphNum();
void print_completeNum();

/*���n�������*/ 
void print_randNum1(int); 
void print_randNum2(int);

/*���a~b�������*/ 
void initSeed(void);
int  randNum(int a, int b);

/*ͳ�ư༶�ɼ�*/
void count_gradeofClass();

/*�ж��ǲ��ǻ�����*/
int judge_palindrome(int);

/*�ݹ飺���ӳ������⣬��������n��*/
int peach(int); 

/*�ټ�����*/ 
void hundredofChicken1(); 
void hundredofChicken2();

/*�õ�����(�����ƽ���)��ƽ����*/
void sqrtbyIteration(double);

/*������������ֵ*/
void swap(int *a, int *b);

/*��ָ�뷵�����ֵ */ 
int *maxbyPointer(int *x, int *y);

/* �ú���ָ����ú��� */
int sum(int, int);
int difference(int, int);
int product(int, int);

/* �ú���ָ��ص����� */
int any_function(int (*pf)(int, int), int, int);

/*�������Ǻ���*/
void tabulate(double (*pf)(double), double, double, double);

/*����ƽ������*/
void compute_averageAge();

/*ͳ��ƽ������*/
void count_averageAge();

/*����ƽ����*/
void compute_averageScore();

/*ͳ����������Գ��ִ���,���������������*/ 
void count_randNum(int n);

/*�ж�һ�����Ƿ����ظ�����*/
int judge_repeatedNum(int);

/*����ĳ�����Ǹ���ڼ���,�������꣬�£���*/
void compute_dayNumofYear(int, int,int); 
int  compute_dayNumofYear1(struct date_list d);
int  compute_dayNumofYear2(struct date_list *p);

/*���Ҷ�ά�������ֵ�±�*/
void indexofMatrix(int matrix[ROW_SIZE][COLUMN_SIZE]);

/*�����ֵ�ͱ�׼��*/ 
double mean(const double x[], int arraySize);
double deviation(const double x[], int arraySize);

/*�����ֵ�ͱ�׼��*/ 
void print_doubleArray(const double x[], int arraySize);

/*����������*/
void compute_yearTotal();


#endif
