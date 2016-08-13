/* Àı7_9.cpp */
#include <iostream>
using namespace std;
class Base1 {
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
class Base2 {
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
class Derived:public Base1, public Base2 {
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
int main() {
    Derived d;
    d.setX(333);
    cout << d.getX() << endl;
    d.Base1::setX(111);
    cout << d.Base1::getX() << endl;
    d.Base2::setX(222);
    cout << d.Base2::getX() << endl;
    return 0;
}
