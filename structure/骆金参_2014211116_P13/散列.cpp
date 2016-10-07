#include<stdio.h>
#include<iostream>
#include<vector>
#include<queue>

using namespace std;

int main(void) {
	
	while( 1 ) {
		int N;
	    scanf("%d",&N);
	    if( N==0 )  break;			
	    int Hash[N];    //Hash数组		
		int Degree[N];  //入度数组
	    vector< vector<int> > G(N);	 //无向图  二维vector容器
	    vector<int> Ans;			 //输出序列

	    /*输入hash序列*/
	    for (int i = 0; i < N; i++) {
		    scanf("%d",&Hash[i]);
		    if (Hash[i] > 0)  Degree[i] = 0;
		    else              Degree[i] = -1;			
		          //如果小于0，入度记为-1，表示没有元素
	    }

	    /*计算入度并建立无向图*/
	    for (int i = 0; i < N; i++){
		    if (Hash[i] < 0)   continue;
		    int curPos = i;				//当前坐标
		    int hashPos = Hash[i] % N;	//Hash后的坐标
		    Degree[i] = (curPos - hashPos + N) % N;	 //计算入度，也就是冲突的次数
		    for (int j = 0; j < Degree[i]; j++)
			    G[(hashPos + j + N) % N].push_back(i);
	    }

	    /*拓扑排序*/
	    typedef pair<int, int> PAIR;
	    priority_queue<PAIR, vector< PAIR >, greater< PAIR > > q;  //优先队列
	    for (int i = 0; i < N; i++) {
		    if (Degree[i] == 0) {
			    q.push(PAIR(Hash[i], i));
		    }
	    }
	
	    while ( !q.empty() ) {
		    PAIR p = q.top();       //每次取出当前入度为0的顶点中Key最小的
		    int V = p.second;       //second为顶点
		    Ans.push_back(p.first); //first为该顶点的Key
		    q.pop();
		    for (int i = 0; i < G[V].size(); i++)    //扫描关联顶点，入度处理
			    if (--Degree[G[V][i]] == 0)
				    q.push(PAIR(Hash[G[V][i]], G[V][i]));
	    }
	
	    /*输出*/
	    printf("%d",Ans[0]);
	    for (int i = 1; i < Ans.size(); i++)
		    printf(" %d",Ans[i]);
		printf("\n"); 
    }
    
	return 0;
}

//测试样例： 11  33 1 13 12 34 38 27 22 32 -1 21  3  3 1 2  0 
//输出样例： 1 13 12 21 33 34 38 27 22 32    1 2 3  

