#ifndef SORT_H
#define SORT_H

/*ÉıĞò»¹ÊÇ½µĞò*/
int comp(const void *p, const void *q);

/*¸Ä½ø°æµÄÃ°ÅİÅÅĞò*/ 
void bubbleSort(int list[], int arraySize, int (*comp)(int x, int y));
int ascending(int a, int b);        // ÉıĞòÅÅĞòº¯Êı
int descending(int a, int b);      // ½µĞòÅÅĞòº¯Êı

#endif
