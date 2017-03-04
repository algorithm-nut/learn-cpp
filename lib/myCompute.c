#include "myCompute.h"
#include <math.h>
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <time.h> 
#define PI 3.14159
#define EPSILON 1e-6

#define ARRAY_SIZE 6
#define STRING_LENGTH 80
#define ROW_SIZE 10
#define COLUMN_SIZE 10


/*��������*/ 

/*1.ָ��������ĸ���*/
int add_nNum(int n) {
	int sum = 0;
	int num = 0;
	while(n--) {
		scanf("%d", &num);
		sum += num;
	}
	return sum;
}

/*2.�ֶ�����^z����*/ 
int add_zNum() {
	int sum = 0;
	int num = 0;
	while(scanf("%d", &num) == 1) {
	    sum += num;	
	}
	return sum;
} 

/*3.ָ���������ֱ�־*/
int add_fNum(int flag) {
	int sum = 0;
	int num = 0;
	if(flag == 0) num = -1;
	while(1) {
		scanf("%d", &num);
		if(num == flag) break;
		sum += num;
	}
	return sum;
} 
 


int sumOfEachDigit(int num) 
{
	int sum = 0;
	while(num > 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

/*�������*/ 
double computeArea_circle(double radius) 
{  
	double area = -1;
    if(radius >= 0)
	    area = PI*radius*radius;
	return area;
} 

double computeArea_triangle(double a,double b,double c)
{
	double area= -1;
	if(a+b > c && a+c > b && b+c > a) {
        int p = (a+b+c) / 2;
        area = sqrt(p * (p-a) * (p-b) * (p-c));
    }
    return area;
}


void compute_digitofNum(int num) {
	int count = 0;
	printf("%d",num);
    do {
        num /= 10;
        ++count;
    } while(num > 0);
    printf("��λ��Ϊ\t%d",count); 
}

/*�����Լ��*/ 
int gcd(int m, int n) 
{
    if(m < 0)
        m = -m;
    if(n < 0)
        n = -n;
    if(n == 0)
        return m;
    else
        return gcdHelper(m, n);
}
int gcdHelper(int m, int n) 
{
    if(m % n == 0)
        return n;
    else
        return gcdHelper(n, m % n);
}

int gcd1(int num1, int num2)
{
    int gcd;
    gcd = num1;
    while(num1 % gcd != 0 || num2 % gcd != 0)
        --gcd;
    return gcd;	
}

int gcd2(int num1, int num2)
{
	printf("hi");
	int r;
    while((r=num1%num2)!=0) {
		num1 = num2;
		num2 = r;
    }
    return num2;
}



/*����ĳ���ĳ���м���*/
void dayofYM1(int year,int month)
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
    }
    printf("%d��%d����%d��\n\n", year, month, day);
}

