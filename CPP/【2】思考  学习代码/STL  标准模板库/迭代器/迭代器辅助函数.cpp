/* ��10_12.cpp */
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
    cout << "��һ��Ԫ��: " << *pos << endl;
    advance(pos, 3);
    cout << "���ĸ�Ԫ��: " << *pos << endl;
    advance(pos, -1);
    cout << "������Ԫ��: " << *pos << endl;
    cout << "��ǰ������λ����������ʼλ�õľ���: ";
    cout << distance(intVector.begin(), pos) << endl;
    cout << "����������һ��Ԫ�غ����һ��Ԫ��: ";
    iter_swap(intVector.begin(), --intVector.end());
    printVector(intVector);
    return 0;
}
void printVector(const vector<int> &intVector) {
    for(int i = 0; i < intVector.size(); ++i)
        cout << intVector[i] << " ";
    cout << endl;
}
