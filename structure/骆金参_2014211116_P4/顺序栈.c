#include "stdio.h"    
#include "stdlib.h"   
#include "io.h"  
#include "math.h"  
#include "time.h"

#define OK 1
#define ERROR 0
#define TRUE 1
#define FALSE 0
#define MAXSIZE 20  //�洢�ռ��ʼ������

typedef int Status; 
typedef int SElemType; //SElemType���͸���ʵ������������������Ϊint 

/* ˳��ջ�ṹ */
typedef struct {
    SElemType data[MAXSIZE];
    int top;   // ����ջ��ָ�� 
} SqStack;

Status visit(SElemType c) {
    printf("%d ",c);
    return OK;
}

/*  ����һ����ջS */
Status InitStack(SqStack *S) { 
    /* S.data=(SElemType *)malloc(MAXSIZE*sizeof(SElemType)); */
    S->top=-1;
    return OK;
}

/* ��S��Ϊ��ջ */
Status ClearStack(SqStack *S) { 
    S->top=-1;
    return OK;
}

/* ��ջSΪ��ջ���򷵻�TRUE�����򷵻�FALSE */
Status StackEmpty(SqStack S) { 
    if (S.top==-1)  return TRUE;
    else           return FALSE;
}

/* ����S��Ԫ�ظ�������ջ�ĳ��� */
int StackLength(SqStack S) { 
    return S.top+1;
}

/* ��ջ���գ�����e����S��ջ��Ԫ�أ�������OK�����򷵻�ERROR */
Status GetTop(SqStack S,SElemType *e) {
    if (S.top==-1)  return ERROR;
    else        *e=S.data[S.top];
    return OK;
}

//Exercise 1: ����Ԫ��eΪ�µ�ջ��Ԫ�� 
Status Push(SqStack *S,SElemType e) {
	if(S->top == MAXSIZE -1)  return ERROR;
    S->top++;			
    S->data[S->top]=e;  
    return OK;
}

//Exercise 2:��ջ���գ���ɾ��S��ջ��Ԫ�أ���e������ֵ��������OK�����򷵻�ERROR
Status Pop(SqStack *S,SElemType *e) { 
    if(S->top==-1)  return ERROR;
    *e=S->data[S->top];   
    S->top--;              
    return OK;
}

//Exercise 3:��ջ�׵�ջ�����ζ�ջ��ÿ��Ԫ����ʾ 
Status StackTraverse(SqStack S) {
	int i;
    i=0;
    while(i<=S.top)  visit(S.data[i++]);
    printf("\n");
	return OK;
}

int main() {
    int j;
    SqStack s;
    int e;
    if(InitStack(&s)==OK)
        for(j=1;j<=10;j++) Push(&s,j);
    printf("ջ��Ԫ������Ϊ(The elements of Stack are)��");
    StackTraverse(s);
    Pop(&s,&e);
    printf("������ջ��Ԫ��(Pop the top element of Stack) e=%d\n",e);
    return 0;
}


