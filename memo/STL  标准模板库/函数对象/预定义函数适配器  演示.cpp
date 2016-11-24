/* Àý10_21.cpp */
#include <iostream>
#include <list>
#include <iterator>
#include <functional>
#include <algorithm>
using namespace std;
int main() {
    int intArray[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    list<int> intList(intArray, intArray + 9);
    copy(intList.begin(), intList.end(), ostream_iterator<int>(cout, " "));
    cout << endl;
    intList.remove_if(not1(bind2nd(modulus<int>(), 2)));
    //intList.remove_if(bind(logical_not<bool>(), bind(modulus<int>(), placeholders::_1, 2)));
    //intList.remove_if([](int x)->bool { return !(x % 2); });
    copy(intList.begin(), intList.end(), ostream_iterator<int>(cout, " "));
    cout << endl;
    return 0;
}
