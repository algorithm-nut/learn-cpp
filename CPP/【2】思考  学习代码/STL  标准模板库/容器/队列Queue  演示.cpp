/* 例10_8.cpp */
#include <iostream>
#include <queue>
using namespace std;
void printQueue(queue<int> &intQueue);
int main() {
    queue<int> intQueue;
    cout << "队列中当前元素数量: " << intQueue.size() << endl;
    intQueue.push(100);
    intQueue.push(101);
    intQueue.push(102);
    printQueue(intQueue);
    intQueue.push(103);
    intQueue.push(104);
    intQueue.push(105);
    cout << intQueue.front() << endl;
    cout << intQueue.back() << endl;
    printQueue(intQueue);
    return 0;
}
void printQueue(queue<int> &intQueue) {
     while(!intQueue.empty()) {
        cout << intQueue.front() << " ";
        intQueue.pop();
    }
    cout << endl;
}