void dayofYM2() 
{
	enum month { JANUARY = 1, FEBRUARY, MARCH, APRIL, MAY, JUNE,
                            JULY, AUGUST, SEPTEMBER, OCTOBER, NOVEMBER,
                            DECEMBER };
    enum month amonth;
    int day, year;
    printf("��������� �·�:");
    scanf("%d %d",&year, &amonth);
    switch(amonth) {
        case JANUARY:
        case MARCH:
        case MAY:
        case JULY:
        case AUGUST:
        case OCTOBER:
        case DECEMBER:
            day = 31;
            break;
        case APRIL:
        case JUNE:
        case SEPTEMBER:
        case NOVEMBER:
            day = 30;
            break;
        case FEBRUARY:
            if((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
                day = 29;
            else
                day = 28;
            break;
        default:
            printf("�Ƿ�����\n");
            day = 0;
            break;
    }
    if(day != 0)
        printf("%d��%d����%d��\n", year, amonth, day);
}


/*�����n��쳲�������,��0��ʼ*/ 
int fib1(int n) 
{
    if(n == 0 || n == 1)
        return n;
    else
        return fib1(n - 1) + fib1(n - 2);
}

int fib2(int n) 
{
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

/*����PI��������ѧ��ʽ*/
void compute_PI()
{
	double sum = 0, item = 1;
    int denominator, sign;
    for(denominator = 1, sign = 1; 
	    fabs(item) >= 1e-6; 
		denominator += 2, sign *= -1) {
        item = sign / (double)denominator;
        sum += item;
    }
    printf("PI=%f\n", 4*sum);
}


/*�����¶�ת���������¶�*/
void convert_fahtoCel(double fahrenheit) 
{ 
	double celsius;
    celsius = (5.0/9.0) * (fahrenheit - 32);  //ע��5/9 
	printf("�����¶�%.1f\n �������¶�%.1f\n",
	                      fahrenheit,celsius);						  	
}

/*����׳�*/ 
double factorial1(int num)
{
	int i;
    double mul = 1;
    for(i = 1; i <= num; ++i)
        mul *= i;
    return mul;
}

double factorial2(int num) {
    if(num == 0)
        return 1;
    else
        return num * factorial2(num-1);
}

double compute_sumofFactorial(double num)
{
	int i, j;
    double mul, sum = 0;
    for(i = 1; i <= num; ++i) {
        mul = 1;
        for(j = 1; j <= i; ++j)
            mul *= j;
        sum += mul;
    }
    return sum;
}

/*���������*/ 
int combinations(int k, int n) 
{
    return factorial1(n) / (factorial1(k) * factorial1(n - k));
}

/*�ж��ǲ�������*/ 
int judge_leapYear(int year) 
{
	return (year%4 == 0 && year%100 != 0) || (year%400 == 0); 
}

/*�������ɸ����е���ֵ*/ 
int maxNum3(int num1,int num2,int num3) 
{
	int maxNum = num1;
    if(maxNum < num2) maxNum = num2;
    if(maxNum < num3) maxNum = num3;
    return maxNum;
}

int minNum3(int num1, int num2, int num3)
{
	int minNum = num1;
	if(minNum > num2) minNum = num2;
	if(minNum > num3) minNum = num3;
	return minNum;
} 

int max(int a,int b) {  //û��������3������ 
	if(a<b) {
		a = a+b;
		b = a-b;
		a = a-b;
	}
	return a;
}

/*��Сд��ĸ��ת��*/
int toUppercase(int lowercase)
{
	int uppercase;
	uppercase = islower(lowercase) ? toupper(lowercase) : lowercase;
	return uppercase;
}
int toLowercase(int uppercase)
{
	int lowercase;
	lowercase = isupper(uppercase) ? tolower(uppercase) : uppercase;
	return lowercase;
}





/*�ж�һ�����Ƿ�Ϊ����*/
int isPrimeNum(int num) {
	int flag = 1;  //Ĭ��Ϊ���� 
	if(num <= 1)       flag = 0;
	else if(num == 2)  flag = 1;
	else if(num % 2 == 0)  flag = 0;  //ż������������
	else {
		int judge = sqrt(num) + 1;  //������Ҫȫ��ѭ���ж�
		int i = 3;
		for(i=3; i<=judge; i = i+2 ) {
			if(num % i == 0) {  //ע�����i������judge 
				flag = 0;   //�൱���޳�
				break; 
			}
		} 
	} 
	return flag;
} 

/*���д�ӡһ����Χ�ڵ�����*/
void print_primeNumBet(int num1, int num2, int width)
{
	int i, count = 0;
    for(i = num1; i <= num2; ++i) {
        if(isPrimeNum(i)) {
            printf("%-6d", i);
            count++;
            if (count % width == 0)
                printf("\n");
        }
    }
}









/*������Ϣ,���������������ʣ�%�����������*/ 
double bankProfits( double investment, 
                    double annualRate, 
				    double years) 
{
	double monthlyRate, accumulatedValue; 
	monthlyRate = annualRate / 1200;   // ������ת��Ϊ������
	accumulatedValue 
			= investment * pow( 1+monthlyRate, years*12);
//	accumulatedValue 
//	        = investment * (1+annualRate/100);
	return accumulatedValue;	
}

/*�������*/
double compute_bonus(double profit)
{
	double bonus;
	double bonus1, bonus2, bonus3, bonus4, bonus5;
    bonus1 = 50000 * 0.1;
    bonus2 = bonus1 + 50000 * 0.07;
    bonus3 = bonus2 + 100000 * 0.05;
    bonus4 = bonus3 + 200000 * 0.03;
    bonus5 = bonus4 + 100000 * 0.015;
    if(profit <= 50000)         bonus = profit * 0.1;
    else if(profit <= 100000)   bonus = bonus1 + (profit-50000) * 0.07;
    else if(profit <= 200000)   bonus = bonus2 + (profit-100000) * 0.05;
    else if(profit <= 400000)   bonus = bonus3 + (profit-200000) * 0.03;
    else if(profit <= 500000)   bonus = bonus4 + (profit-400000) * 0.015;
    else                        bonus = bonus5 + (profit-500000) * 0.01;
	return bonus;
}  


/*x��n����*/ 
double power(double x, int n) 
{
    if(n >= 0)
        return powerHelper(x, n);
    else
        return 1 / powerHelper(x, -n);
}

double powerHelper(double x, int n) 
{
    if(n == 0)
        return 1;
    else
        return x * powerHelper(x, n - 1);
}


/*ˮ�ɻ�����ͬ����������*/
void print_narNum()
{
	printf("���1000���ڵ�ˮ�ɻ�����\n");
    int i, a, b, c;
    for(i = 100; i < 1000; ++i) {
        a = i/100;            // ��λ 
        b = i/10 % 10;        // ʮλ 
        c = i%10;             // ��λ 
        if(a*a*a + b*b*b + c*c*c == i)
            printf("%d\n", i);
    }
	printf("\n");	
}

void print_isomorphNum()
{
	printf("���10000���ڵ�ͬ������\n");
    int i, value, count, power;
    for(i = 1; i <= 10000; ++i) {
        count = 0;
        value = i;
        while(value > 0) {
            value /= 10;
            ++count;
        }
        power = 1;
        while(count != 0) {
            power *= 10;
            --count;
        }
        if( i == i * i % power)
            printf("%d\t%d\n", i, i * i);
    }
	printf("\n");	
}
 
void print_completeNum()
{
	printf("���1000���ڵ�������\n");
	int i, j, sum;
    for(i = 2; i <= 1000; ++i) {
        sum = 1;
        for(j = 2; j <= i / 2; ++j)
            if(i % j == 0)
                sum += j;
        if(sum == i)
            printf("%d\n", i);
    }
    printf("\n");
}

/*���n�������*/ 
void print_randNum1(int n)
{
    int i;
//    printf("RAND_MAX = %d\n", RAND_MAX);
    for(i = 1; i <= n; ++i)
        printf("%d: %d\n", i, rand());
	printf("\n");	
}

void print_randNum2(int n)
{
	int i;
	
    unsigned int seed;
    printf("��������ֵ: ");
    scanf("%u", &seed);
    srand(seed);
    
    for(i = 1; i <= n; ++i)
        printf("%d: %d\n", i, rand());
    printf("\n");
}

/*���a~b�������*/
void initSeed(void) 
{
    srand(time(NULL));
}

int randNum(int a, int b) 
{ 
    initSeed();
    return a + rand() % (b - a + 1);
}

/*ͳ�ư༶�ɼ�*/
void count_gradeofClass()
{
	int score, totalScore = 0; 
	int maxScore, minScore;
	int count = 0;
    printf("����ѧ���ɼ�����-1��Ϊ������־\n");
    scanf("%d", &score);
    maxScore = minScore = score;
    while(score >= 0 && score <= 100) {
        if(score > maxScore)
            maxScore = score;
        if(score < minScore)
            minScore = score;
        totalScore += score;
        ++count;
        scanf("%d", &score);
    }
    if(count > 0) {
        printf("ѧ������: %d\n", count);
        printf("��߷�: %d\n", maxScore);
        printf("��ͷ�: %d\n", minScore);
        printf("ƽ����: %.2f\n", (double)totalScore / count);
    }
}

/*�ж��ǲ��ǻ�����*/
int judge_palindrome(int num) 
{
    int temp, remainder, result = 0;
    temp = num;
    while (temp != 0) {
        remainder = temp % 10;
        result = result * 10 + remainder;
        temp = temp / 10;
    }
    return (num == result);
}

/*�ݹ飺���ӳ������⣬��������n��*/
//ÿ��Ե�һ���Ҫ�ٳ�1������10�컹û�ԣ�ֻʣ1���� 
int peach(int num)
{
	if(num == 10)
        return 1;
    else
        return (peach(num+1) + 1) * 2;
} 


/*�ټ�����*/ 
void hundredofChicken1()
{
    int cock, hen;
    for(cock = 1; cock <= 19; ++cock) {
        for(hen = 1; hen <= 31; ++hen) {
            if(cock * 5 + hen * 3 + (100 - cock - hen) / 3 != 100)
                continue;
            if((100 - cock - hen) % 3 != 0)
                continue;
            printf("cock=%2d, hen=%2d, chick=%2d\n", cock, hen, 100 - cock - hen);
         }
    }
	printf("\n");	
}

void hundredofChicken2()
{
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
                printf("cock=%2d, hen=%2d, chick=%2d\n", cock, hen, chick);
            }
        }
    }
    printf("\n");
}

