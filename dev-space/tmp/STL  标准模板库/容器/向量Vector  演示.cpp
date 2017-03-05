/* 例10_1.cpp */
#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<int> vec;
    cout << "向量当前有效元素数量: " << vec.size() << endl;
    cout << "向量当前实际能够容纳的元素数量: " << vec.capacity() << endl;
    cout << "向量可以容纳的最大元素数量: " << vec.max_size() << endl;
    for(int i = 0; i < 10; ++i)
        vec.push_back(i);
    for(int i = 0; i < vec.size(); ++i)
        cout << vec[i] << " ";
    cout << endl;
    vec.assign(5, 1);
    for(int i = 0; i < vec.size(); ++i)
        cout << vec[i] << " ";
    cout << endl;
    vec.front() = 100;
    vec[1] = 101;
    vec.at(2) = 102;
    vec.back() = 104;
    vec.insert(vec.begin(), -999);
    vec.insert(vec.end(), 999);
    vector<int>::iterator pos = vec.begin();
    *(pos + 4) = 103;
    for(int i = 0; i < vec.size(); ++i)
        cout << vec[i] << " ";
    cout << endl;
    vec.erase(pos +1, pos +3);
    vec.erase(vec.begin());
    vec.pop_back();
    for(pos = vec.begin(); pos != vec.end(); ++pos)
        cout << *pos << " ";
    cout << endl;
    vec.clear();
    if(vec.empty())
        cout << "空向量!" << endl;
    return 0;
}
