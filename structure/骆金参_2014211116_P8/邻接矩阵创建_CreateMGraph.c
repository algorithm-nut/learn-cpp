#include "stdio.h"    
#include "stdlib.h"   
#include "io.h"  
#include "math.h"  
#include "time.h"

#define OK 1
#define ERROR 0
#define TRUE 1
#define FALSE 0
#define MAXVEX 100 /* 最大顶点数，应由用户定义 */
#define INFINITY 65535

typedef int Status;	/* Status是函数的类型,其值是函数结果状态代码，如OK等 */
typedef char VertexType; /* 顶点类型应由用户定义  */
typedef int EdgeType; /* 边上的权值类型应由用户定义 */
typedef struct
{
	VertexType vexs[MAXVEX];  /* 顶点表 */
	EdgeType arc[MAXVEX][MAXVEX]; /* 邻接矩阵，可看作边表 */
	int numNodes, numEdges; /* 图中当前的顶点数和边数  */
}MGraph;

/* 键盘输入顶点和边的信息，建立图的邻接矩阵表示 */
// Exercise 1: Create an adjacency matrix of a directed graph
void CreateMGraph(MGraph *G)
{
    int i,j,k,w;  
    printf("输入顶点数和边数:\n");  
    scanf("%d %d",&G->numNodes,&G->numEdges); /* 输入顶点数和边数 */  
    for(i = 0;i <G->numNodes;i++) /* 读入顶点信息,建立顶点表 */  
        scanf(&G->vexs[i]);  
    for(i = 0;i <G->numNodes;i++)  
        for(j = 0;j <G->numNodes;j++)  
           G->arc[i][j]=0;        /* 邻接矩阵初始化 */  
    printf("输入边(vi,vj)上的下标i，下标j和权w:\n");
    for(k = 0;k <G->numEdges;k++) /* 读入numEdges条边，建立邻接矩阵 */  
    {    
        scanf("%d %d %d",&i,&j,&w); /* 输入边(vi,vj)上的权w */  
        G->arc[i][j]=w;    
    }  
	
}

/* 用图的邻接矩阵输出边的信息，如边的头和尾及权值 */
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


