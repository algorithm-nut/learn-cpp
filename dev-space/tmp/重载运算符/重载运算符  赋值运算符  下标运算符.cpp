#include <iostream>
#include <stdexcept>
using namespace std;

class Vector {
public:
    Vector(int arraySize = 16);
    Vector(const Vector &v);
    ~Vector();
    const Vector &operator=(const Vector &right);       // 重载赋值运算符
    int &operator[](int index);                         // 重载下标运算符
    int operator[](int index) const;                    // 重载下标运算符
    int getSize() const;
private:
    int *pVector;
    int size;
};

Vector::Vector(int arraySize) {
    if(arraySize > 0)
        size = arraySize;
    else
        throw invalid_argument("数组长度必须是正整数!");
    pVector = new int[size];
}
Vector::Vector(const Vector &v) {
    size = v.size;
    pVector = new int[size];
    for(int i = 0; i < size; ++i)
        pVector[i] = v.pVector[i];
}
Vector::~Vector() {
    delete[] pVector;
}
const Vector &Vector::operator=(const Vector &right) {
    if(this != &right) {      //防止自身之间的相互赋值 
        if(size != right.size) {
            delete[] pVector;
            size = right.size;
            pVector = new int[size];
        }
        for(int i = 0; i < size; ++i)
            pVector[i] = right.pVector[i];
    }
    return *this;
}
int &Vector::operator[](int index) {
    if(index < 0 || index > size - 1)
        throw out_of_range("数组下标超出允许范围!");
    return pVector[index];    //左值的下标重载  相当于更改器函数 
}
int Vector::operator[](int index) const {
    if(index < 0 || index > size - 1)
        throw out_of_range("数组下标超出允许范围!");
    return pVector[index];    //右值的下标重载  相当于访问器函数 
}
int Vector::getSize() const {
    return size;
}

void printVector(const Vector &vector) {
	for(int i = 0; i < vector.getSize(); ++i)
		cout << vector[i] << " ";
	cout << endl;
}
int main() {
    Vector vector1(7);
	for(int i = 0; i < vector1.getSize(); ++i)
        vector1[i] = 2 * i;
    cout << "数组vector1大小: " << vector1.getSize() << endl;
    cout << "数组vector1的值: ";
    printVector(vector1);
	Vector vector2;
	for(int i = 0; i < vector2.getSize(); ++i)
        vector2[i] = 3 * i;
    cout << "数组vector2大小: " << vector2.getSize() << endl;
    cout << "数组vector2的值: ";
    printVector(vector2);
	cout << "用数组vector1拷贝构造vector3" << endl;
	Vector vector3(vector1);
	cout << "数组vector3大小: " << vector3.getSize() << endl;
    cout << "数组vector3的值: ";
    printVector(vector3);
	cout << "给vector1[15]赋值" << endl;
	try {
		vector1[15] = 1000;
	}
	catch(out_of_range &ex) {
		cerr << "发生异常: " << ex.what() << endl;
	}
	cout << "数组vector2赋值给vector1" << endl;
	vector1 = vector2;
	cout << "数组vector1大小: " << vector1.getSize() << endl;
    cout << "数组vector1的值: ";
    printVector(vector1);
    return 0;
}
