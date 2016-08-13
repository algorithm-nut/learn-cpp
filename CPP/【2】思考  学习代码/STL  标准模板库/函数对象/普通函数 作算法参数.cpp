/* Àý10_17.cpp */
#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>
using namespace std;
int square(int value) {
    return value * value;
}
int main() {
    int intArray[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    copy(intArray, intArray + 10, ostream_iterator<int>(cout, " "));
    cout << endl;
    vector<int> intVector(10);
    transform(intArray, intArray + 10, intVector.begin(), square);
    copy(intVector.begin(), intVector.end(), ostream_iterator<int>(cout, " "));
    cout << endl;
    return 0;
}
