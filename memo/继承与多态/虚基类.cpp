/* 例7_11.cpp */
#include <iostream>
using namespace std;
class Base {
public:
    void setX(int x) {
        this->x = x;
    }
    int getX() const {
        return x;
    }
private:
    int x;
};
class Base1:virtual public Base {  //将同一个间接基类声明为虚基类--只有一份副本 
public:
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
};
int main() {
    Derived d;
    d.setX(111);
    cout << d.getX() << endl;
    return 0;
}
