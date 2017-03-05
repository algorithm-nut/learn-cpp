#include <iostream>
#include <stdexcept>
#include <cmath> 
#include "class_show.h"
using namespace std;


/*求某日期的下一天*/
Date::Date(int newYear, int newMonth, int newDay) {
    setDate(newYear, newMonth, newDay);
}
void Date::setDate(int newYear, int newMonth, int newDay) {
    setYear(newYear);
    setMonth(newMonth);
    setDay(newDay);
}
void Date::setYear(int newYear) {
    if(newYear >= 1900 && newYear <= 9999)
        year = newYear;
    else
        throw invalid_argument("年参数值超出允许范围!");
}
void Date::setMonth(int newMonth) {
    if(newMonth >= 1 && newMonth <= 12)
        month = newMonth;
    else
        throw invalid_argument("月参数值超出允许范围!");
}
void Date::setDay(int newDay) {
	if(newDay >= 1 && newDay <= monthDays())
        day = newDay;
    else
        throw invalid_argument("日参数值超出允许范围!");
}
int Date::getYear() const {
    return year;
}
int Date::getMonth() const {
    return month;
}
int Date::getDay() const {
    return day;
}
int Date::monthDays() {
	static const int DAYS_PER_MONTH[2][13] = {
        {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},
        {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}
    };
	return DAYS_PER_MONTH[isLeapYear()][month];
}
void Date::nextDay() {
	++day;
	if(day > monthDays()) {
		day = 1;
		++month;
		if(month > 12) {
			month = 1;
			++year;
			if(year > 9999)
                throw out_of_range("年份值超出允许范围!");
		}
	}
}
void Date::print() const {
    cout << year << "-" << month << "-" << day << endl;
}
bool Date::isLeapYear() {
    return ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0));
}



/*复数运算*/ 
Complex::Complex(double newReal, double newImaginary) {
    realPart = newReal;
    imaginaryPart = newImaginary;
}
double Complex::getReal() const {
    return realPart;
}
double Complex::getImaginary() const {
    return imaginaryPart;
}
Complex Complex::add(const Complex &right) {
    return Complex(realPart + right.realPart,
                               imaginaryPart + right.imaginaryPart);
}
Complex Complex::subtract(const Complex &right) {
    return Complex(realPart - right.realPart,
                               imaginaryPart - right.imaginaryPart);
}
Complex Complex::multiply(const Complex &right) {
    return Complex(realPart * right.realPart -
                               imaginaryPart * right.imaginaryPart,
                               realPart * right.imaginaryPart +
                               imaginaryPart * right.realPart);
}
Complex Complex::divide(const Complex &right) {
    double denominator = right.realPart * right.realPart +
                                          right.imaginaryPart * right.imaginaryPart;
    if(denominator == 0)
        throw runtime_error("除数不能为0!");
    else
        return Complex((realPart * right.realPart +
                                   imaginaryPart * right.imaginaryPart) / denominator,
                                   (imaginaryPart * right.realPart -
                                   realPart * right.imaginaryPart) / denominator);
}
double Complex::module(const Complex &c) {
    return sqrt(c.realPart * c.realPart + c.imaginaryPart * c.imaginaryPart);
}
// 辅助函数
int sign(double x) {
    return (x < 0) ? -1 : 1;
}
Complex Complex::squareRoot(const Complex &c) {
    return Complex(sqrt((module(c) + c.realPart) / 2),
                               sign(c.imaginaryPart) * sqrt((module(c) - c.realPart) / 2));
}
void Complex::print() const {
    if(realPart == 0 && imaginaryPart == 0)
        cout << realPart << endl;
    if(realPart && imaginaryPart > 0)
        cout << realPart << "+" << imaginaryPart << "i" << endl;
    if(realPart && imaginaryPart < 0)
        cout << realPart << imaginaryPart << "i" << endl;
    if(realPart && imaginaryPart == 0)
        cout << realPart << endl;
    if(realPart == 0 && imaginaryPart)
        cout << imaginaryPart << "i" << endl;
}
