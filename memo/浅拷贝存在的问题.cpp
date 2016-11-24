/* 例6_2.cpp */
#include <iostream>
#include <string>
using namespace std;
class NameList {
public:
    NameList();
    NameList(const string list[], int listSize);
    void setName(const string &name, int index);
    void setName(const char *name, int index);
    void print() const;
private:
    int size;
    string *pList;
};
NameList::NameList() {
    size = 0;
    pList = NULL;
}
NameList::NameList(const string list[], int listSize) {
    size = listSize;
    pList = new string[size];
    for(int i = 0; i < size; ++i)
        pList[i] = list[i];
}
void NameList::setName(const string &name, int index) {
    pList[index] = name;
}
void NameList::setName(const char *name, int index) {
    pList[index] = name;
}
void NameList::print() const {
    for(int i = 0; i < size; ++i)
        cout << pList[i] << " ";
    cout << endl;
}
int main() {
    string list[] = {"C", "C++", "Objective-C"};
    NameList list1(list, 3);
    list1.print();
    NameList list2(list1);      // 自动调用默认拷贝构造函数
    list2.print();
    list2.setName("Java", 0);
    list2.print();
    list1.print();
    return 0;
}
