#ifndef SORT_H
#define SORT_H

/*�����ǽ���*/
int comp(const void *p, const void *q);

/*�Ľ����ð������*/ 
void bubbleSort(int list[], int arraySize, int (*comp)(int x, int y));
int ascending(int a, int b);        // ����������
int descending(int a, int b);      // ����������

#endif
