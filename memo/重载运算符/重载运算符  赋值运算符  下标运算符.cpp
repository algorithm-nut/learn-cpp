#include <iostream>
#include <stdexcept>
using namespace std;

class Vector {
public:
    Vector(int arraySize = 16);
    Vector(const Vector &v);
    ~Vector();
    const Vector &operator=(const Vector &right);       // ���ظ�ֵ�����
    int &operator[](int index);                         // �����±������
    int operator[](int index) const;                    // �����±������
    int getSize() const;
private:
    int *pVector;
    int size;
};

Vector::Vector(int arraySize) {
    if(arraySize > 0)
        size = arraySize;
    else
        throw invalid_argument("���鳤�ȱ�����������!");
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
    if(this != &right) {      //��ֹ����֮����໥��ֵ 
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
        throw out_of_range("�����±곬������Χ!");
    return pVector[index];    //��ֵ���±�����  �൱�ڸ��������� 
}
int Vector::operator[](int index) const {
    if(index < 0 || index > size - 1)
        throw out_of_range("�����±곬������Χ!");
    return pVector[index];    //��ֵ���±�����  �൱�ڷ��������� 
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
    cout << "����vector1��С: " << vector1.getSize() << endl;
    cout << "����vector1��ֵ: ";
    printVector(vector1);
	Vector vector2;
	for(int i = 0; i < vector2.getSize(); ++i)
        vector2[i] = 3 * i;
    cout << "����vector2��С: " << vector2.getSize() << endl;
    cout << "����vector2��ֵ: ";
    printVector(vector2);
	cout << "������vector1��������vector3" << endl;
	Vector vector3(vector1);
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
