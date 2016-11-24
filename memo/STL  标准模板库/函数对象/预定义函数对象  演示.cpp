/* Àý10_20.cpp */
#include <iostream>
#include <set>
#include <vector>
#include <iterator>
#include <functional>
#include <algorithm>
using namespace std;
int main() {
    int intArray[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    copy(intArray, intArray + 10, ostream_iterator<int>(cout, " "));
    cout << endl;
    vector<int> intVector(10);
    transform(intArray, intArray + 10, intArray, intVector.begin(), multiplies<int>());
    copy(intVector.begin(), intVector.end(), ostream_iterator<int>(cout, " "));
    cout << endl;
    return 0;
}
