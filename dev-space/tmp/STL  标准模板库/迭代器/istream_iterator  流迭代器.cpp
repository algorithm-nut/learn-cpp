/* 例10_14.cpp */
#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>
using namespace std;
int main() {
    istream_iterator<int> inputIterator(cin);
    istream_iterator<int> endOfStream;
           // 没有cin输入流作参数，变成end-of-stream 迭代器 
    ostream_iterator<int> outputIterator(cout, "\n");
    int num1 = *inputIterator;
    ++inputIterator;
    int num2 = *inputIterator;
    ++inputIterator;
    int num3 = *inputIterator;
    cout << num1 << ", " << num2 << ", " << num3 << "的最大值: ";
    *outputIterator = max(max(num1, num2), num3);
    vector<int> intVector;
    while(++inputIterator != endOfStream)
        intVector.push_back(*inputIterator);
    copy(intVector.begin(), intVector.end(), ostream_iterator<int>(cout, " "));
    cout << endl;
    return 0;
}
