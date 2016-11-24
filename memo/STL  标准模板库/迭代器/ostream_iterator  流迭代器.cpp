/* Àý10_13.cpp */
#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>
using namespace std;
int main() {
    ostream_iterator<int> outputIterator(cout, "\n");
    *outputIterator = 12;
    ++outputIterator;
    *outputIterator = 77;
    ++outputIterator;
    *outputIterator = 34;
    vector<int> intVector;
    for(int i = 0; i < 10; ++i)
        intVector.push_back(i);
    copy(intVector.begin(), intVector.end(), ostream_iterator<int>(cout, " "));
    cout << endl;
    return 0;
}
