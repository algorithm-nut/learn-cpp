/* 例7_8.cpp */
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
class Base1 {
public:
    Base1(int y, int m, int d):date1(y, m, d) {
        cout << "class Base1" << endl;
    }
    ~Base1() {
        cout << "destruct class Base1" << endl;
    }
private:
    Date date1;     // 对象类型数据成员
};
class Base2 {
public:
    Base2(int y, int m, int d):date2(y, m, d) {
        cout << "class Base2" << endl;
    }
    ~Base2() {
        cout << "destruct class Base2" << endl;
    }
private:
    Date date2;     // 对象类型数据成员
};
class Derived:public Base1, public Base2 {
public:
    Derived(int y, int m, int d):Base1(y, m, d), Base2(y, m, d) {
        cout << "class Derived" << endl;
    }
    ~Derived() {
        cout << "destruct class Derived" << endl;
    }
};
int main() {
    Derived d(2013, 7, 10);
    return 0;
}
