/* Àý4_8.cpp */
#include <iostream>
using namespace std;
template <typename T>
void bubbleSort(T list[], int arraySize);
template <typename T>
void printArray(T list[], int arraySize);
int main() {
    const int ARRAY_SIZE = 4;
    double list[ARRAY_SIZE] = {7.7, 6.6, 8.8, 5.5};
    cout << "ÅÅÐòÇ°: ";
    printArray(list, ARRAY_SIZE);
    bubbleSort(list, ARRAY_SIZE);
    cout << "ÅÅÐòºó: ";
    printArray(list, ARRAY_SIZE);
    return 0;
}
template <typename T>
void bubbleSort(T list[], int arraySize) {
    T temp;
    for(int pass = 1; pass < arraySize; ++pass) {
        for(int i = 0; i < arraySize - pass; ++i) {
            if(list[i] > list[i + 1]) {
                temp = list[i];
                list[i] = list[i + 1];
                list[i + 1] = temp;
            }
        }
    }
}
template <typename T>
void printArray(T list[], int arraySize) {
    for(int i = 0; i < arraySize; ++i)
        cout << list[i] << " ";
    cout << endl;
}
