/* 例10_5.cpp */
#include <iostream>
#include <set>
using namespace std;
void printSet(const set<int> &intSet);
int main() {
    set<int> intSet;
    cout << "集合当前有效元素数量: " << intSet.size() << endl;
    cout << "集合可以容纳的最大元素数量: " << intSet.max_size() << endl;
    int intArray[] = {18, 4, 3, 5, 1, 2, 2, 6};
    intSet.insert(intArray, intArray + 8);
    printSet(intSet);
    intSet.erase(18);
    intSet.insert(8);
    intSet.insert(5);
    intSet.insert(9);
    printSet(intSet);
    cout << "集合中值为5的元素个数: " << intSet.count(5) << endl;
    set<int>::iterator pos;
    pos = intSet.find(7);
    if(pos == intSet.end())
        cout << "7不在集合中!" << endl;
    else
        cout << "7在集合中!" << endl;
    cout << "大于等于7的第一个元素值: " << *intSet.lower_bound(7) << endl;
    cout << "大于7的第一个元素值: " << *intSet.upper_bound(7) << endl;
    cout << "集合不存在值为7的元素: " << *intSet.equal_range(7).first
             << " " << *intSet.equal_range(7).second << endl;
    intSet.erase(intSet.begin(), intSet.find(8));
    printSet(intSet);
    intSet.clear();
    if(intSet.empty())
        cout << "空集合!" << endl;
	return 0;
}
void printSet(const set<int> &intSet) {
    set<int>::const_iterator pos;
    for(pos = intSet.begin(); pos != intSet.end(); ++pos)
        cout << *pos << " ";
    cout << endl;
}
