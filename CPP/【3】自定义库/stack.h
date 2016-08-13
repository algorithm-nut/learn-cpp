/* stack.h */
#ifndef STACK_H
#define STACK_H
#include "vector.h"   //data������� 
template <typename T>
class Stack {
public:
    Stack(int size = 16);              // ���캯��
    Stack(const Stack<T> &v);          // �������캯��
    void clear();                      // ��ջ����Ϊ��ջ
    bool isEmpty() const;              // �ж�ջ�Ƿ�Ϊ��
    void push(T value);                // ��ջ
    T pop();                           // ��ջ
    T peek() const;                    // ��ȡջ��Ԫ��
private:
    Vector<T> data;                    // ���ջԪ��,�������� 
    int top;                           // ��¼ջ��λ��
};
template <typename T>
Stack<T>::Stack(int size):data(size) {
    clear();
}
template <typename T>
Stack<T>::Stack(const Stack<T> &v)
    :data(v.data), top(v.top) { }
template <typename T>
void Stack<T>::clear() {
    top = 0;
}
template <typename T>
bool Stack<T>::isEmpty() const {
    return top == 0;
}
template <typename T>
void Stack<T>::push(T value) {
    if(top >= data.getSize())
        data.resize(2 * data.getSize());
    data[top++] = value;
}
template <typename T>
T Stack<T>::pop() {
    return data[--top];
}
template <typename T>
T Stack<T>::peek() const {
	return data[top - 1];
}
#endif
