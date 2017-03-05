/* stack.h */
#ifndef STACK_H
#define STACK_H
#include "vector.h"   //data用数组存 
template <typename T>
class Stack {
public:
    Stack(int size = 16);              // 构造函数
    Stack(const Stack<T> &v);          // 拷贝构造函数
    void clear();                      // 将栈设置为空栈
    bool isEmpty() const;              // 判断栈是否为空
    void push(T value);                // 入栈
    T pop();                           // 出栈
    T peek() const;                    // 获取栈顶元素
private:
    Vector<T> data;                    // 存放栈元素,数组类型 
    int top;                           // 记录栈顶位置
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
