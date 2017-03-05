#include <iostream>
#include <stdexcept>
using namespace std;

template <typename T>
class Vector {
public:
    Vector(int arraySize = 16);
    Vector(const Vector<T> &v);
    ~Vector();
    const Vector<T> &operator=(const Vector<T> &right);
    T &operator[](int index);
    T operator[](int index) const;
    int getSize() const;
private:
    T *pVector;
    int size;
};
template <typename T>
Vector<T>::Vector(int arraySize) {
    if(arraySize > 0)
        size = arraySize;
    else
        throw invalid_argument("数组长度必须是正整数!");
    pVector = new T[size];
}
template <typename T>
Vector<T>::Vector(const Vector<T> &v) {
    size = v.size;
    pVector = new T[size];
    for(int i = 0; i < size; ++i)
        pVector[i] = v.pVector[i];
}
template <typename T>
Vector<T>::~Vector() {
    delete[] pVector;
}
template <typename T>
const Vector<T> &Vector<T>::operator=(const Vector<T> &right) {
    if(this != &right) {
        if(size != right.size) {
            delete[] pVector;
            size = right.size;
            pVector = new T[size];
        }
        for(int i = 0; i < size; ++i)
            pVector[i] = right.pVector[i];
    }
    return *this;
}
template <typename T>
T &Vector<T>::operator[](int index) {
    if(index < 0 || index > size - 1)
        throw out_of_range("数组下标超出允许范围!");
    return pVector[index];
}
template <typename T>
T Vector<T>::operator[](int index) const {
    if(index < 0 || index > size - 1)
        throw out_of_range("数组下标超出允许范围!");
    return pVector[index];
}
template <typename T>
int Vector<T>::getSize() const {
    return size;
}

template <typename T>
void printVector(const Vector<T> &vector) {
	for(int i = 0; i < vector.getSize(); ++i)
		cout << vector[i] << " ";
	cout << endl;
}

//类模板声明和实现一般放在一个头文件里

 
int main() {
    Vector<int> vector1(7);
	for(int i = 0; i < vector1.getSize(); ++i)
        vector1[i] = 2 * i;
    cout << "数组vector1大小: " << vector1.getSize() << endl;
    cout << "数组vector1的值: ";
    printVector(vector1);
	Vector<int> vector2;
	for(int i = 0; i < vector2.getSize(); ++i)
        vector2[i] = 3 * i;
    cout << "数组vector2大小: " << vector2.getSize() << endl;
    cout << "数组vector2的值: ";
    printVector(vector2);
	cout << "用数组vector1拷贝构造vector3" << endl;
	Vector<int> vector3(vector1);
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
