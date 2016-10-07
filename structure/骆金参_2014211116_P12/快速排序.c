#include <stdio.h>
void Qsort(int a[], int low, int high)
{
    if(low >= high)   return;
    int first = low;
    int last = high;
    int key = a[first];  /*用字表的第一个记录作为枢轴*/

    while(first < last) {
        while(first < last && a[last] >= key) {
            --last;
        }
        a[first] = a[last]; /*将比第一个小的移到低端*/
        while(first < last && a[first] <= key) {
            ++first;
        }
        a[last] = a[first]; /*将比第一个大的移到高端*/
    }
    a[first] = key;         /*枢轴记录到位*/
    Qsort(a, low, first-1);
    Qsort(a, first+1, high);
}


int main(void) {
	int  i=0, flag=1, totalNum=0; 
	FILE *fp = fopen("input.txt",  "r");
	FILE *fq = fopen("output.txt", "w");
    
    while(fscanf(fp, "%d", &totalNum) && totalNum != -1) {	
		int array[totalNum], tempArray[totalNum];
		
		for(i=0; i < totalNum; i++)    
		    fscanf(fp, "%d", &array[i]);
			 
		Qsort(array, 0, totalNum - 1);
		
		fprintf(fq, "Case %d: %d\n", flag++, totalNum);
		i=0;
        while(i< totalNum) {
            fprintf(fq, "%d ", array[i]);
            i++;
        }
		fputs("\n", fq);           //换行 
	}
	fclose(fp);  
	fclose(fq);
    return 0;
}



















