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
	    int Hash[N];    //Hash����		
		int Degree[N];  //�������
	    vector< vector<int> > G(N);	 //����ͼ  ��άvector����
	    vector<int> Ans;			 //�������

	    /*����hash����*/
	    for (int i = 0; i < N; i++) {
		    scanf("%d",&Hash[i]);
		    if (Hash[i] > 0)  Degree[i] = 0;
		    else              Degree[i] = -1;			
		          //���С��0����ȼ�Ϊ-1����ʾû��Ԫ��
	    }

	    /*������Ȳ���������ͼ*/
	    for (int i = 0; i < N; i++){
		    if (Hash[i] < 0)   continue;
		    int curPos = i;				//��ǰ����
		    int hashPos = Hash[i] % N;	//Hash�������
		    Degree[i] = (curPos - hashPos + N) % N;	 //������ȣ�Ҳ���ǳ�ͻ�Ĵ���
		    for (int j = 0; j < Degree[i]; j++)
			    G[(hashPos + j + N) % N].push_back(i);
	    }

	    /*��������*/
	    typedef pair<int, int> PAIR;
	    priority_queue<PAIR, vector< PAIR >, greater< PAIR > > q;  //���ȶ���
	    for (int i = 0; i < N; i++) {
		    if (Degree[i] == 0) {
			    q.push(PAIR(Hash[i], i));
		    }
	    }
	
	    while ( !q.empty() ) {
		    PAIR p = q.top();       //ÿ��ȡ����ǰ���Ϊ0�Ķ�����Key��С��
		    int V = p.second;       //secondΪ����
		    Ans.push_back(p.first); //firstΪ�ö����Key
		    q.pop();
		    for (int i = 0; i < G[V].size(); i++)    //ɨ��������㣬��ȴ���
			    if (--Degree[G[V][i]] == 0)
				    q.push(PAIR(Hash[G[V][i]], G[V][i]));
	    }
	
	    /*���*/
	    printf("%d",Ans[0]);
	    for (int i = 1; i < Ans.size(); i++)
		    printf(" %d",Ans[i]);
		printf("\n"); 
    }
    
	return 0;
}

//���������� 11  33 1 13 12 34 38 27 22 32 -1 21  3  3 1 2  0 
//��������� 1 13 12 21 33 34 38 27 22 32    1 2 3  

