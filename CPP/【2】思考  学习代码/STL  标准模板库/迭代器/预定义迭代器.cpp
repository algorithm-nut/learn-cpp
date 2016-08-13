/* Àý10_10.cpp */
#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<int> intVector;
    intVector.push_back(100);
    intVector.push_back(101);
    intVector.push_back(102);
    vector<int>::const_reverse_iterator pos;
    for(pos = intVector.rbegin(); pos != intVector.rend(); ++pos)
        cout << *pos << " ";
    cout << endl;
    vector<int>::iterator pos1 = intVector.begin();
    vector<int>::const_iterator pos2 = intVector.begin();
    *pos1 = 123;
    *pos2 = 123;    // ´íÎó
    cout << *pos1 << endl;
    cout << *pos2 << endl;
    return 0;
}
