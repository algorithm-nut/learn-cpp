/* linkedlist.h */
#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include <iostream>
#include <stdexcept>
using namespace std;
template <typename T>
class Node {
public:
    Node() {
        next = NULL;
    }
    Node(const T &value) {
        this->value = value;
        next = NULL;
    }
    T value;
    Node<T> *next;
};
template <typename T>
class LinkedList {
public:
    LinkedList();  
    void addFirst(const T &value);         //�����µ�ͷ��� 
    void addLast(const T &value);          //�����µ�β��� 
    void add(int index, const T &value);   //ָ��λ�ò����½�� 
    void removeFirst();          
    void removeLast();
    void removeAt(int index);
    T getFirst() const;        //��ȡͷ����ֵ 
    T getLast() const;         //��ȡβ����ֵ 
    void clear();
    bool isEmpty() const;
    int getSize() const;       //��ȡ������ 
    void print() const;        //���������ֵ 
private:
    Node<T> *head, *tail;
    int size;
};
template <typename T>
LinkedList<T>::LinkedList() {
    head = tail = NULL;
    size = 0;
}
template <typename T>
void LinkedList<T>::addFirst(const T &value) {
    Node<T> *temp = new Node<T>(value);
    temp->next = head;
    head = temp;
    ++size;
    if(tail == NULL)
        tail = head;
}
template <typename T>
void LinkedList<T>::addLast(const T &value) {
    if(tail == NULL)
        head = tail = new Node<T>(value);
    else {
        tail->next = new Node<T>(value);
        tail = tail->next;
    }
    ++size;
}
template <typename T>
void LinkedList<T>::add(int index, const T &value) {
    if(index == 0)
        addFirst(value);
    else if(index >= size)
        addLast(value);
    else {
        Node<T> *current = head;
        for(int i = 1; i < index; ++i)
            current = current->next;
        Node<T> *temp = current->next;
        current->next = new Node<T>(value);
        current->next->next = temp;
        ++size;
    }
}
template <typename T>
void LinkedList<T>::removeFirst() {
    if(head == NULL)
        throw runtime_error("������!");
    else {
        Node<T> *temp = head;
        head = head->next;
		if(head == NULL)
			tail = NULL;
        delete temp;
		--size;
    }
}
template <typename T>
void LinkedList<T>::removeLast() {
    if(tail == NULL)
        throw runtime_error("������!");
    else if(head == tail) {
        Node<T> *temp = head;
        head = tail = NULL;
        size = 0;
        delete temp;
    }
    else {
        Node<T> *current = head;
        while(current->next != tail)
            current = current->next;
        Node<T> *temp = tail;
        tail = current;
        tail->next = NULL;
        delete temp;
        --size;
    }
}
template <typename T>
void LinkedList<T>::removeAt(int index) {
    if(index < 0 || index >= size)
        throw runtime_error("�±�Խ��!");
    else if(index == 0)
        return removeFirst();
    else if(index == size - 1)
        return removeLast();
    else {
        Node<T> *previous = head;
        for(int i = 1; i < index; ++i)
            previous = previous->next;
        Node<T> *current = previous->next;
        previous->next = current->next;
        delete current;
        --size;
    }
}
template <typename T>
T LinkedList<T>::getFirst() const {
    if(head == NULL)
        throw runtime_error("������!");
    else
        return head->value;
}
template <typename T>
T LinkedList<T>::getLast() const {
    if(tail == NULL)
        throw runtime_error("������!");
    else
        return tail->value;
}
template <typename T>
void LinkedList<T>::clear() {
    while(head != NULL) {
        Node<T> *temp = head;
        head = head->next;
        delete temp;
    }
    tail = NULL;
}
template <typename T>
bool LinkedList<T>::isEmpty() const {
    return head == NULL;
}
template <typename T>
int LinkedList<T>::getSize() const {
    return size;
}
template <typename T>
void LinkedList<T>::print() const {
    Node<T> *current = head;
    while(current != NULL) {
        cout << current->value << " ";
        current = current->next;
    }
    cout << endl;
}
#endif
