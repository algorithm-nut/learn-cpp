/* ��10_6.cpp */
#include <iostream>
#include <map>
#include <string>
using namespace std;
void printMap(const map<int, string> &map1);
int main() {
    map<int, string> map1;
    cout << "ӳ�䵱ǰ��ЧԪ������: " << map1.size() << endl;
    cout << "ӳ��������ɵ����Ԫ������: " << map1.max_size() << endl;
    map1.insert(map<int, string>::value_type(1001, "����"));
	map1.insert(pair<int, string>(1002, "����"));
	map1.insert(make_pair(1003, "����"));
	map1.insert(make_pair(1004, "����"));
	map1[1005] = "Ǯ��";
	printMap(map1);
    map1.erase(1003);
    printMap(map1);
    cout << "ӳ���м�Ϊ1005��Ԫ�ظ���: " << map1.count(1005) << endl;
    map<int, string>::iterator pos;
    pos = map1.find(1007);
    if(pos == map1.end())
        cout << "��Ϊ1007��Ԫ�ز���ӳ����!" << endl;
    else
        cout << "��Ϊ1007��Ԫ����ӳ����!" << endl;
    map1.erase(map1.begin(), map1.find(1004));
    printMap(map1);
    map1.clear();
    if(map1.empty())
        cout << "��ӳ��!" << endl;
	return 0;
}
void printMap(const map<int, string> &map1) {
    map<int, string>::const_iterator pos;
    for(pos = map1.begin(); pos != map1.end(); ++pos)
        cout << "<" << pos->first << " " << pos->second << "> ";
    cout << endl;
}
