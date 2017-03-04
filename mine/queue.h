/* queue.h */
#ifndef QUEUE_H
#define QUEUE_H
#include "linkedlist.h"
template <typename T>
class Queue {
public:
    Queue();
    void enqueue(const T &value);  //��β������Ԫ�� 
    T dequeue();                   //��ͷɾ��Ԫ�ز����ظ�Ԫ�� 
    void clear();
    bool isEmpty() const;
    int getSize() const;           //��ȡ����Ԫ�ظ��� 
private:
    LinkedList<T> data;  //����������� 
};
template <typename T>
Queue<T>::Queue() { }
template <typename T>
void Queue<T>::enqueue(const T &value) {
    data.addLast(value);
}
template <typename T>
T Queue<T>::dequeue() {
    T temp = data.getFirst();
    data.removeFirst();
	return temp;
}
template <typename T>
void Queue<T>::clear() {
    data.clear();
}
template <typename T>
bool Queue<T>::isEmpty() const {
    return data.isEmpty();
}
template <typename T>
int Queue<T>::getSize() const {
    return data.getSize();
}
#endif
