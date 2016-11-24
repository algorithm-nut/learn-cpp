/* 例10_9.cpp */
#include <iostream>
#include <queue>
using namespace std;
void printPriorityQueue(priority_queue<int> &intPriorityQueue);
int main() {
    priority_queue<int> intPriorityQueue;
    cout << "优先队列中当前元素数量: " << intPriorityQueue.size() << endl;
    intPriorityQueue.push(100);
    intPriorityQueue.push(101);
    intPriorityQueue.push(102);
    printPriorityQueue(intPriorityQueue);
    intPriorityQueue.push(103);
    intPriorityQueue.push(104);
    intPriorityQueue.push(105);
    cout << intPriorityQueue.top() << endl;
    printPriorityQueue(intPriorityQueue);
    return 0;
}
void printPriorityQueue(priority_queue<int> &intPriorityQueue) {
     while(!intPriorityQueue.empty()) {
        cout << intPriorityQueue.top() << " ";
        intPriorityQueue.pop();
    }
    cout << endl;
}
