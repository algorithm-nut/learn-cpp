/* 例10_12.cpp */
#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>
using namespace std;
void printVector(const vector<int> &intVector);
int main() {
    vector<int> intVector;
    for(int i = 1; i <= 9; ++i) {
        intVector.push_back(i);
    }
    printVector(intVector);
    vector<int>::iterator pos = intVector.begin();
    cout << "第一个元素: " << *pos << endl;
    advance(pos, 3);
    cout << "第四个元素: " << *pos << endl;
    advance(pos, -1);
    cout << "第三个元素: " << *pos << endl;
    cout << "当前迭代器位置与容器起始位置的距离: ";
    cout << distance(intVector.begin(), pos) << endl;
    cout << "交换容器第一个元素和最后一个元素: ";
    iter_swap(intVector.begin(), --intVector.end());
    printVector(intVector);
    return 0;
}
void printVector(const vector<int> &intVector) {
    for(int i = 0; i < intVector.size(); ++i)
        cout << intVector[i] << " ";
    cout << endl;
}
