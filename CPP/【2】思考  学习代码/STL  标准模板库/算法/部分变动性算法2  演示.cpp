/* 例10_24.cpp */
#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>
using namespace std;
int square(int value) {
    return value * value;
}
int main() {
    int intArray[] = {1, 7, 7, 8, 1, 4, 4, 5, 1, 6, 6, 6, 9, 1, 5, 3, 3};
    vector<int> intVector(intArray, intArray + 17);
    copy(intVector.begin(), intVector.end(), ostream_iterator<int>(cout, " "));
    cout << endl;
    cout << "交换元素: " << endl;
    swap_ranges(intVector.begin(), intVector.begin() + 8, intVector.begin() + 8);
    copy(intVector.begin(), intVector.end(), ostream_iterator<int>(cout, " "));
    cout << endl;
    vector<int>::iterator pos;
    cout << "删除相邻的重复元素: " << endl;
    pos = unique(intVector.begin(), intVector.end());
    copy(intVector.begin(), pos, ostream_iterator<int>(cout, " "));
    cout << endl;
    copy(intArray, intArray + 17, intVector.begin());
    copy(intVector.begin(), intVector.end(), ostream_iterator<int>(cout, " "));
    cout << endl;
    cout << "将1替换为111: " << endl;
    replace(intVector.begin(), intVector.end(), 1, 111);
    copy(intVector.begin(), intVector.end(), ostream_iterator<int>(cout, " "));
    cout << endl;
    cout << "删除111: ";
    pos = remove(intVector.begin(), intVector.end(), 111);
    copy(intVector.begin(), pos, ostream_iterator<int>(cout, " "));
    cout << endl;
    cout << "平方: ";
    transform(intVector.begin(), intVector.end(), intVector.begin(), square),
    copy(intVector.begin(), pos, ostream_iterator<int>(cout, " "));
    cout << endl;
    return 0;
}
