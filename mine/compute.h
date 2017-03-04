#ifndef COMPUTE_H
#define COMPUTE_H


/*�������󣬼���Բ���*/
class Circle {
public:
    Circle(double newRadius = 1);
    ~Circle();
    void setRadius(double newRadius);
    double getRadius() const;
    double computeArea() const;
    static int getNumberOfObjects();       // ��̬����
private:
    double radius;
    static int numberOfObjects;               // ��̬����
};

/*Բ���� ��ʾ ���̳�*/
class Cyclinder:public Circle {
public:
    Cyclinder(double newRadius, double newHeight);
    void setHeight(double newHeight);
    double getHeight() const;
    double computeVolume() const;
private:
    double height;
};

/*��ʾ ������Ч��Χ�쳣��*/ 
class intRange {
public:
    intRange(int lower, int upper);
    int getValue();
private:
    int value;              // �������ֵ
    int lowerbound;   // ����ֵ������
    int upperbound;  // ����ֵ������
}; 

/*����Բ���*/ 
double computeArea_circle(double r=1); 
            //Ĭ�ϲ��������溯�����岻Ҫ��д�� 

/*�������������*/
double computeArea_triangle(double,double,double);

/*�ж��ǲ�������*/
bool judge_leapYear(int year); 

/*����ĳ���ĳ���м���*/
int dayofYM1(int year,int month); 


/*�������ɸ����ĺͣ���^z��^dΪ�������*/
int addNum(); 

/*����ĳ��������λ��*/
int digitofNum(int value);

/*����׳�*/
double factorial(int n);
double factorial2(int n); 

/*���������, ����k<=n*/
int combinations(int k, int n); 

/*����׳˵ĺ�*/
double sumofFactorial(int n); 

/*�ټ�����*/
void hundredofChickens1();
void hundredofChickens2();

/*�õ�������ƽ����*/
double sqrtbyIteration(double num); 

/*�������еĽϴ�ֵ*/
int max(int num1, int  num2);

/*ָ�뷵�������еĽϴ�ֵ*/
int *max(int *x, int *y);

/*��n���ݣ�֧�ָ�������*/
double power(double x, int n);
double powerHelper(double x, int n);

/*�����n��쳲�������*/
int fib(int n);
int fib2(int n);

/*ָ�뽻������������ֵ*/ 
void swap(int *x, int *y);

/*�����ý�������������ֵ*/
void swap2(int &x, int &y); 

/*�ж��ǲ�������*/ 
bool isPrime(int n);

/*�����Լ��*/
int gcd(int m, int n);

/*����ƽ���ɼ�*/
void averageScore(); 

/*���Ҿ�����ֵ�±�*/
void indexofMatrix();

/*ת���ɴ�д��ĸ*/
char toUppercase(char);

/*���쳣����ĳ�������*/ 
int divide(int number1, int number2); 






 

#endif
