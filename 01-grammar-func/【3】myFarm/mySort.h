/*
	��Ҫ��һά�������������� 
	authur:Luo_0412
	bulid_date:2016-4-17 
*/

#ifndef SORT_H
#define SORT_H

/* ð������ */ 
void bubble_sort(int array[], int n);

/* �������� */ 
void quick_sort(int *a, int left, int right);

/* ѡ������ */ 
void select_sort(int a[],int n);

/* �鲢���� */ 
void merge(int a[],int b[], int start, int mid, int end);
void merge_sort(int a[], int b[], int start, int end);

/* ������ */
void heapAdjust(int array[],int i,int length);
void heap_sort(int array[],int length);



#endif