/*�õ�������ƽ����*/
void sqrtbyIteration(double num)
{
    double x, g;
    if(num < 0)
        printf("����û��ƽ����\n\n");
    else {
        x = num;
        g = x / 2;
        while(fabs(x - g) >= 1e-6) {
            x=g;
            g = (x + num/x) / 2;
        }
        printf("ƽ����: %f\n\n", g);
    }	
}

/* ָ����Ϊ�����ķ���ֵ */ 
int *maxbyPointer(int *x, int *y) 
{
    if(*x > *y)  return x;
    else         return y;
}

/* �ú���ָ����ú��� */
int sum(int x, int y)        { return x + y; }
int difference(int x, int y) { return x - y; }
int product(int x, int y)    { return x * y; }

/* �ú���ָ��ص����� */
int any_function(int (*pf)(int, int), int x, int y) 
{
    return pf(x, y);
}


/*�������Ǻ���*/
void tabulate(double (*pf)(double), double start, double end, double increment) 
{
    int i, numIntervals;
    double x;
    numIntervals = ceil((end - start) / increment);
    for(i = 0; i <= numIntervals; ++i) {
        x = start + i * increment;
        printf("%7.5f %10.5f\n", x, pf(x));
    }
}

/*����ƽ������*/
void compute_averageAge()
{
	int age[ARRAY_SIZE]={0};
	int i, total = 0;
    printf("����%d���˵�����: ", ARRAY_SIZE);
    for(i = 0; i < ARRAY_SIZE; ++i) {
        scanf("%d", &age[i]);
        total += age[i];
    }
    printf("ƽ������: %d\n", total / ARRAY_SIZE);
}

