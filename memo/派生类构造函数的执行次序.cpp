/* 例7_6.cpp */
#include <iostream>
using namespace std;
class Date {
public:
    Date(int y, int m, int d) {
        year = y;
        month = m;
        day = d;
        cout << "class Date" << endl;
    }
    ~Date() {
        cout << "destruct class Date" << endl;
    }
private:
    int year;
    int month;
    int day;
};
class Base {
public:
    Base(int y, int m, int d):date1(y, m, d) {
        cout << "class Base" << endl;
    }
    ~Base() {
        cout << "destruct class Base" << endl;
    }
private:
    Date date1;     // 对象类型数据成员
};
class Derived:public Base {
public:
    Derived(int y, int m, int d):Base(y, m, d), date2(y, m, d) {
        cout << "class Derived" << endl;
    }
    ~Derived() {
        cout << "destruct class Derived" << endl;
    }
private:
    Date date2;     // 对象类型数据成员
};
int main() {
    Derived d(2013, 3, 10);
    return 0;
    //基类的构造函数
	//基类对象成员的构造函数
	//基类构造函数体内的内容
	//派生类对象成员的构造函数
	//派生构造函数体内的内容 
} 
