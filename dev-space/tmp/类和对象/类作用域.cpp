/* ��5_5.cpp */
#include <iostream>
using namespace std;
class C {
public:
    C() {
        x = 0;
    }
    void f1() {
        x= 10;
        cout << "���ݳ�Աx: " << x << endl;
        int x = 7;                  // �ֲ�����
		x = x + 1; 
        cout << "�ֲ�����x: " << x << endl;
        cout << "���ݳ�Աx: " << C::x << endl;
    }
    void f2() {
        f3();
    }
    void f3() {
        static int x = 0;       // �ֲ���̬����
        ++x;
        cout << "�ֲ���̬����x: " << x << endl;
    }
private:
    int x;                            // ���ݳ�Ա
};
int main() {
    C c1, c2;
    c1.f1();
    c1.f3();
    c2.f3();
    c1.f2();
    c1.f3();
    return 0;
}