/*����ƽ����*/ 
void compute_averageScore()
{
	double score[ARRAY_SIZE]={0};
	double maxScore, minScore;
    double total = 0.0, average;
    int i;
    for(i = 0; i < ARRAY_SIZE; ++i) {
        printf("��%d����ί�ķ���: ", i + 1);
        scanf("%lf", &score[i]);
        total += score[i];
    }
    maxScore = score[0];
    minScore = score[0];
    for(i = 1; i < ARRAY_SIZE; ++i) {
        if(score[i] > maxScore)
            maxScore = score[i];
        if(score[i] < minScore)
            minScore = score[i];
    }
    average = (total - maxScore - minScore) / (ARRAY_SIZE - 2);
    printf("\n");
    printf("ȥ��һ����߷�%5.1f,\nȥ��һ����ͷ�%5.1f,\n���÷�%5.1f\n",
              maxScore, minScore, average);
}

/*ͳ��ƽ������*/ 
void count_averageAge()
{
	int age[ARRAY_SIZE]={0};
	int i, total = 0, average;
    int less = 0, equal = 0, great = 0;
    printf("����%d���˵�����: ",ARRAY_SIZE);
    for(i = 0; i < ARRAY_SIZE; ++i) {
        scanf("%d", &age[i]);
        total += age[i];
    }
    average = total / ARRAY_SIZE;
    for(i = 0; i < ARRAY_SIZE; ++i) {
        if(age[i] > average)
            ++great;
        else if(age[i] < average)
            ++less;
        else
            ++equal;
    }
    printf("ƽ������: %d\n", average);
    printf("������ƽ������֮�ϵ�����: %d\n", great);
    printf("������ƽ������֮�µ�����: %d\n", less);
    printf("����ǡ�õ���ƽ�����������: %d\n", equal);
}

/*ͳ����������Գ��ִ���,���������������*/
void count_randNum(int n)
{
	#undef ARRAY_SIZE
	#define ARRAY_SIZE 20 
	int count[ARRAY_SIZE]={0}; //����ARRAY_SIZE�ĳ�20 
	int i, value;
    srand(time(NULL));
    for(i = 0; i < n; ++i) {
        value = rand() % ARRAY_SIZE;
        ++count[value];
    }
    for(i = 0; i < ARRAY_SIZE; ++i)
        printf("%d���ִ���: %d\n", i, count[i]);
    #undef ARRAY_SIZE   
    #define ARRAY_SIZE 6
}

