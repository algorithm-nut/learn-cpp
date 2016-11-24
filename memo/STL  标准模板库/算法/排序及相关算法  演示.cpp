/* 例10_25.cpp */
#include <iostream>
#include <vector>
#include <list>
#include <set>
#include <iterator>
#include <functional>
#include <algorithm>
using namespace std;
int main() {
    int intArray[] = {1, 7, 2, 4, 8, 6, 5, 3, 9};
    vector<int> intVector(intArray, intArray + 10);
    copy(intVector.begin(), intVector.end(), ostream_iterator<int>(cout, " "));
    cout << endl;
    cout << "降序排序: ";
    sort(intVector.begin(), intVector.end(), greater<int>());
    copy(intVector.begin(), intVector.end(), ostream_iterator<int>(cout, " "));
    cout << endl;
    cout << "输入要查找的值: ";
    int value;
    cin >> value;
    if(binary_search(intVector.begin(), intVector.end(), value, greater<int>()))
        cout << value << "在intVector中!" << endl;
    else
        cout << value << "不在intVector中!" << endl;
    list<int> intList;
    set<int> intSet;
    for(int i = 1; i <= 6; ++i) {
        intList.push_back(i);
        intSet.insert(i + 2);
    }
    cout << "序列1: ";
    copy(intList.begin(), intList.end(), ostream_iterator<int>(cout, " "));
    cout << endl;
    cout << "序列2: ";
    copy(intSet.begin(), intSet.end(), ostream_iterator<int>(cout, " "));
    cout << endl;
    cout << "合并后的序列: ";
    merge(intList.begin(), intList.end(), intSet.begin(), intSet.end(),
                ostream_iterator<int>(cout, " "));
    return 0;
}
