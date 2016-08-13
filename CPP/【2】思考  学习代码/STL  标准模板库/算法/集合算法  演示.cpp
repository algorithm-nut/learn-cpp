/* 例10_26.cpp */
#include <iostream>
#include <vector>
#include <iterator>
#include <functional>
#include <algorithm>
using namespace std;
int main() {
    int intArray1[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int intArray2[] = {1, 3, 6, 9, 12};
    cout << "intArray1: ";
    copy(intArray1, intArray1 + 8, ostream_iterator<int>(cout, " "));
    cout << endl;
    cout << "intArray2: ";
    copy(intArray2, intArray2 + 5, ostream_iterator<int>(cout, " "));
    cout << endl;
    if(includes(intArray1, intArray1 + 8,  intArray2, intArray2 + 5))
        cout << "intArray2是intArray1的子集!" << endl;
    else
        cout << "intArray2不是intArray1的子集!" << endl;
    vector<int> intVector(15);
    vector<int>::iterator last;
    last = set_union(intArray1, intArray1 + 8, intArray2, intArray2 + 5,
                                intVector.begin());
    cout << "并集: ";
    copy(intVector.begin(), last, ostream_iterator<int>(cout, " "));
    cout << endl;
    last = set_intersection(intArray1, intArray1 + 8, intArray2, intArray2 + 5,
                                          intVector.begin());
    cout << "交集: ";
    copy(intVector.begin(), last, ostream_iterator<int>(cout, " "));
    cout << endl;
    last = set_difference(intArray1, intArray1 + 8, intArray2, intArray2 + 5,
                                       intVector.begin());
    cout << "差集: ";
    copy(intVector.begin(), last, ostream_iterator<int>(cout, " "));
    cout << endl;
    last = set_symmetric_difference(intArray1, intArray1 + 8, intArray2,
                                                          intArray2 + 5, intVector.begin());
    cout << "对称差集: ";
    copy(intVector.begin(), last, ostream_iterator<int>(cout, " "));
    cout << endl;
    return 0;
}
