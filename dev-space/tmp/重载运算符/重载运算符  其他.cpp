#include <iostream>
#include <stdexcept>
using namespace std;

class Date {
public:
    Date(int year = 1900, int month = 1, int day = 1);
    void setDate(int year, int month, int day);
    int monthDays();
    Date &operator++();     // 前置++
    Date operator++(int);   // 后置++
    const Date &operator+=(int days);
    bool operator==(const Date &right);
    operator int();
private:
    int year;
    int month;
    int day;
    bool isLeapYear();
    void increment();
friend ostream &operator<<(ostream &out, const Date &d);
};

static const int DAYS_PER_MONTH[2][13] = {
    {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},
    {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}
};
Date::Date(int year, int month, int day) {
    setDate(year, month, day);
}
void Date::setDate(int year, int month, int day) {
    if(year >= 1900 && year <= 9999)
        this->year = year;
    else
        throw invalid_argument("年参数值超出允许范围!");
    if(month >= 1 && month <= 12)
        this->month = month;
    else
        throw invalid_argument("月参数值超出允许范围!");
    if(day >= 1 && day <= monthDays())
        this->day = day;
    else
        throw invalid_argument("日参数值超出允许范围!");
}
int Date::monthDays() {
	return DAYS_PER_MONTH[isLeapYear()][month];
}
Date &Date::operator++() {
    increment();
    return *this;
}
Date Date::operator++(int) {
    Date temp = *this;
    increment();
    return temp;
}
const Date &Date::operator+=(int days) {
    for(int i = 0; i < days; ++i)
        increment();
    return *this;
}
bool Date::operator==(const Date &right) {
    return ((year == right.year) &&
                 (month == right.month) &&
                 (day == right.day));
}
Date::operator int() {
	int days = day;
	for(int i = 1; i < month; ++i)
		days += DAYS_PER_MONTH[isLeapYear()][i];
	return days;
}
ostream &operator<<(ostream &out, const Date &d) {
    out << d.year << "-" << d.month << "-" << d.day << endl;
    return out;
}
bool Date::isLeapYear() {
    return ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0));
}
void Date::increment() {
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


int main() {
	Date d1(2012, 12, 27);
	Date d2;
	Date d3(1994, 7, 9);
	cout << "日期d1: " << d1;
	cout << "日期d1增加7天: " << (d1 += 7);
	cout << "日期d2: " << d2;
	cout << "更改日期d2" << endl;
	d2.setDate(2008, 2, 28);
	cout << "更改后的日期d2: " << d2;
	cout << "日期d2增加1天: " << ++d2;
	cout << "日期d2: " << d2;
	cout << "日期d3: " << d3;
	cout << "日期d3增加1天: " << d3++;
	cout << "日期d3: " << d3;
	int days = d3;
	cout << "是该年第" << days << "天" << endl;
    return 0;
}
