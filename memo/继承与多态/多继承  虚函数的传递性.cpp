/* ��7_15.cpp */
#include <iostream>
using namespace std;
class Base {
public:
    virtual void print() const {      // �麯��
        cout << "class Base" << endl;
    }
};
class Base1:public Base {
public:
    virtual void print() const {      // �麯��
        cout << "class Base1" << endl;
    }
};
class Base2:public Base {
public:
    virtual void print() const {      // �麯��
        cout << "class Base2" << endl;
    }
};
class Derived:public Base1, public Base2 {
public:
    virtual void print() const {
        cout << "class Derived" << endl;
    }
};
int main() {
    Derived d;
    Base1 *p1;
    p1 = &d;
    p1->print();        // ����Derived��print����
    Base2 *p2;
    p2 = &d;
    p2->print();        // ����Derived��print����
    return 0;
}
