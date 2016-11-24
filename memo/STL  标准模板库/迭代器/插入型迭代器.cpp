/* Àý10_15.cpp */
#include <iostream>
#include <vector>
#include <deque>
#include <list>
#include <iterator>
#include <algorithm>
using namespace std;
int main() {
    vector<int> intVector;
    back_insert_iterator<vector<int> > iter1(intVector);
    *iter1 = 1;
    ++iter1;
    *iter1 = 2;
    ++iter1;
    *iter1 = 3;
    copy(intVector.begin(), intVector.end(), ostream_iterator<int>(cout, " "));
    cout << endl;
    back_inserter(intVector) = 4;
    back_inserter(intVector) = 5;
    copy(intVector.begin(), intVector.end(), ostream_iterator<int>(cout, " "));
    cout << endl;
    deque<int> intDeque;
    front_insert_iterator<deque<int> > iter2(intDeque);
    *iter2 = 1;
    ++iter2;
    *iter2 = 2;
    ++iter2;
    *iter2 = 3;
    copy(intDeque.begin(), intDeque.end(), ostream_iterator<int>(cout, " "));
    cout << endl;
    front_inserter(intDeque) = 4;
    front_inserter(intDeque) = 5;
    copy(intDeque.begin(), intDeque.end(), ostream_iterator<int>(cout, " "));
    cout << endl;
    list<int> intList;
    insert_iterator<list<int> > iter3(intList, intList.begin());
    *iter3 = 1;
    ++iter3;
    *iter3 = 2;
    ++iter3;
    *iter3 = 3;
    copy(intList.begin(), intList.end(), ostream_iterator<int>(cout, " "));
    cout << endl;
    inserter(intList, intList.begin()) = 0;
    inserter(intList, intList.end()) = 4;
    copy(intList.begin(), intList.end(), ostream_iterator<int>(cout, " "));
    cout << endl;
    return 0;
}
