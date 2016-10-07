#include "stdio.h"    
#include "string.h"
#include "ctype.h"   //��Ҫ���ַ���   
#include "stdlib.h"   
#include "io.h"      //����һЩ������������һЩ�⺯��
#include "math.h"  
#include "time.h"

#define OK 1
#define ERROR 0
#define TRUE 1
#define FALSE 0       

#define MAXSIZE 20     //�洢�ռ��ʼ������ 

typedef int Status;    // Status�Ǻ���������,��ֵ�Ǻ������״̬���룬��OK��  
typedef int ElemType;  //ElemType���͸���ʵ������������������Ϊint

Status visit(ElemType c) {  //�����Ǹ�ֵ�����
    printf("%d ",c);
    return OK;
}                             

typedef struct Node {
    ElemType data;              //������ 
    struct Node *next;          //ָ���� 
}Node;
typedef struct Node *LinkList;   //����LinkList 

/* ��ʼ��˳�����Ա� */
Status InitList(LinkList *L)  {
    *L=(LinkList)malloc(sizeof(Node));   //����ͷ���,��ʹLָ���ͷ��� 
    if(!(*L))  return ERROR;    // �洢����ʧ��    
    (*L)->next=NULL;            //ָ����Ϊ��
    return OK;
}

/* ��ʼ������˳�����Ա�L�Ѵ��ڡ�
   �����������LΪ�ձ��򷵻�TRUE�����򷵻�FALSE */
Status ListEmpty(LinkList L) { 
    if(L->next)  return FALSE;
    else         return TRUE;
}

/* ��ʼ������˳�����Ա�L�Ѵ��ڡ�
   �������������L������Ԫ�ظ��� */
int ListLength(LinkList L) {
    int i=0;             
    LinkList p=L->next;   //pָ���һ�����
    while(p)  {       //��û������β����ʱ���ִ��                     
        i++;          //i�Ǽ����� 
        p=p->next;    //��pָ����һ�����
    }
    return i;       
}

/* ��ʼ������˳�����Ա�L�Ѵ��ڣ�1��i��ListLength(L) 
   �����������e����L�е�i������Ԫ�ص�ֵ */    // 
Status GetElem(LinkList L,int i,ElemType *e) {
	int j;         
	LinkList p;		    // ����һ���p 
	p = L->next;		// ��pָ������L�ĵ�һ����� 
	j = 1;		        // jΪ������
	while (p && j<i) {  //p��Ϊ�ջ��߼�����j��û�е���iʱ��ѭ������ 
	   
		p = p->next;   // ��pָ����һ����� 
		++j;          //������ʱj=i�ˣ���ô��һ���Ѿ�����P->data���������ֵ 
	}
	if ( !p || j>i )   return ERROR;     //��i��Ԫ�ز�����
	*e = p->data;      //  ȡ��i��Ԫ�ص�����  
	return OK;
}

/* ��ʼ������˳�����Ա�L�Ѵ��� */
/* �������������L�е�1����e�����ϵ������Ԫ�ص�λ�� */
/* ������������Ԫ�ز����ڣ��򷵻�ֵΪ0 */
int LocateElem(LinkList L,ElemType e) {
    int i=0;
    LinkList p=L->next;
    while(p) {
        i++;
        if(p->data==e)   return i;  // �ҵ�����������Ԫ�� 
        p=p->next;
    }
    return 0;
}

/* ��ʼ������˳�����Ա�L�Ѵ��� */
/* ������������ζ�L��ÿ������Ԫ����� */
Status ListTraverse(LinkList L) {
    LinkList p=L->next;
    while(p) {
        visit(p->data);
        p=p->next;
    }
    printf("\n");
    return OK;
}

//��Ŀ 1: ����������պ�����
/* ��ʼ������˳�����Ա�L�Ѵ��ڡ������������L����Ϊ�ձ� */
Status ClearList(LinkList *L) {
    LinkList p, q;
    p=(*L)->next;
    while(p) {
    	q=p->next;
        free(p);
        p=q;
    }
     (*L)->next=NULL;
    return OK;
}

//��Ŀ 2: �������Ĳ��뺯����
/* ��ʼ������˳�����Ա�L�Ѵ���,1��i��ListLength(L)�� */
/* �����������L�е�i��λ��֮ǰ�����µ�����Ԫ��e��L�ĳ��ȼ�1 */
Status ListInsert(LinkList *L,int i,ElemType e)
{
	int j;
	LinkList p,s;
	p = *L;    // ����һ����� p��ָ��ͷ��� 
	j = 1;
	while (p && j < i) {    //Ѱ�ҵ�i�����
		p = p->next;
		++j;
	}
	if (!p || j > i)   return ERROR;   //��i��Ԫ�ز����� 
	s = (LinkList)malloc(sizeof(Node));  //�����½��(C���Ա�׼����) 
	s->data = e;
	s->next = p->next;      // ��p�ĺ�̽�㸳ֵ��s�ĺ��
	p->next = s;            // ��s��ֵ��p�ĺ��
    return OK;
}

