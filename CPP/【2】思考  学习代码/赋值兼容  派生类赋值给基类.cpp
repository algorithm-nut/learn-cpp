/* 例7_4.cpp */
#include <iostream>
using namespace std;
class Base {
public:
    void print() const {
        cout << "class Base" << endl;
    }
};
class Derived:public Base {
public:
    void print() const {   //尽管同名，但是这是派生类的 
        cout << "class Derived" << endl;
    }
};
int main() {
    Base b;              // 基类对象
    Derived d;           // 派生类对象
    b = d;                 
    b.print();           // 调用基类的print函数
    Base *p;             // 基类指针
    p = &d;              // 派生类对象地址赋值给基类指针
    p->print();          // 调用基类的print函数
    Base &r = d;         // 派生类对象初始化基类引用
    r.print();           // 调用基类的print函数
    return 0;
}
