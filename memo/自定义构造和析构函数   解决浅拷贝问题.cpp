/* 例6_3.cpp */
#include <iostream>
#include <string>
using namespace std;
class NameList {
public:
    NameList();
    NameList(const string list[], int listSize);
    NameList(const NameList &list);     // 自定义拷贝构造函数
    ~NameList();                                    // 自定义析构函数
    void setName(const string &name, int index);
    void setName(const char *name, int index);
    void print() const;
private:
    int size;
    string *pList;      // 字符串指针，动态分配内存
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
NameList::NameList(const NameList &list) {
    if(list.pList != NULL) {
        size = list.size;
        pList = new string[size];
        for(int i = 0; i < size; ++i)
            pList[i] = list.pList[i];
    }
    else {
        size = 0;
        pList = NULL;
    }
}
NameList::~NameList() {
    delete[] pList;     // 释放动态分配内存
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
    NameList list2(list1);      // 自动调用自定义拷贝构造函数
    list2.print();
    list2.setName("Java", 2);
    list2.print();
    list1.print();
    return 0;
}
