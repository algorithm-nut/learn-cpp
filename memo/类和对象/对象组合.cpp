#include <iostream>
#include <stdexcept>
using namespace std;

class Date {
public:
    Date(int newYear = 1900, int newMonth = 1, int newDay = 1);
    ~Date();
    Date &setDate(int newYear, int newMonth, int newDay);
    Date &setYear(int newYear);
    Date &setMonth(int newMonth);
    Date &setDay(int newDay);
    int getYear() const;
    int getMonth() const;
    int getDay() const;
    int monthDays();
    void print() const;
private:
    int year;
    int month;
    int day;
    bool isLeapYear();
};

Date::Date(int newYear, int newMonth, int newDay) {
    setDate(newYear, newMonth, newDay);
    cout << "����Date����: ";
    print();
}
Date::~Date() {
    cout << "����Date����: ";
    print();
}
Date &Date::setDate(int newYear, int newMonth, int newDay) {
    setYear(newYear);
    setMonth(newMonth);
    setDay(newDay);
    return *this;
}
Date &Date::setYear(int newYear) {
    if(newYear >= 1900 && newYear <= 9999)
        year = newYear;
    else
        throw invalid_argument("�����ֵ��������Χ!");
    return *this;
}
Date &Date::setMonth(int newMonth) {
    if(newMonth >= 1 && newMonth <= 12)
        month = newMonth;
    else
        throw invalid_argument("�²���ֵ��������Χ!");
    return *this;
}
Date &Date::setDay(int newDay) {
	if(newDay >= 1 && newDay <= monthDays())
        day = newDay;
    else
        throw invalid_argument("�ղ���ֵ��������Χ!");
    return *this;
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
void Date::print() const {
    cout << year << "-" << month << "-" << day << endl;
}
bool Date::isLeapYear() {
    return ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0));
}

class Employee {
public:
    Employee(const string &newName, const Date &newDayOfBirth,
                     const Date &newDayOfHire);
    ~Employee();
    void print() const;
private:
    string name;
    Date dayOfBirth;
    Date dayOfHire;
};

Employee::Employee(const string &newName, const Date &newDayOfBirth,
                                   const Date &newDayOfHire)
    :name(newName), dayOfBirth(newDayOfBirth), dayOfHire(newDayOfHire) {
    cout << "����Employee����: " << name << endl;
}
Employee::~Employee() {
    cout << "����Employee����: " << name << endl;
}
void Employee::print() const {
    cout << "����: " << name << endl;
    cout << "��������: ";
    dayOfBirth.print();
    cout << "��������: ";
    dayOfHire.print();
}

int main() {
    Date birth(1978, 11, 11);
    Date hire(2000, 8, 8);
    Employee engineer("����", birth, hire);
    engineer.print();
    return 0;
}
