#include "string.h"
#include "stdio.h"    
#include "stdlib.h"   
#include "io.h"  
#include "math.h"  
#include "time.h"

#define OK 1
#define ERROR 0
#define TRUE 1
#define FALSE 0

#define MAXSIZE 100 //�洢�ռ��ʼ������

typedef int Status; //Status�Ǻ���������,��ֵ�Ǻ������״̬���룬��OK�� 

/* ���ڹ��������*/
int index=1;
typedef char String[24]; //0�ŵ�Ԫ��Ŵ��ĳ���
String str;

Status StrAssign(String T,char *chars) { 
	int i;
	if(strlen(chars)>MAXSIZE) return ERROR;
	else {
		T[0]=strlen(chars);
		for(i=1;i<=T[0];i++)  T[i]=*(chars+i-1);
		return OK;
	}
}

typedef char TElemType;
TElemType Nil=' '; //�ַ����Կո��Ϊ��

Status visit(TElemType e) {
	printf("%c ",e);
	return OK;
}

typedef struct BiTNode {  //���ṹ 
   TElemType data;		//������� 
   struct BiTNode *lchild,*rchild; //���Һ���ָ��
} BiTNode,*BiTree;


/* ����ն�����T */
Status InitBiTree(BiTree *T) { 
	*T=NULL;
	return OK;
}

/* ��ʼ����: ������T���ڡ��������: ���ٶ�����T */
void DestroyBiTree(BiTree *T) { 
	if(*T) {
		if((*T)->lchild) //������ 
			DestroyBiTree(&(*T)->lchild); //������������ 
		if((*T)->rchild) //���Һ���
			DestroyBiTree(&(*T)->rchild); //�����Һ�������
		free(*T); //�ͷŸ����
		*T=NULL;  //��ָ�븳0
	}
}

/* ��ʼ����: ������T���� */
/* �������: ��TΪ�ն�����,�򷵻�TRUE,����FALSE */
Status BiTreeEmpty(BiTree T) { 
	if(T) return FALSE;
	else  return TRUE;
}

#define ClearBiTree DestroyBiTree

/* ��ʼ����: ������T���ڡ��������: ����T�ĸ� */
TElemType Root(BiTree T) { 
	if(BiTreeEmpty(T))  return Nil;
	else            return T->data;
}

/* ��ʼ����: ������T���ڣ�pָ��T��ĳ����� */
/* �������: ����p��ָ����ֵ */
TElemType Value(BiTree p) {
	return p->data;
}

/* ��p��ָ��㸳ֵΪvalue */
void Assign(BiTree p,TElemType value) {
	p->data=value;
}

// Exercise 0:��ʼ����: ������T���ڡ��������: ����T�����
int BiTreeDepth(BiTree T) {
	int d1, d2; 
	if(!T) return 0; 
	d1=BiTreeDepth(T->lchild); 
	d2=BiTreeDepth(T->rchild); 
	return (d1>d2?d1:d2)+1;
}

// Exercise 1:
/* ��ǰ������������н���ֵ��һ���ַ��� */
/* #��ʾ������������������ʾ������T�� */
void CreateBiTree(BiTree *T) {
	TElemType ch;
    //�������������������н���ֵ��һ���ַ�����'#'��ʾ����
    scanf("%c",&ch); 
	if(ch == '#')    (*T)= NULL; 
	else {
    *T= (BiTree)malloc(sizeof(BiTNode));  //���ɸ����
    (*T)->data= ch;
    CreateBiTree(&(*T)->lchild);
    CreateBiTree(&(*T)->rchild);
    }	
    
}

// Exercise 2
/* ��ʼ����: ������T���� */
/* �������: ǰ��ݹ����T */
void PreOrderTraverse(BiTree T) { 
    if(T) {
        printf("%c ",T->data);
        PreOrderTraverse(T->lchild);
        PreOrderTraverse(T->rchild);
    }

}

// Exercise 3
/* ��ʼ����: ������T���� */
/* �������: ����ݹ����T */
void InOrderTraverse(BiTree T) { 
    if(T) {
        InOrderTraverse(T->lchild); 
		printf("%c ",T->data);
        InOrderTraverse(T->rchild);
    }	
}

// Exercise 4
/* ��ʼ����: ������T���� */
/* �������: ����ݹ����T */
void PostOrderTraverse(BiTree T) {
	if(T) {
    InOrderTraverse(T->lchild); 
    InOrderTraverse(T->rchild);
    printf("%c ",T->data);
    }	
}

int main() {
	int i;
	BiTree T;
	TElemType e1;
	InitBiTree(&T);
	StrAssign(str,"ABDH#K###E##CFI###G#J##");
	CreateBiTree(&T);

	printf("����ն�������,���շ�%d(1:�� 0:��) �������=%d\n",BiTreeEmpty(T),BiTreeDepth(T));
	e1=Root(T);
	printf("�������ĸ�Ϊ: %c\n",e1);

	printf("\nǰ�����������:");
	PreOrderTraverse(T);
	printf("\n�������������:");
	InOrderTraverse(T);
	printf("\n�������������:");
	PostOrderTraverse(T);
	ClearBiTree(&T);
	printf("\n�����������,���շ�%d(1:�� 0:��) �������=%d\n",BiTreeEmpty(T),BiTreeDepth(T));
	i=Root(T);
	if(!i)  printf("���գ��޸�\n");
	return 0;
}


