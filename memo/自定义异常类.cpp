/* ��5_10.cpp */
#include <iostream>
#include <string>
using namespace std;
class CException {
public:
    CException() {
        message = "�쳣!";
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
    cout<< "�ں���func�д���CException���쳣" << endl;
    throw CException("CException�쳣!");      // ǿ���׳��쳣
}
int main() {
    cout << "����������" << endl;
    try {
        cout << "��try���У����ú���func" << endl;
        func();
    }
    catch(CException &ex) {
        cerr << "�����쳣: " << ex.what() << endl;
    }
    cout << "�ص����������쳣�ѱ�����" << endl;
    return 0;
}
