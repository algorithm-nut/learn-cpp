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
        throw invalid_argument("���鳤�ȱ�����������!");
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
        throw out_of_range("�����±곬������Χ!");
    return pVector[index];
}
template <typename T>
T Vector<T>::operator[](int index) const {
    if(index < 0 || index > size - 1)
        throw out_of_range("�����±곬������Χ!");
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

//��ģ��������ʵ��һ�����һ��ͷ�ļ���

 
int main() {
    Vector<int> vector1(7);
	for(int i = 0; i < vector1.getSize(); ++i)
        vector1[i] = 2 * i;
    cout << "����vector1��С: " << vector1.getSize() << endl;
    cout << "����vector1��ֵ: ";
    printVector(vector1);
	Vector<int> vector2;
	for(int i = 0; i < vector2.getSize(); ++i)
        vector2[i] = 3 * i;
    cout << "����vector2��С: " << vector2.getSize() << endl;
    cout << "����vector2��ֵ: ";
    printVector(vector2);
	cout << "������vector1��������vector3" << endl;
	Vector<int> vector3(vector1);
	cout << "����vector3��С: " << vector3.getSize() << endl;
    cout << "����vector3��ֵ: ";
    printVector(vector3);
	cout << "��vector1[15]��ֵ" << endl;
	try {
		vector1[15] = 1000;
	}
	catch(out_of_range &ex) {
		cerr << "�����쳣: " << ex.what() << endl;
	}
	cout << "����vector2��ֵ��vector1" << endl;
	vector1 = vector2;
	cout << "����vector1��С: " << vector1.getSize() << endl;
    cout << "����vector1��ֵ: ";
    printVector(vector1);
    return 0;
}
