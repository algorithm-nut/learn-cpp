/*
	主要是一维数组的排序与查找 
	authur:Luo_0412
	bulid_date:2016-4-17 
*/

#ifndef SORT_H
#define SORT_H

/* 冒泡排序 */ 
void bubble_sort(int array[], int n);

/* 快速排序 */ 
void quick_sort(int *a, int left, int right);

/* 选择排序 */ 
void select_sort(int a[],int n);

/* 归并排序 */ 
void merge(int a[],int b[], int start, int mid, int end);
void merge_sort(int a[], int b[], int start, int end);

/* 堆排序 */
void heapAdjust(int array[],int i,int length);
void heap_sort(int array[],int length);



#endif
