#include <stdio.h>
#include <stdlib.h>
#define MAX_STACK_SIZE 100

struct  element {
	int  num;
	int  tnum[32];
} *p = NULL;

struct  stack {
	int key;
} *s;

int top,capacity;
struct stack* CreateS();
int push(int *top, struct stack item);
int pop(int *top, struct stack *pX);
void conversion(int n,int a[],int *len);

int main() {
	int i=0;
	FILE *fp1, *fp2;
	p = (struct element*)malloc(sizeof(struct element));
	if((fp1=fopen("input.txt","r"))==NULL) {
		printf("cannot open file\n");
		exit(0);
	}
	if((fp2=fopen("output.txt","w"))==NULL) {
		printf("cannot open file\n");
		exit(0);
	}
	
    do{
	    i=0;
        int len=0;
		fscanf(fp1,"%d",&p->num);
		if(p->num == -1)break;
		printf("%d",p->num);
		conversion(p->num,p->tnum,&len) ;

		fprintf(fp2,"%d--->",p->num);
        while(i<len)   fprintf(fp2,"%d",p->tnum[i++]);
		fprintf(fp2,"%c",'\n');
		printf("\n");
	} while(1);
}

struct stack* CreateS() {
	s =  (struct stack*)malloc(sizeof(struct stack) * MAX_STACK_SIZE);
	top = -1;
	capacity = MAX_STACK_SIZE;
	return  s;
}

int push(int *top, struct stack item) {
	if ( *top >= capacity -1 )    return 0;
	s[++*top] = item;
}

int pop(int *top,struct stack *pX) {
	if ( *top == -1 )   return 0;
	*pX = s[(*top)--];
}

void conversion(int n,int a[],int *len) {
	struct stack *s;
	struct stack tmp;
	int i = 0;
    s = CreateS();
    while (n) {
        tmp.key = n%2;
        push(&top,tmp);
        n = n/2;
    }
    while (top != -1) {
        pop(&top,&tmp);
        a[i++] = tmp.key;
    }
    *len=i;
}
