/* ��10_3.cpp */
#include <iostream>
#include <list>
using namespace std;
int main() {
    list<int> intList;
    cout << "�б�ǰ��ЧԪ������: " << intList.size() << endl;
    cout << "�б�������ɵ����Ԫ������: " << intList.max_size() << endl;
    for(int i = 5; i >= 0; --i)
        intList.push_front(i);
    for(int i = 6; i < 10; ++i)
        intList.push_back(i);
    list<int>::iterator pos;
	for(pos = intList.begin(); pos != intList.end(); ++pos)
		cout << *pos << " ";
    cout << endl;
    intList.assign(5, 1);
    for(pos = intList.begin(); pos != intList.end(); ++pos)
		cout << *pos << " ";
    cout << endl;
    pos = intList.begin();
    intList.front() = 100;
    *(++pos) = 101;
    intList.back() = 102;
    intList.insert(intList.begin(), -999);
    intList.insert(intList.end(), 999);
    for(pos = intList.begin(); pos != intList.end(); ++pos)
		cout << *pos << " ";
    cout << endl;
    intList.remove(1);
    intList.pop_front();
    intList.pop_back();
    for(pos = intList.begin(); pos != intList.end(); ++pos)
        cout << *pos << " ";
    cout << endl;
    intList.clear();
    if(intList.empty())
        cout << "���б�!" << endl;
    return 0;
}
