/* ��7_13.cpp */

//��ͬ�����ͬһ����������ͬ��Ӧ������ 
#include <iostream>
using namespace std;
class Base {
public:
    virtual void print() const {      // �麯��
        cout << "class Base" << endl;
    }
};
class Derived:public Base {
public:
    virtual void print() const {      // �麯����virtual����ʡ��
        cout << "class Derived" << endl;
    }
};
int main() {
    Base b;                // �������
    Derived d;             // ���������
    b = d;                 // ���������ֵ���������
    b.print();
    Base *p;               // ����ָ��
    p = &d;                // ����������ַ��ֵ������ָ��
    p->print();
    Base &r = d;           // ����������ʼ����������
    r.print();
    return 0;
}
