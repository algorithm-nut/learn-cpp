/* 例10_7.cpp */
#include <iostream>
#include <stack>
using namespace std;
void printStack(stack<int> &intStack);
int main() {
    stack<int> intStack;
    cout << "栈中当前元素数量: " << intStack.size() << endl;
    intStack.push(100);
    intStack.push(101);
    intStack.push(102);
    printStack(intStack);
    intStack.push(103);
    intStack.push(104);
    intStack.push(77);
    cout << intStack.top() << endl;
    intStack.top() = 105;
    printStack(intStack);
    return 0;
}
void printStack(stack<int> &intStack) {
     while(!intStack.empty()) {
        cout << intStack.top() << " ";
        intStack.pop();
    }
    cout << endl;
}