/*�ж�һ�����Ƿ����ظ�����*/
int judge_repeatedNum(int n)
{
    int digit[ARRAY_SIZE] = {0};
    int value;
	if(n < 0)
    n = -n;
    while(n > 0) {
        value = n % 10;
        if(digit[value])
            break;
        digit[value] = 1;
        n /= 10;
    }
	return n;	
}

/*����ĳ�����Ǹ���ڼ���*/
void compute_dayNumofYear(int year, int month, int day)
{
    int i, leapYear;
    int dayTable[2][13] = {
        {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},
        {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}
    };
    leapYear = ((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0);
    for(i = 1; i < month; ++i)
        day += dayTable[leapYear][i];
    printf("��������%d���%d��\n", year, day);	
}

int compute_dayNumofYear1(struct date_list d) 
{
    int i, leapYear, day;
    int dayTable[2][13] = {
        {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},
        {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}
    };
    leapYear = ((d.year % 4 == 0) && (d.year % 100 != 0)) || (d.year % 400 == 0);
    day = d.day;
    for(i = 1; i < d.month; ++i)
       day += dayTable[leapYear][i];
    return day;
}

int compute_dayNumofYear2(struct date_list *p) {
    int i, leapYear, day;
    int dayTable[2][13] = {
        {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},
        {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}
    };
    leapYear = ((p->year % 4 == 0) && (p->year % 100 != 0)) ||
                      (p->year % 400 == 0);
    day = p->day;
    for(i = 1; i < p->month; ++i)
       day += dayTable[leapYear][i];
    return day;
}

/*���Ҷ�ά�������ֵ�±�*/
void indexofMatrix(int matrix[ROW_SIZE][COLUMN_SIZE])
{
    int row, column;
    int max, min, max_row, max_column, min_row, min_column;
    max = matrix[0][0];
    min = matrix[0][0];
    max_row = max_column = 0;
    min_row = min_column = 0;
    for(row = 0; row < ROW_SIZE; ++row) {
        for(column = 0; column < COLUMN_SIZE; ++column) {
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
    printf("���������ֵ:%d,λ��%d��%d��\n", max, max_row+1, max_column+1);
    printf("��������Сֵ:%d,λ��%d��%d��\n", min, min_row+1, min_column+1);
    printf("\n");
}

/*�����ֵ�ͱ�׼��*/ 
double mean(const double x[], int arraySize) 
{
    int i;
    double sum = 0;
    for(i = 0; i < arraySize; ++i)
        sum += x[i];
    return sum / arraySize;
}
double deviation(const double x[], int arraySize) 
{
    int i;
    double mean1 = mean(x, arraySize);
    double squareSum = 0;
    for(i = 0; i < arraySize; ++i)
        squareSum += pow(x[i] - mean1, 2);
    return sqrt(squareSum / (arraySize - 1));
}

/*�����ֵ�ͱ�׼��*/ 
void print_doubleArray(const double x[], int arraySize) 
{
    int i;
    for(i = 0; i < arraySize; ++i)
        printf("%.2f ", x[i]);
    printf("\n");
}

/*����������*/
void compute_yearTotal()
{
	struct sale {
        int quarter;      			        //���� 
        double department[4];		// ���ż������۶�ͼ��������ܼ� 
    };
    struct sale market[4] = { { 1, 637, 1106, 912, 0 },
                                            { 2, 730, 998, 850, 0 },
                                            { 3, 651, 1210, 956, 0 },
                                            { 4, 596, 920, 1011, 0 } };
    double yearTotal[4] = {0};
    int i, j;
    for(i = 0; i < 4; ++i)
        for(j = 0; j < 3; ++j)
            market[i].department[3] += market[i].department[j];
    for(i = 0; i < 4; ++i)
        for(j = 0; j < 4; ++j)
            yearTotal[i] += market[j].department[i];
    for(i = 0; i < 4; ++i) {
        printf("%2d", market[i].quarter);
        for(j = 0; j < 4; ++j)
            printf("%10.1f", market[i].department[j]);
        printf("\n");
    }
    printf("  ");
    for(i = 0; i < 4; ++i)
        printf("%10.1f", yearTotal[i]);
}










