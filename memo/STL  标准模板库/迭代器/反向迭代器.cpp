/* Àý10_16.cpp */
#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>
using namespace std;
int main() {
    vector<int> intVector;
    for(int i = 1; i <= 9; ++i)
        intVector.push_back(i);
    vector<int>::iterator iter = intVector.begin();
    while(iter != intVector.end())
        cout << *iter++ << " ";
    cout << endl;
    vector<int>::reverse_iterator riter = intVector.rbegin();
    while(riter != intVector.rend())
        cout << *riter++ << " ";
    cout << endl;
    return 0;
}
