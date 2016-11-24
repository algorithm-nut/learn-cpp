/* 例7_12.cpp */
#include <iostream>
using namespace std;
class Base {
public:
    Base(int x) {    //有参构造函数 
        this->x = x;
    }
    void setX(int x) {
        this->x = x;
    }
    int getX() const {
        return x;
    }
private:
    int x;
};
class Base1:virtual public Base {
public:
    Base1(int y):Base(y) {
        this->y = y;
    }
    void setY(int y) {
        this->y = y;
    }
    int getY() const {
        return y;
    }
private:
    int y;
};
class Base2:virtual public Base {
public:
    Base2(int z):Base(z) {  //虚基类只有有参构造函数，要初始化列表显式调用 
        this->z = z;
    }
    void setZ(int z) {
        this->z = z;
    }
    int getZ() const {
        return z;
    }
private:
    int z;
};
class Derived:public Base1, public Base2 {
public:
    Derived(int value):Base(value), Base1(value), Base2(value) { }
};
int main() {
    Derived d(111);
    cout << d.getX() << endl;
    return 0;
}
