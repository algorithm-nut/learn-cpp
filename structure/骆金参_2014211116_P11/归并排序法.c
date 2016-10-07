#include <stdlib.h>
#include <stdio.h>
 
void Merge(int sourceArr[], int tempArr[], int startIndex, int midIndex, int endIndex) {
    int i = startIndex, j = midIndex+1, k = startIndex;
    while(i!=midIndex+1 && j!=endIndex+1) {
        if(sourceArr[i] >= sourceArr[j])
            tempArr[k++] = sourceArr[i++];
        else
            tempArr[k++] = sourceArr[j++];
    }
    while(i != midIndex+1)
        tempArr[k++] = sourceArr[i++];
    while(j != endIndex+1)
        tempArr[k++] = sourceArr[j++];
    for(i=startIndex; i<=endIndex; i++)
        sourceArr[i] = tempArr[i];
}
 
//内部使用递归
void MergeSort(int sourceArr[], int tempArr[], int startIndex, int endIndex) {
    int midIndex;
    if(startIndex < endIndex) {
        midIndex = (startIndex + endIndex) / 2;
        MergeSort(sourceArr, tempArr, startIndex, midIndex);
        MergeSort(sourceArr, tempArr, midIndex+1, endIndex);
        Merge(sourceArr, tempArr, startIndex, midIndex, endIndex);
    }
}
 
int main(void) {
	int  i=0, flag=1, totalNum=0; 
	FILE *fp = fopen("input.txt",  "r");
	FILE *fq = fopen("output.txt", "w");
    
    while(fscanf(fp, "%d", &totalNum) && totalNum != -1) {	
		int array[totalNum], tempArray[totalNum];
		
		for(i=0; i < totalNum; i++)    
		    fscanf(fp, "%d", &array[i]);
			 
		MergeSort(array, tempArray, 0, totalNum-1);
		
		fprintf(fq, "Case %d: %d\n", flag++, totalNum);
        while(--totalNum >= 0)
            fprintf(fq, "%d ", array[totalNum]);
		fputs("\n", fq);           //换行 
	}
	fclose(fp);  
	fclose(fq);
    return 0;
}
