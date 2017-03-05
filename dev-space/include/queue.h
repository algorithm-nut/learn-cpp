/* queue.h */
#ifndef QUEUE_H
#define QUEUE_H
#include "linkedlist.h"
template <typename T>
class Queue {
public:
    Queue();
    void enqueue(const T &value);  //队尾插入新元素 
    T dequeue();                   //队头删除元素并返回该元素 
    void clear();
    bool isEmpty() const;
    int getSize() const;           //获取队列元素个数 
private:
    LinkedList<T> data;  //链表类的数据 
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
