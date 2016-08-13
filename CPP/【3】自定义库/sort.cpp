#include "sort.h" 
#include <cstdlib>
#include <ctime> 

using namespace std;

/*ÉıĞò»¹ÊÇ½µĞò*/
int comp(const void *p, const void *q) {
    return (*reinterpret_cast<const int *>(p) - *reinterpret_cast<const int *>(q));
}

/*¸Ä½ø°æµÄÃ°ÅİÅÅĞò*/ 
void bubbleSort(int list[], int arraySize, int (*comp)(int x, int y)) {
    bool exchange;
    int temp;
    for(int pass = 1; pass < arraySize; ++pass) {
        exchange = false;
        for(int i = 0; i < arraySize - pass; ++i) {
            if(comp(list[i], list[i + 1])) {
                temp = list[i];
                list[i] = list[i + 1];
                list[i + 1] = temp;
                exchange = true;
            }
        }
        if(exchange == false)
            break;
    }
}

int ascending(int a, int b) {
    return a > b;
}
int descending(int a, int b) {
   return a < b;
}
