#include <iostream>
#include <iomanip>
#include <stdexcept>
using namespace std;


/* ����Date�� --------------------------------------------- */
class Date {
public:
    Date(int year = 1900, int month = 1, int day = 1);
    void setDate(int year, int month, int day);
    void setYear(int year);
    void setMonth(int month);
    void setDay(int day);
    int getYear() const;
    int getMonth() const;
    int getDay() const;
    int monthDays();
    void nextDay();
    void printDate() const;
private:
    int year;
    int month;
    int day;
    bool isLeapYear();
};

Date::Date(int year, int month, int day) {
    setDate(year, month, day);
}
void Date::setDate(int year, int month, int day) {
    setYear(year);
    setMonth(month);
    setDay(day);
}
void Date::setYear(int year) {
    if(year >= 1900 && year <= 9999)
        this->year = year;
    else
        throw invalid_argument("�����ֵ��������Χ!");
}
void Date::setMonth(int month) {
    if(month >= 1 && month <= 12)
        this->month = month;
    else
        throw invalid_argument("�²���ֵ��������Χ!");
}
void Date::setDay(int day) {
	if(day >= 1 && day <= monthDays())
        this->day = day;
    else
        throw invalid_argument("�ղ���ֵ��������Χ!");
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
                throw out_of_range("���ֵ��������Χ!");
		}
	}
}
void Date::printDate() const {
    cout << year << "-" << month << "-" << day << endl;
}
bool Date::isLeapYear() {
    return ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0));
}



/* ����Time�� --------------------------------------------- */
class Time {
public:
    Time(int hour = 0, int minute = 0, int second = 0);
    void setTime(int hour, int minute, int second);
    void setHour(int hour);
    void setMinute(int minute);
    void setSecond(int second);
    int getHour() const;
    int getMinute() const;
    int getSecond() const;
    void printTime24() const;
    void printTime12() const;
    void tick();
private:
    int hour;
    int minute;
    int second;
};

Time::Time(int hour, int minute, int second) {
    setTime(hour, minute, second);
}
void Time::setTime(int hour, int minute, int second) {
    setHour(hour);
    setMinute(minute);
    setSecond(second);
}
void Time::setHour(int hour) {
    if(hour >= 0 && hour < 24)
        this->hour = hour;
    else
        throw invalid_argument("Сʱ����ֵ��Χ������0-23!");
}
void Time::setMinute(int minute) {
    if(minute >= 0 && minute < 60)
        this->minute = minute;
    else
        throw invalid_argument("���Ӳ���ֵ��Χ������0-59!");
}
void Time::setSecond(int second) {
    if(second >= 0 && second < 60)
        this->second = second;
    else
        throw invalid_argument("�����ֵ��Χ������0-59!");
}
int Time::getHour() const {
    return hour;
}
int Time::getMinute() const {
    return minute;
}
int Time::getSecond() const {
    return second;
}
void Time::printTime24() const {
    cout << setfill('0') << setw(2) << hour << ":"
            << setw(2) << minute << ":" << setw(2) << second << endl;
}
void Time::printTime12() const {
    cout << (hour < 12 ? "����" : "����")
            << ((hour == 0 || hour == 12) ? 12 : hour % 12) << ":"
            << setfill('0') << setw(2) << minute << ":"
            << setw(2) << second << endl;
}
void Time::tick() {
	++second;
	if(second >= 60) {
		second -= 60;
		++minute;
		if(minute >= 60) {
			minute -= 60;
			++hour;
			hour %= 24;
		}
	}
}

/*  ��ʾ��̳� --------------------------------------------- */
class DateTime:public Date, public Time {
public:
    DateTime(int year = 1900, int month = 1, int day = 1,
                    int hour = 0, int minute = 0, int second = 0)
        :Date(year, month, day), Time(hour, minute, second) { }
};


int main() {
	DateTime dt(2013, 1, 4, 18, 18, 18);
	cout << "���ں�ʱ��:" << endl;
	dt.printDate();
	dt.printTime24();
	dt.setDate(2013, 3, 12);
	dt.setTime(1, 2, 3);
	cout << "���ں�ʱ��:" << endl;
	dt.printDate();
	dt.printTime12();
    return 0;
}
