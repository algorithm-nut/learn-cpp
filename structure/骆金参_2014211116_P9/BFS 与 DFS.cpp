#include <iostream> 
#include <malloc.h> 
#define INFINITY 32767 
#define MAX_VEX 20             //��󶥵���� 
#define QUEUE_SIZE (MAX_VEX+1) //���г��� 
using namespace std; 
bool *visited;        //���ʱ�־����
 
//ͼ���ڽӾ���洢�ṹ 
typedef struct{ 
    char *vexs; //�������� 
    int arcs[MAX_VEX][MAX_VEX]; //�ڽӾ��� 
    int vexnum,arcnum; //ͼ�ĵ�ǰ�������ͻ��� 
}Graph; 

 //������ 
class Queue{ 
    public: 
        void InitQueue() { 
            base=(int *)malloc(QUEUE_SIZE*sizeof(int)); 
            front=rear=0; 
        } 
        void EnQueue(int e) { 
            base[rear]=e; 
            rear=(rear+1)%QUEUE_SIZE; 
        } 
        void DeQueue(int &e) { 
            e=base[front]; 
            front=(front+1)%QUEUE_SIZE; 
        } 
    public: 
        int *base; 
        int front; 
        int rear; 
 }; 
 
 //ͼG�в���Ԫ��c��λ�� 
int Locate(Graph G,char c) { 
    for(int i=0;i<G.vexnum;i++) 
    if(G.vexs[i]==c) return i; 
    return -1; 
} 

 //���������� 
void CreateUDN(Graph &G) { 
    int i,j,w,s1,s2; 
    char a,b,temp; 
    printf("���붥�����ͻ���:"); 
    scanf("%d%d",&G.vexnum,&G.arcnum); 
    temp=getchar(); //���ջس� 
    G.vexs=(char *)malloc(G.vexnum*sizeof(char)); //���䶥����Ŀ 
    printf("����%d������.\n",G.vexnum); 
    for(i=0;i<G.vexnum;i++){ //��ʼ������ 
        printf("���붥��%d:",i); 
        scanf("%c",&G.vexs[i]); 
        temp=getchar(); //���ջس� 
    } 
    for(i=0;i<G.vexnum;i++) //��ʼ���ڽӾ��� 
        for(j=0;j<G.vexnum;j++) 
            G.arcs[i][j]=INFINITY; 
            
    printf("����%d����.\n",G.arcnum);
  
    for(i=0;i<G.arcnum;i++){ //��ʼ���� 
        printf("���뻡%d:",i); 
        scanf("%c %c %d",&a,&b,&w); //����һ���������Ķ����Ȩֵ 
        temp=getchar(); //���ջس� 
        s1=Locate(G,a); 
        s2=Locate(G,b); 
        G.arcs[s1][s2]=G.arcs[s2][s1]=w; 
    } 
} 

 //ͼG�ж���k�ĵ�һ���ڽӶ��� 
int FirstVex(Graph G,int k) { 
    if(k>=0 && k<G.vexnum) { //k���� 
    for(int i=0;i<G.vexnum;i++) 
        if(G.arcs[k][i]!=INFINITY)  return i; 
    } 
return -1; 
}
 
 //ͼG�ж���i�ĵ�j���ڽӶ������һ���ڽӶ��� 
int NextVex(Graph G,int i,int j){ 
    if(i>=0 && i<G.vexnum && j>=0 && j<G.vexnum) { //i,j���� 
    for(int k=j+1;k<G.vexnum;k++) 
        if(G.arcs[i][k]!=INFINITY) return k; 
    } 
return -1; 
} 

//������ȱ��� 
void DFS(Graph G,int k) { 
    int i; 
    if(k==-1) { //��һ��ִ��DFSʱ,kΪ-1 
        for(i=0;i<G.vexnum;i++) 
        if(!visited[i]) DFS(G,i); //����δ���ʵĶ������DFS 
    } 
    else { 
        visited[k]=true; 
        printf("%c ",G.vexs[k]); //���ʵ�k������ 
        for(i=FirstVex(G,k);i>=0;i=NextVex(G,k,i)) 
            if(!visited[i]) DFS(G,i); //��k����δ���ʵ��ڽӶ���i�ݹ����DFS 
    } 
}

 
//������ȱ��� 
void BFS(Graph G){ 
    int k; 
    Queue Q; //��������Q 
    Q.InitQueue(); 
    for(int i=0;i<G.vexnum;i++) 
       if(!visited[i]) { //i��δ���� 
           visited[i]=true; 
           printf("%c ",G.vexs[i]); 
           Q.EnQueue(i); //i���� 
           while(Q.front!=Q.rear) { 
               Q.DeQueue(k); //��ͷԪ�س��в���Ϊk 
               for(int w=FirstVex(G,k);w>=0;w=NextVex(G,k,w)) 
                   if(!visited[w]){ //wΪk����δ���ʵ��ڽӶ��� 
                       visited[w]=true; 
                       printf("%c ",G.vexs[w]); 
                       Q.EnQueue(w); 
                   } 
           } 
       } 
 } 

//������ 
int main() { 
    int i; 
    Graph G; 
    CreateUDN(G); 
    visited=(bool *)malloc(G.vexnum*sizeof(bool)); 
    printf("\n������ȱ���: "); 
    for(i=0;i<G.vexnum;i++) 
        visited[i]=false; 
    DFS(G,-1); 
    printf("\n������ȱ���: "); 
    for(i=0;i<G.vexnum;i++) 
        visited[i]=false; 
    BFS(G); 
    return 0; 
} 

