/* 例5_10.cpp */
#include <iostream>
#include <string>
using namespace std;
class CException {
public:
    CException() {
        message = "异常!";
    }
    CException(string msg) {
        message = msg;
    }
    string what() {
        return message;
    }
private:
    string message;
};
void func() {
    cout<< "在函数func中触发CException类异常" << endl;
    throw CException("CException异常!");      // 强制抛出异常
}
int main() {
    cout << "进入主函数" << endl;
    try {
        cout << "在try块中，调用函数func" << endl;
        func();
    }
    catch(CException &ex) {
        cerr << "发生异常: " << ex.what() << endl;
    }
    cout << "回到主函数，异常已被处理" << endl;
    return 0;
}
