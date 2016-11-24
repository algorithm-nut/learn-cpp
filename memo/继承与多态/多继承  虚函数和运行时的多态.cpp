/* 例7_14.cpp */
#include <iostream>
using namespace std;
class Base1 {
public:
    virtual void print() {      // 虚函数
        cout << "class Base1" << endl;
    }
};
class Base2 {
public:
    void print() {             // 非虚函数
        cout << "class Base2" << endl;
    }
};
class Derived:public Base1, public Base2 {
public:
    virtual void print() {
        cout << "class Derived" << endl;
    }
};
int main() {
    Base1 b1, *p1;
    p1 = &b1;
    p1->print();        // 调用Base1的print函数
    Base2 b2, *p2;
    p2 = &b2;
    p2->print();        // 调用Base2的print函数
    Derived d;
    p1 = &d;
    p1->print();        // 调用Derived的print函数
    p2 = &d;
    p2->print();        // 调用Base2的print函数
    return 0;
}
