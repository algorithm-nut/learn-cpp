/* 例7_13.cpp */

//不同对象对同一命令做出不同响应的能力 
#include <iostream>
using namespace std;
class Base {
public:
    virtual void print() const {      // 虚函数
        cout << "class Base" << endl;
    }
};
class Derived:public Base {
public:
    virtual void print() const {      // 虚函数，virtual可以省略
        cout << "class Derived" << endl;
    }
};
int main() {
    Base b;                // 基类对象
    Derived d;             // 派生类对象
    b = d;                 // 派生类对象赋值给基类对象
    b.print();
    Base *p;               // 基类指针
    p = &d;                // 派生类对象地址赋值给基类指针
    p->print();
    Base &r = d;           // 派生类对象初始化基类引用
    r.print();
    return 0;
}
