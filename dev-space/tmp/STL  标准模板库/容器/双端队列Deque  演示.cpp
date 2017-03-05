/* 例10_2.cpp */
#include <iostream>
#include <deque>
using namespace std;
int main() {
    deque<int> deq;
    cout << "队列当前有效元素数量: " << deq.size() << endl;
    cout << "队列可以容纳的最大元素数量: " << deq.max_size() << endl;
    for(int i = 5; i >= 0; --i)
        deq.push_front(i);
    for(int i = 6; i < 10; ++i)
        deq.push_back(i);
    for(int i = 0; i < deq.size(); ++i)
        cout << deq[i] << " ";
    cout << endl;
    deq.assign(5, 1);
    for(int i = 0; i < deq.size(); ++i)
        cout << deq[i] << " ";
    cout << endl;
    deq.front() = 100;
    deq[1] = 101;
    deq.at(2) = 102;
    deq.back() = 104;
    deq.insert(deq.begin(), -999);
    deq.insert(deq.end(), 999);
    deque<int>::iterator pos = deq.begin();
    *(pos + 4) = 103;
    for(int i = 0; i < deq.size(); ++i)
        cout << deq[i] << " ";
    cout << endl;
    deq.erase(pos +1, pos +3);
    deq.pop_front();
    deq.pop_back();
    for(pos = deq.begin(); pos != deq.end(); ++pos)
        cout << *pos << " ";
    cout << endl;
    deq.clear();
    if(deq.empty())
        cout << "空队列!" << endl;
    return 0;
}
