#include "mySort.h"
#include "myCompute.h"
#include "myPrint.h" 
#include <stdio.h> 

/*ð������*/
void bubble_sort(int array[], int n) 
{ 
    int i, j, temp; 
    for (j = 0; j < n-1; j++) {   // n-1 �������һ���������� 
        for (i = 0; i < n-1-j; i++) { 
            if(array[i] > array[i+1]) {  //��������max��������� 
                temp = array[i];  
                array[i] = array[i+1]; 
                array[i+1] = temp;   
            } 
        }
    }
} 


/*��������*/
void quick_sort(int *a, int left, int right) 
{ 
    if(left >= right) {  //��������ĳ��� 
        return ; 
    } 
    int i = left; 
    int j = right; 
    int key = a[left];   //Լ����һ����Ϊkey 
      
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
      
    a[i] = key;  //���ڵ���������һ���Ժ�Ͱ��м���key�ع�
    quick_sort(a, left, i - 1);
    quick_sort(a, i + 1, right);                  
}


/* ѡ������ */ 
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
        min=i;    //������Сֵ 
        for(j=i+1; j<n; j++) { 
            if(a[min]>a[j]) { 
                min=j; 
            } 
        } 
        if(min!=i) { 
            swap(&a[min], &a[i]); 
//            printf("��%d��������Ϊ:\n",i+1); 
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


/* �鲢���� */
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


/* ������ */
void heapAdjust(int array[],int i,int length) 
{ 
    int nChild; 
    int nTemp; 
    for(;2*i+1<length;i=nChild) 
    { 
        //�ӽ���λ��=2*�������λ�ã�+1 
        nChild=2*i+1; 
        //�õ��ӽ���нϴ�Ľ�� 
        if(nChild<length-1&&array[nChild+1]>array[nChild])++nChild; 
        //����ϴ���ӽ����ڸ������ô�ѽϴ���ӽ�������ƶ����滻���ĸ���� 
        if(array[i]<array[nChild]) 
        { 
            nTemp=array[i]; 
            array[i]=array[nChild]; 
            array[nChild]=nTemp;  
        } 
        else break; //�����˳�ѭ�� 
    } 
} 

void heap_sort(int array[],int length) 
{ 
    int i; 
    //�������е�ǰ�벿��Ԫ�أ�������֮���һ��Ԫ�������е�����Ԫ�� 
    //length/2-1�����һ����Ҷ�ڵ㣬�˴�"/"Ϊ���� 
    for(i=length/2-1; i>=0; --i) 
    heapAdjust(array, i, length); 
    //�����һ��Ԫ�ؿ�ʼ�����н��е��������ϵ���С�����ķ�Χֱ����һ��Ԫ�� 
    for(i=length-1; i>0; --i) 
    { 
        //�ѵ�һ��Ԫ�غ͵�ǰ�����һ��Ԫ�ؽ����� 
        //��֤��ǰ�����һ��λ�õ�Ԫ�ض��������ڵ��������֮������ 
        array[i]=array[0]^array[i]; 
        array[0]=array[0]^array[i]; 
        array[i]=array[0]^array[i]; 
        //������С����heap�ķ�Χ��ÿһ�ε�����ϱ�֤��һ��Ԫ���ǵ�ǰ���е����ֵ 
        heapAdjust(array, 0, i); 
    } 
} 



