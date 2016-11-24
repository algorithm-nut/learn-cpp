#include <iostream>
#include <stdexcept>
using namespace std;

class Date {
public:
    Date(int newYear = 1900, int newMonth = 1, int newDay = 1);
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
        throw invalid_argument("年参数值超出允许范围!");
    return *this;
}
Date &Date::setMonth(int newMonth) {
    if(newMonth >= 1 && newMonth <= 12)
        month = newMonth;
    else
        throw invalid_argument("月参数值超出允许范围!");
    return *this;
}
Date &Date::setDay(int newDay) {
	if(newDay >= 1 && newDay <= monthDays())
        day = newDay;
    else
        throw invalid_argument("日参数值超出允许范围!");
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


int main() {
    Date d;
    d.print();
    d.setYear(2013).setMonth(1).setDay(4);  //级联调用 
    d.print();
	d.setDate(2013, 7, 10).print();  //注意顺序 
    return 0;
}
