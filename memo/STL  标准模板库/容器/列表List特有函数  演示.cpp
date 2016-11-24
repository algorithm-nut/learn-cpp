/* Àý10_4.cpp */
#include <iostream>
#include <list>
#include <string>
using namespace std;
void printList(string name, const list<int> &intList);
int main() {
    list<int> intList1, intList2;
    for(int i = 0; i < 10; ++i) {
        intList1.push_back(i);
        intList2.push_back(i);
    }
    cout << "(1)" << endl;
    printList("intList1", intList1);
    printList("intList2", intList2);
    intList2.reverse();
    cout << "(2)" << endl;
    printList("intList1", intList1);
    printList("intList2", intList2);
    list<int>::iterator pos = intList2.begin();
    intList2.splice(++pos, intList1);
    cout << "(3)" << endl;
    printList("intList1", intList1);
    printList("intList2", intList2);
    intList2.splice(intList2.end(), intList2, intList2.begin());
    cout << "(4)" << endl;
    printList("intList1", intList1);
    printList("intList2", intList2);
    intList2.sort();
    intList1 = intList2;
    intList1.unique();
    cout << "(5)" << endl;
    printList("intList1", intList1);
    printList("intList2", intList2);
    intList1.merge(intList2);
    cout << "(6)" << endl;
    printList("intList1", intList1);
    printList("intList2", intList2);
    return 0;
}
void printList(string name, const list<int> &intList) {
    cout << name << ": ";
    list<int>::const_iterator pos;
    for(pos = intList.begin(); pos != intList.end(); ++pos)
        cout << *pos << " ";
    cout << endl;
}