//��Ŀ 3: ��������ɾ��������
/* ��ʼ������˳�����Ա�L�Ѵ��ڣ�1��i��ListLength(L) */
/* ���������ɾ��L�ĵ�i������Ԫ�أ�����e������ֵ��L�ĳ��ȼ�1 */
Status ListDelete(LinkList *L,int i,ElemType *e) {
	int j;
	LinkList p,q;
	p = *L;	          //����һ���pָ�������һ�����
	j = 1;
	while (p->next && j < i) {	//����Ѱ�ҵ�i��Ԫ�� 
        p = p->next;
        ++j;
	}
	if (!(p->next) || j > i)  return ERROR;  //��i��Ԫ�ز����� 
	q = p->next;
	p->next = q->next;			//��q�ĺ�̸�ֵ��p�ĺ�� 
	*e = q->data;               //��q����е����ݸ�e
	free(q);                    //��ϵͳ���մ˽�㣬�ͷ��ڴ�
    return OK;
}

//������ 1����������ͷ�巨��
/* ��������ͷ���ĵ������Ա�L��ͷ�巨�� */
void CreateListHead(LinkList *L, int n) {
	LinkList p;
	int i;
	srand(time(0));                         //��ʼ�����������
	*L = (LinkList)malloc(sizeof(Node));
	(*L)->next = NULL;                      //�Ƚ���һ����ͷ���ĵ�����
	for (i=0; i < n; i++) {
		p = (LinkList)malloc(sizeof(Node));  //�����½��
		p->data = i;               //�������100���ڵ�����
		p->next = (*L)->next;
		(*L)->next = p;			   //���뵽��ͷ
	}
}

//������ 2: ��������β�巨��
/* ��������ͷ���ĵ������Ա�L��β�巨�� */
void CreateListTail(LinkList *L, int n) {
    LinkList p,r;
	int i;
	srand(time(0));                      //��ʼ�����������
	*L = (LinkList)malloc(sizeof(Node)); //LΪ�������Ա�
	r= *L;                                //rΪָ��β���Ľ��
	for (i=0; i < n; i++) {
		p = (LinkList)malloc(sizeof(Node));  //�����½��
		p->data = i;                  //�������100���ڵ�����
		r->next=p;                 //����β�ն˽���ָ��ָ���½��
		r = p;                            //����ǰ���½�㶨��Ϊ��β�ն˽��
	}
	r->next = NULL;               //��ʾ��ǰ�������            
}

int main() {        
    LinkList L;
    ElemType e;
    Status i;
    int j,k;
    i=InitList(&L);
    
    printf("Initializing��ListLength(L)=%d\n",ListLength(L));
    for(j=1;j<=5;j++)   i=ListInsert(&L,1,j);
    printf("Insert 1��5 at the head of L��L.data=");
    ListTraverse(L); 
    printf("ListLength(L)=%d \n",ListLength(L));
    i=ListEmpty(L);
    printf("Is L empty��i=%d(1:yes 0:no)\n",i);
   
    i=ClearList(&L);
    printf("Clear L��ListLength(L)=%d\n",ListLength(L));
    i=ListEmpty(L);
    printf("Is L empty��i=%d(1:yes 0:no)\n",i);
    for(j=10;j>=1;j--)   i=ListInsert(&L,1,j);
    printf("Insert 1��10 at the tail of L��L.data=");
    ListTraverse(L);
	printf("ListLength(L)=%d \n",ListLength(L));
       
    if(!ListDelete(&L,11,&e)) 
        printf("Fail of removing the element 11\n");
    else {
        GetElem(L,11,&e);	
	    printf("Removing the elemnt 11:%d\n",e); 
        printf("Print of the elements of L��");
        ListTraverse(L);
	    printf("\n");
    };
    
    if(!ListDelete(&L,10,&e)) 
        printf("Fail of removing the element 10\n");
    else {
	    GetElem(L,10,&e);
	    printf("Removing the elemnt 10:%d \n" ,e); 
        printf("Print of the elements of L��");
        ListTraverse(L);
	    printf("\n");
    }
	
	i=ClearList(&L);
	printf("\n");
    printf("Clear L��ListLength(L)=%d\n",ListLength(L)); 
    printf("Create the list(from the head)��");
    CreateListHead(&L,20);
    ListTraverse(L);

    i=ClearList(&L);
	printf("\n");
    printf("Clear L��ListLength(L)=%d\n",ListLength(L)); 
    printf("Create the list(from the tail)��");
    CreateListTail(&L,20);
    ListTraverse(L);

    return 0;
}



/*
ʵ������ 
 Initializing��ListLength(L)=0
 Insert 1��5 at the head of L��L.data=5 4 3 2 1
 ListLength(L)=5
 Is L empty��i=0(1:yes 0:no)
 Clear L��ListLength(L)=0
 Is L empty��i=1(1:yes 0:no)
 Insert 1��10 at the tail of L��L.data=1 2 3 4 5 6 7 8 9 10
 ListLength(L)=10
 Fail of removing the element 11
 Removing the elemnt 10��10
 Print of the elements of L��1 2 3 4 5 6 7 8 9
 
 Clearing L��ListLength(L)=0
 Create the list (from the head)��19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 0
 
 Clearing L��ListLength(L)=0
 Create the list (from the tail)��0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19
 */


