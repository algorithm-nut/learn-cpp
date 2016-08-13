/* ��7_4.cpp */
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
    void print() const {   //����ͬ������������������� 
        cout << "class Derived" << endl;
    }
};
int main() {
    Base b;              // �������
    Derived d;           // ���������
    b = d;                 
    b.print();           // ���û����print����
    Base *p;             // ����ָ��
    p = &d;              // ����������ַ��ֵ������ָ��
    p->print();          // ���û����print����
    Base &r = d;         // ����������ʼ����������
    r.print();           // ���û����print����
    return 0;
}
