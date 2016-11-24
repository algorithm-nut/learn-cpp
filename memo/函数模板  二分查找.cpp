/* 例4_10.cpp */
#include <iostream>
using namespace std;
template <typename T>
int binarySearch(T key, T list[], int arraySize);
template <typename T>
void printArray(T list[], int arraySize);
int main() {
    const int ARRAY_SIZE = 13;
    int list[ARRAY_SIZE] = {2, 4, 7, 10, 11, 45, 50, 59, 60, 66, 69, 70, 70};
    printArray(list, ARRAY_SIZE);
    int key;
    cout << "输入需要查找的值: ";
    cin >> key;
    int index = binarySearch(key, list, ARRAY_SIZE);
    if(index < 0)
        cout << "查找失败!\n";
    else
        cout << "查找成功: " << key << "位于数组下标" << index << "位置\n";
    return 0;
}
template <typename T>
int binarySearch(T key, T list[], int arraySize) {
    int low, mid, high;
    low = 0;
    high = arraySize - 1;
    while(low <= high) {
        mid = (low + high) / 2;
        if(key < list[mid])
            high = mid - 1;
        else if(key == list[mid])
            return mid;
        else
            low = mid + 1;
    }
    return -1;
}
template <typename T>
void printArray(T list[], int arraySize) {
    for(int i = 0; i < arraySize; ++i)
        cout << list[i] << " ";
    cout << endl;
}
