/* ��7_10.cpp */
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
class Base1:public Base {
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
class Base2:public Base {
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
	//��������Դ�ͬһ����ӻ���̳ж��
	//��������Ҳ�����ͬ����Ա 
    Derived d;
    d.Base1::setX(111);
    cout << d.Base1::getX() << endl;
    d.Base2::setX(222);
    cout << d.Base2::getX() << endl;
    return 0;
}
