/* 例10_22.cpp */
#include <iostream>
#include <vector>
#include <iterator>
#include <functional>
#include <algorithm>
using namespace std;
void print(int value) {
    cout << value << " ";
}
bool isEven(int value) {
    return value % 2 == 0;
}
int main() {
    int intArray[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    vector<int> intVector(intArray, intArray + 9);
    for_each(intVector.begin(), intVector.end(), print);
    cout << endl;
    int num = count(intVector.begin(), intVector.end(), 4);
    cout << "序列中4的个数: " << num << endl;
    num = count_if(intVector.begin(), intVector.end(), isEven);
    cout << "序列中偶数的个数: " << num << endl;
    num = *min_element(intVector.begin(), intVector.end());
    cout << "序列中的最小值: " << num << endl;
    num = *max_element(intVector.begin(), intVector.end());
    cout << "序列中的最大值: " << num << endl;
    cout << "输入要查找的值: ";
    cin >> num;
    vector<int>::iterator pos;
    pos = find(intVector.begin(), intVector.end(), num);
    if(pos != intVector.end())
        cout << "找到! 所处位置: " << pos - intVector.begin() << endl;
    else
        cout << "序列中不存在" << num << endl;
    pos = find_if(intVector.begin(), intVector.end(), bind2nd(greater<int>(), 7));
    if(pos != intVector.end())
        cout << "序列中第一个大于7的元素值: " << *pos << endl;
    else
        cout << "序列中不存在大于7的元素值" << endl;
    return 0;
}
