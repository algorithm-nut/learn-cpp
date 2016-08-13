#ifndef CLASS_SHOW_H
#define CLASS_SHOW_H


/*��ĳ���ڵ���һ��*/
class Date {
public:
    Date(int newYear = 1900, int newMonth = 1, int newDay = 1);
    void setDate(int newYear, int newMonth, int newDay);
    void setYear(int newYear);
    void setMonth(int newMonth);
    void setDay(int newDay);
    int getYear() const;
    int getMonth() const;
    int getDay() const;
    int monthDays();
    void nextDay();
    void print() const;
private:
    int year;
    int month;
    int day;
    bool isLeapYear();
};

/*��������*/
class Complex {
public:
    Complex(double newReal = 0, double newImaginary = 0);
    double getReal() const;
    double getImaginary() const;
    Complex add(const Complex &right);
    Complex subtract(const Complex &right);
    Complex multiply(const Complex &right);
    Complex divide(const Complex &right);
    static double module(const Complex &c);             // ������ģ
    static Complex squareRoot(const Complex &c);    // ������ƽ����
    void print() const;
private:
    double realPart;                 // ʵ��
    double imaginaryPart;       // �鲿
};
#endif
