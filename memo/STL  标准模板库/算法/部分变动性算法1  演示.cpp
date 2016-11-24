/* 例10_23.cpp */
#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>
#include <cstdlib>
#include <ctime>
using namespace std;
void square(int &value) {
    value =  value * value;
}
int main() {
    int intArray[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    vector<int> intVector(intArray, intArray + 9);
    copy(intVector.begin(), intVector.end(), ostream_iterator<int>(cout, " "));
    cout << endl;
    cout << "平方: " << endl;
    for_each(intVector.begin(), intVector.end(), square);
    copy(intVector.begin(), intVector.end(), ostream_iterator<int>(cout, " "));
    cout << endl;
    cout << "用7填充: " << endl;
    fill(intVector.begin(), intVector.end(), 7);
    copy(intVector.begin(), intVector.end(), ostream_iterator<int>(cout, " "));
    cout << endl;
    cout << "用随机数填充: " << endl;
    srand(time(NULL));
    generate(intVector.begin(), intVector.end(), rand);
    copy(intVector.begin(), intVector.end(), ostream_iterator<int>(cout, " "));
    cout << endl;
    cout << "元素次序随机重排: " << endl;
    random_shuffle(intVector.begin(), intVector.end());
    copy(intVector.begin(), intVector.end(), ostream_iterator<int>(cout, " "));
    cout << endl;
    cout << "元素次序逆序重排: " << endl;
    reverse(intVector.begin(), intVector.end());
    copy(intVector.begin(), intVector.end(), ostream_iterator<int>(cout, " "));
    cout << endl;
    cout << "元素次序旋转重排: " << endl;
    rotate(intVector.begin(), intVector.begin() + 2, intVector.end());
    copy(intVector.begin(), intVector.end(), ostream_iterator<int>(cout, " "));
    cout << endl;
    return 0;
}
