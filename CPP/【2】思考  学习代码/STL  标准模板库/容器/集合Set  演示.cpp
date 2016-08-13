/* ��10_5.cpp */
#include <iostream>
#include <set>
using namespace std;
void printSet(const set<int> &intSet);
int main() {
    set<int> intSet;
    cout << "���ϵ�ǰ��ЧԪ������: " << intSet.size() << endl;
    cout << "���Ͽ������ɵ����Ԫ������: " << intSet.max_size() << endl;
    int intArray[] = {18, 4, 3, 5, 1, 2, 2, 6};
    intSet.insert(intArray, intArray + 8);
    printSet(intSet);
    intSet.erase(18);
    intSet.insert(8);
    intSet.insert(5);
    intSet.insert(9);
    printSet(intSet);
    cout << "������ֵΪ5��Ԫ�ظ���: " << intSet.count(5) << endl;
    set<int>::iterator pos;
    pos = intSet.find(7);
    if(pos == intSet.end())
        cout << "7���ڼ�����!" << endl;
    else
        cout << "7�ڼ�����!" << endl;
    cout << "���ڵ���7�ĵ�һ��Ԫ��ֵ: " << *intSet.lower_bound(7) << endl;
    cout << "����7�ĵ�һ��Ԫ��ֵ: " << *intSet.upper_bound(7) << endl;
    cout << "���ϲ�����ֵΪ7��Ԫ��: " << *intSet.equal_range(7).first
             << " " << *intSet.equal_range(7).second << endl;
    intSet.erase(intSet.begin(), intSet.find(8));
    printSet(intSet);
    intSet.clear();
    if(intSet.empty())
        cout << "�ռ���!" << endl;
	return 0;
}
void printSet(const set<int> &intSet) {
    set<int>::const_iterator pos;
    for(pos = intSet.begin(); pos != intSet.end(); ++pos)
        cout << *pos << " ";
    cout << endl;
}
