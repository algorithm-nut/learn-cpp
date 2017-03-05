/* 例10_6.cpp */
#include <iostream>
#include <map>
#include <string>
using namespace std;
void printMap(const map<int, string> &map1);
int main() {
    map<int, string> map1;
    cout << "映射当前有效元素数量: " << map1.size() << endl;
    cout << "映射可以容纳的最大元素数量: " << map1.max_size() << endl;
    map1.insert(map<int, string>::value_type(1001, "张三"));
	map1.insert(pair<int, string>(1002, "李四"));
	map1.insert(make_pair(1003, "王五"));
	map1.insert(make_pair(1004, "赵六"));
	map1[1005] = "钱七";
	printMap(map1);
    map1.erase(1003);
    printMap(map1);
    cout << "映射中键为1005的元素个数: " << map1.count(1005) << endl;
    map<int, string>::iterator pos;
    pos = map1.find(1007);
    if(pos == map1.end())
        cout << "键为1007的元素不在映射中!" << endl;
    else
        cout << "键为1007的元素在映射中!" << endl;
    map1.erase(map1.begin(), map1.find(1004));
    printMap(map1);
    map1.clear();
    if(map1.empty())
        cout << "空映射!" << endl;
	return 0;
}
void printMap(const map<int, string> &map1) {
    map<int, string>::const_iterator pos;
    for(pos = map1.begin(); pos != map1.end(); ++pos)
        cout << "<" << pos->first << " " << pos->second << "> ";
    cout << endl;
}
