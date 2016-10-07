#include<stdio.h>

int buildHeap(int *a, int i,int n) {  /*创建堆函数*/
    int j, k;
    int tmp;
    k=i;
    j=2*k+1;
    while( j<=n ) { 
        if(j<n && a[j]<a[j+1])   j++;
        if(a[k]>=a[j])           break;
        tmp=a[k];
        a[k]=a[j];
        a[j]=tmp;        
        k=j;
        j= 2*j+1;
    }
    return 0;
}


int main(void) {
    int i,j;
    int tmp, sum, num;
    int length;
    
    FILE *fp, *fq;
    fp = fopen("input.txt", "r");
	fq = fopen("output.txt", "w");

	while(fscanf(fp, "%d", &length)) {
	    if (length == -1) break;	//遇到-1，结束
	    int a[length];
	    
		for(j=0;j<length;j++){
		   fscanf(fp, "%d", &a[j]);
	}	
    
    tmp=1;
	sum=0;
	
    while(sum + tmp <= length){
        sum += tmp;    
        tmp*=2;
    }
	    
    for(i=sum-1; i>=0; i--)      /* 建初始堆 */
        buildHeap(a,i,length-1);       
	      
    for(i=0;i<length-1;i++) {  /* 改建堆 */
        tmp= a[0];
        a[0]= a[length-1-i];
        a[length-1-i]= tmp;
        buildHeap(a,0,length-2-i);      
    }  
	   
    for(j = 0; j <length; ++j) {   //输出到文件 
		fprintf(fq, "%d ", a[j]);		
    }
    fputs("\n", fq);
    
    } 
    return 0;
}


