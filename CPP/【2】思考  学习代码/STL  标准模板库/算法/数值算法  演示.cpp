/* ��10_27.cpp */
#include <iostream>
#include <vector>
#include <iterator>
#include <functional>
#include <algorithm>
#include <numeric>
using namespace std;
int main() {
    vector<int> intVector;
    for(int i = 1; i <= 9; ++i)
        intVector.push_back(i);
    copy(intVector.begin(), intVector.end(), ostream_iterator<int>(cout, " "));
    cout << endl;
    cout << "��: " << accumulate(intVector.begin(), intVector.end(), 0) << endl;
    cout << "��: " << accumulate(intVector.begin(), intVector.end(), 1,
                                  multiplies<int>()) << endl;
    cout << "�˻��ĺ�: " << inner_product(intVector.begin(), intVector.end(),
                                            intVector.begin(), 0) << endl;
    cout << "�͵ĳ˻�: " << inner_product(intVector.begin(), intVector.end(),
                                            intVector.begin(), 1, multiplies<int>(), plus<int>()) << endl;
    cout << "���ֺ�: ";
    partial_sum(intVector.begin(), intVector.end(), ostream_iterator<int>(cout, " "));
    cout << endl;
    cout << "���ֻ�: ";
    partial_sum(intVector.begin(), intVector.end(), ostream_iterator<int>(cout, " "),
                         multiplies<int>());
    cout << endl;
    cout << "���ڲ�: ";
    adjacent_difference(intVector.begin(), intVector.end(),
                                      ostream_iterator<int>(cout, " "));
    cout << endl;
    cout << "���ڻ�: ";
    adjacent_difference(intVector.begin(), intVector.end(),
                                      ostream_iterator<int>(cout, " "), multiplies<int>());
    cout << endl;
    return 0;
}
