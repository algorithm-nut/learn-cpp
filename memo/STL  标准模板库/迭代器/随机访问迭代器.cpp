/* 例10_11.cpp */
#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<int> intVector;
    for(int i = 0; i < 10; ++i)
        intVector.push_back(i);
    cout << "向量中的元素个数: " << intVector.end() - intVector.begin() << endl;
    vector<int>::iterator pos;
    for(pos = intVector.begin(); pos < intVector.end(); ++pos)
        cout << *pos << " ";
    cout << endl;
    for(int i = 0; i < intVector.size(); ++i)
        cout << intVector[i] << " ";
    cout << endl;
    for(pos = intVector.begin(); pos < intVector.end() - 1; pos += 2)
        cout << *pos << " ";
    cout << endl;
    return 0;
}
