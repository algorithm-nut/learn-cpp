/* 例10_27.cpp */
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
    cout << "和: " << accumulate(intVector.begin(), intVector.end(), 0) << endl;
    cout << "积: " << accumulate(intVector.begin(), intVector.end(), 1,
                                  multiplies<int>()) << endl;
    cout << "乘积的和: " << inner_product(intVector.begin(), intVector.end(),
                                            intVector.begin(), 0) << endl;
    cout << "和的乘积: " << inner_product(intVector.begin(), intVector.end(),
                                            intVector.begin(), 1, multiplies<int>(), plus<int>()) << endl;
    cout << "部分和: ";
    partial_sum(intVector.begin(), intVector.end(), ostream_iterator<int>(cout, " "));
    cout << endl;
    cout << "部分积: ";
    partial_sum(intVector.begin(), intVector.end(), ostream_iterator<int>(cout, " "),
                         multiplies<int>());
    cout << endl;
    cout << "相邻差: ";
    adjacent_difference(intVector.begin(), intVector.end(),
                                      ostream_iterator<int>(cout, " "));
    cout << endl;
    cout << "相邻积: ";
    adjacent_difference(intVector.begin(), intVector.end(),
                                      ostream_iterator<int>(cout, " "), multiplies<int>());
    cout << endl;
    return 0;
}
