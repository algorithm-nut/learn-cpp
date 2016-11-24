/* ��10_22.cpp */
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
    cout << "������4�ĸ���: " << num << endl;
    num = count_if(intVector.begin(), intVector.end(), isEven);
    cout << "������ż���ĸ���: " << num << endl;
    num = *min_element(intVector.begin(), intVector.end());
    cout << "�����е���Сֵ: " << num << endl;
    num = *max_element(intVector.begin(), intVector.end());
    cout << "�����е����ֵ: " << num << endl;
    cout << "����Ҫ���ҵ�ֵ: ";
    cin >> num;
    vector<int>::iterator pos;
    pos = find(intVector.begin(), intVector.end(), num);
    if(pos != intVector.end())
        cout << "�ҵ�! ����λ��: " << pos - intVector.begin() << endl;
    else
        cout << "�����в�����" << num << endl;
    pos = find_if(intVector.begin(), intVector.end(), bind2nd(greater<int>(), 7));
    if(pos != intVector.end())
        cout << "�����е�һ������7��Ԫ��ֵ: " << *pos << endl;
    else
        cout << "�����в����ڴ���7��Ԫ��ֵ" << endl;
    return 0;
}
