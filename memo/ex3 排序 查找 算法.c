/*
  Authur:Luo_0412
  Build_date:2016-3-22 
  Version:1.0
  Function:��ϰ��������������� 
*/

/* Head*/ 
#include<stdio.h>
#include<stdlib.h>
#define SIZE 10    //Ĭ��1000������qsortʱ��ʱ�ĳ�10 
#define FILENAME1 "input.txt"
#define FILENAME2 "output.txt"

/* Function Definition */ 
void bubble_sort(int array[], int n);
void quick_sort(int *a, int left, int right); 
void swap(int *a, int *b);
void select_sort(int a[],int n);
void merge(int a[],int b[], int start, int mid, int end);
void merge_sort(int a[], int b[], int start, int end);
void heapAdjust(int array[],int i,int length);
void heap_sort(int array[],int length);
void printArray(int array[], int length);
int linearSearch(int key, int list[], int arraySize);
int binarySearch(int key, int list[], int arraySize);
int comp(const void *p, const void *q);
void bubbleSort_upgrated(int list[], int arraySize, int (*comp)(int x, int y));
int ascending(int a, int b);        // ���������� 
int descending(int a, int b);       // ���������� 



/* Main */
int main() {
	int num=0, i=0, length=0;
	int chooseWayNum=1; 
	int array[SIZE]={0}, tempArray[SIZE]={0};
	int key, index;
	int *pItem;
	int choice;
	
	FILE *fp1, *fp2;
	fp1 = fopen(FILENAME1,"r"); 
	if(fp1==NULL) {
		printf("Failure to open the %s\n",FILENAME1);
		exit(EXIT_FAILURE);
	} 
	while(num != -1) {
	     fscanf(fp1,"%d",&num);
	     array[i]=num;
	     i++;
	     if(num!=-1) length++;
    }
    fclose(fp1);
//
//    printf("Choose one way to sort them:\n");
//    printf("1.bubble_sort\n");
//    printf("2. quick_sort\n");
//    printf("3.select_sort\n");
//    printf("4. merge_sort\n");
//    printf("5.  heap_sort\n\n\t");
//    scanf("%d",&chooseWayNum);
//    printf("\n");
//    
//    if(chooseWayNum==1)  {
//    	printf("The answer of bubble_sort:\n\t");
//    	bubble_sort(array, length);
//    }
//    else if(chooseWayNum==2) {
//    	printf("The answer of quick_sort:\n\t");
//        quick_sort(array, 0, length-1);	
//    } 
//	else if(chooseWayNum==3) {
//		printf("The answer of select_sort:\n");
//		select_sort(array,length);
//	}
//	else if(chooseWayNum==4) {
//		printf("The answer of merge_sort:\n\t");
//		merge_sort(array, tempArray, 0, length-1);
//	}   
//	else {
//		printf("The answer of heap_sort:\n\t");
//		heap_sort(array,length);
//	} 
//	
//	fp2 = fopen(FILENAME2,"w");
//    for(i=0; i<length; i++) {
//    	fprintf(fp2,"%d ",array[i]);
//    }
//    fclose(fp2);
//	
//    printArray(array,length);
    

//    printArray(array, length);
//    printf("������Ҫ���ҵ�ֵ: ");
//    scanf("%d", &key);
////    index = linearSearch(key, array, length);
//    index = binarySearch(key, array, length);
//    if(index == -1)
//        printf("����ʧ��!\n");
//    else
//        printf("���ҳɹ�: %dλ�������±�%dλ��", key, index);


//    srand(time(NULL));
//    for(i = 0; i < SIZE; ++i)
//        array[i] = rand() % 100;
//    printf("����ǰ: ");
//    printArray(array, SIZE);
//    qsort(array, SIZE, sizeof(int), comp);
//    printf("�����: ");
//    printArray(array, SIZE);

//    srand(time(NULL));
//    for(i = 0; i < SIZE; ++i)
//        array[i] = rand() % 100;
//    qsort(array, SIZE, sizeof(int), comp);
//    printf("�����������: ");
//    printArray(array, SIZE);
//    printf("������Ҫ���ҵ�ֵ: ");
//    scanf("%d", &key);
//    pItem = (int *)bsearch(&key, array, SIZE, sizeof(int), comp);
//    if(pItem)
//        printf ("���ҳɹ�: %d��������!", key);
//    else
//        printf ("����ʧ��: %d����������!", key);


    
    printf("����ǰ: ");
    printArray(array, SIZE);
    printf("[1]��������\n");
    printf("[2]��������\n");
    printf("������ѡ��: ");
    scanf("%d", &choice);
    if(choice == 1)
        bubbleSort_upgrated(array, SIZE, ascending);
    else
        bubbleSort_upgrated(array, SIZE, descending);
    printf("�����: ");
    printArray(array, SIZE);

    return 0;
}


/*ð���������ڱȽϽ��� + ÿ�ζ���max�������*/
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


/*��������: key��ˮ�� + �ݹ�*/
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
    for(i=0; i<n-1; i++) 
    { 
        min=i;  //������Сֵ 
        for(j=i+1;j<n;j++) 
        { 
            if(a[min]>a[j]) 
            { 
                min=j; 
            } 
        } 
        if(min!=i) 
        { 
            swap(&a[min], &a[i]); 
            printf("��%d��������Ϊ:\n",i+1); 
            for(m=0; m<n; m++) 
            { 
                if(m>0) 
                { 
                    printf(""); 
                } 
                printf("%d ",a[m]); 
            } 
            printf("\n"); 
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
void printArray(int array[], int length) 
{
	int i = 0;
	for(i = 0; i < length; i++) { 
        printf("%4d ", array[i]); 
    }
    printf("\n");
}

int linearSearch(int key, int list[], int arraySize) 
{
    int i;
    for(i = 0; i < arraySize; ++i) {
        if(key == list[i])
            return i;
    }
    return -1;
}

int binarySearch( int key, int list[], int arraySize) 
{
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

int comp(const void *p, const void *q) 
{
    return (*(int *)p - *(int *)q);
}


void bubbleSort_upgrated(int list[], int arraySize, int (*comp)(int x, int y)) 
{
    int pass, i, temp, exchange;
    for(pass = 1; pass < arraySize; ++pass) {
        exchange = 0;
        for(i = 0; i < arraySize - pass; ++i) {
            if(comp(list[i], list[i + 1])) {
                temp = list[i];
                list[i] = list[i + 1];
                list[i + 1] = temp;
                exchange = 1;
            }
        }
        if(exchange == 0)
            break;
    }
}
int ascending(int a, int b) 
{
    return a > b;
}

int descending(int a, int b) 
{
   return a < b;
}
