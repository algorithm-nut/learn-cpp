/* vector.h */
#ifndef VECTOR_H
#define VECTOR_H
#include <stdexcept>
using namespace std;
template <typename T>
class Vector {
public:
    Vector(int size);					                // ���캯��
    Vector(int size, const T &value);         // ���캯��
    Vector(const Vector<T> &v);		        // �������캯��
    virtual ~Vector();							        // ��������
    const Vector<T> &operator=(const Vector<T> &right); // ���ظ�ֵ�����
    T &operator[](int index);				        // �����±������
    T operator[](int index) const;		        // �����±������
    int getSize() const;
    void resize(int size);
private:
    T *pVector;      // ָ�룬ָ��������Ԫ�صĶ�̬�����ڴ�ռ�
    int size;           // ���鳤��
};
template <typename T>
Vector<T>::Vector(int size) {
    if(size > 0)
        this->size = size;
    else
        throw invalid_argument("���鳤�ȱ�����������!");
    pVector = new T[size];
}
template <typename T>
Vector<T>::Vector(int size, const T &value) {
    if(size > 0)
        this->size = size;
    else
        throw invalid_argument("���鳤�ȱ�����������!");
    pVector = new T[size];
    for(int i = 0; i < size; ++i)
        pVector[i] = value;
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
void Vector<T>::resize(int size) {
	if(size > 0) {
		if(this->size != size) {
			T *old = pVector;
			pVector = new T[size];
			int newSize = (this->size > size) ? size : this->size;
			for(int i = 0; i < newSize; ++i)
				pVector[i] = old[i];
			this->size = size;
			delete[] old;
		}
	}
	else
		 throw invalid_argument("���鳤�ȱ�����������!");
}
#endif
