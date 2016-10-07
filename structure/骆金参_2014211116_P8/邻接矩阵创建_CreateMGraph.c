#include "stdio.h"    
#include "stdlib.h"   
#include "io.h"  
#include "math.h"  
#include "time.h"

#define OK 1
#define ERROR 0
#define TRUE 1
#define FALSE 0
#define MAXVEX 100 /* ��󶥵�����Ӧ���û����� */
#define INFINITY 65535

typedef int Status;	/* Status�Ǻ���������,��ֵ�Ǻ������״̬���룬��OK�� */
typedef char VertexType; /* ��������Ӧ���û�����  */
typedef int EdgeType; /* ���ϵ�Ȩֵ����Ӧ���û����� */
typedef struct
{
	VertexType vexs[MAXVEX];  /* ����� */
	EdgeType arc[MAXVEX][MAXVEX]; /* �ڽӾ��󣬿ɿ����߱� */
	int numNodes, numEdges; /* ͼ�е�ǰ�Ķ������ͱ���  */
}MGraph;

/* �������붥��ͱߵ���Ϣ������ͼ���ڽӾ����ʾ */
// Exercise 1: Create an adjacency matrix of a directed graph
void CreateMGraph(MGraph *G)
{
    int i,j,k,w;  
    printf("���붥�����ͱ���:\n");  
    scanf("%d %d",&G->numNodes,&G->numEdges); /* ���붥�����ͱ��� */  
    for(i = 0;i <G->numNodes;i++) /* ���붥����Ϣ,��������� */  
        scanf(&G->vexs[i]);  
    for(i = 0;i <G->numNodes;i++)  
        for(j = 0;j <G->numNodes;j++)  
           G->arc[i][j]=0;        /* �ڽӾ����ʼ�� */  
    printf("�����(vi,vj)�ϵ��±�i���±�j��Ȩw:\n");
    for(k = 0;k <G->numEdges;k++) /* ����numEdges���ߣ������ڽӾ��� */  
    {    
        scanf("%d %d %d",&i,&j,&w); /* �����(vi,vj)�ϵ�Ȩw */  
        G->arc[i][j]=w;    
    }  
	
}

/* ��ͼ���ڽӾ�������ߵ���Ϣ����ߵ�ͷ��β��Ȩֵ */
// Exercise 2: Output the edges' tail and head and weight
void  OutPutMGraph(MGraph *G)
{
	
  int i,j;
  for(i=0;i<G->numNodes;i++)
  { 
    for(j=0;j<G->numEdges;j++)
      printf("%6d",G->arc[i][j]);
    printf("\n");
  }

}

int main(void)
{    
	MGraph G;    
	CreateMGraph(&G);
    OutPutMGraph(&G);
	
	return 0;
}


