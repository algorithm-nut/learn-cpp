#include "mySort.h"
#include "myCompute.h"
#include "myPrint.h" 
#include <stdio.h> 

/*冒泡排序*/
void bubble_sort(int array[], int n) 
{ 
    int i, j, temp; 
    for (j = 0; j < n-1; j++) {   // n-1 ——最后一个数不用排 
        for (i = 0; i < n-1-j; i++) { 
            if(array[i] > array[i+1]) {  //递增排序，max被挤到最后 
                temp = array[i];  
                array[i] = array[i+1]; 
                array[i+1] = temp;   
            } 
        }
    }
} 


/*快速排序*/
void quick_sort(int *a, int left, int right) 
{ 
    if(left >= right) {  //快速排序的出口 
        return ; 
    } 
    int i = left; 
    int j = right; 
    int key = a[left];   //约定第一个数为key 
      
    while(i < j) { 
        while(i < j && key <= a[j]) { 
            j--;
        }   
        a[i] = a[j];   
        while(i < j && key >= a[i]) { 
            i++; 
        }      
        a[j] = a[i]; 
    } 
      
    a[i] = key;  //当在当组内找完一遍以后就把中间数key回归
    quick_sort(a, left, i - 1);
    quick_sort(a, i + 1, right);                  
}


/* 选择排序 */ 
void swap(int *a, int *b) 
{ 
    int temp; 
    temp = *a; 
    *a = *b; 
    *b = temp; 
}
 
void select_sort(int a[],int n) 
{ 
    int i,j,min,m; 
    for(i=0; i<n-1; i++) { 
        min=i;    //查找最小值 
        for(j=i+1; j<n; j++) { 
            if(a[min]>a[j]) { 
                min=j; 
            } 
        } 
        if(min!=i) { 
            swap(&a[min], &a[i]); 
//            printf("第%d趟排序结果为:\n",i+1); 
//            for(m=0; m<n; m++) { 
//                if(m>0) { 
//                    printf(""); 
//                } 
//                printf("%d ",a[m]); 
//            } 
//            printf("\n"); 
        } 
    } 
} 


/* 归并排序 */
void merge(int a[],int b[], int start, int mid, int end) 
{ 
    int i = start, j= mid+1, k = start; 
    while(i!=mid+1 && j!=end+1) 
    { 
        if(a[i] >= a[j]) 
            b[k++] = a[j++]; 
        else
            b[k++] = a[i++]; 
    } 
    while(i != mid+1) 
        b[k++] = a[i++]; 
    while(j != end+1) 
        b[k++] = a[j++]; 
    for(i=start; i<=end; i++) 
        a[i] = b[i]; 
}  

void merge_sort(int a[], int b[], int start, int end) 
{ 
    int mid; 
    if(start < end) 
    { 
        mid = (start + end) / 2; 
        merge_sort(a, b, start, mid); 
        merge_sort(a, b, mid+1, end); 
        merge(a, b, start, mid, end); 
    } 
}


/* 堆排序 */
void heapAdjust(int array[],int i,int length) 
{ 
    int nChild; 
    int nTemp; 
    for(;2*i+1<length;i=nChild) 
    { 
        //子结点的位置=2*（父结点位置）+1 
        nChild=2*i+1; 
        //得到子结点中较大的结点 
        if(nChild<length-1&&array[nChild+1]>array[nChild])++nChild; 
        //如果较大的子结点大于父结点那么把较大的子结点往上移动，替换它的父结点 
        if(array[i]<array[nChild]) 
        { 
            nTemp=array[i]; 
            array[i]=array[nChild]; 
            array[nChild]=nTemp;  
        } 
        else break; //否则退出循环 
    } 
} 

void heap_sort(int array[],int length) 
{ 
    int i; 
    //调整序列的前半部分元素，调整完之后第一个元素是序列的最大的元素 
    //length/2-1是最后一个非叶节点，此处"/"为整除 
    for(i=length/2-1; i>=0; --i) 
    heapAdjust(array, i, length); 
    //从最后一个元素开始对序列进行调整，不断的缩小调整的范围直到第一个元素 
    for(i=length-1; i>0; --i) 
    { 
        //把第一个元素和当前的最后一个元素交换， 
        //保证当前的最后一个位置的元素都是在现在的这个序列之中最大的 
        array[i]=array[0]^array[i]; 
        array[0]=array[0]^array[i]; 
        array[i]=array[0]^array[i]; 
        //不断缩小调整heap的范围，每一次调整完毕保证第一个元素是当前序列的最大值 
        heapAdjust(array, 0, i); 
    } 
} 



