/* 例7_16_1.cpp */

//构造函数不能为虚函数，但析构函数可以是虚函数 
#include <iostream>
using namespace std;
class Base {
public:
    Base(int size) {
        cout << "class Base" << endl;
        p = new char[size];
    }
    virtual ~Base() {       // 虚析构函数,如果不声明,派生类的不能析构 
        cout << "destruct class Base" << endl;
        delete[] p;
    }
private:
    char *p;
};
class Derived:public Base {
public:
    Derived(int size):Base(size) {
        cout << "class Derived" << endl;
        q = new char[size];
    }
    ~Derived() {
        cout << "destruct class Derived" << endl;
        delete[] q;
    }
private:
    char *q;
};
int main() {
    Base *ptr;
    ptr = new Derived(5);
    delete ptr;
    return 0;
}
