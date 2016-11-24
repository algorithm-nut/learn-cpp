/* 例5_5.cpp */
#include <iostream>
using namespace std;
class C {
public:
    C() {
        x = 0;
    }
    void f1() {
        x= 10;
        cout << "数据成员x: " << x << endl;
        int x = 7;                  // 局部变量
		x = x + 1; 
        cout << "局部变量x: " << x << endl;
        cout << "数据成员x: " << C::x << endl;
    }
    void f2() {
        f3();
    }
    void f3() {
        static int x = 0;       // 局部静态变量
        ++x;
        cout << "局部静态变量x: " << x << endl;
    }
private:
    int x;                            // 数据成员
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
