//다음 그래프에서 1번 정점에서 각 정점으로 가는 최소 이동 간선수를 출력하세요.
//   1
//3
//25
//46
//                   ▣ 입력설명
//첫째 줄에는 정점의 수 N(1<=N<=20)와 간선의 수 M가 주어진다. 그 다음부터 M줄에 걸쳐 연 결정보가 주어진다.
//▣ 출력설명
//1번 정점에서 각 정점으로 가는 최소 간선수를 2번 정점부터 차례대로 출력하세요.

#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;
int ch[21],dis[30];
vector<int> maps[30] ;
queue<int> q;


int main() {
    freopen("input.txt","rt", stdin);
    int n ,m;
    cin >> n >> m;
    for(int i=1; i<=m; i++){
        int a,b;
        scanf("%d %d", &a, &b);
        maps[a].push_back(b);
    }
    int start =1;
    q.push(start);
    ch[start] = 1;
    while(!q.empty()){
        int x= q.front();
        q.pop();
        for(int i=0;i<maps[x].size();i++){
            int y = maps[x][i];
            if(!ch[y]){
                q.push(y);
                ch[y]=1;
                dis[y] = dis[x] +  1;
            }
        }
    }
    for(int i=2; i<=n;i++ ){
        cout << i << " : " << dis[i] << endl;
    }
}


//다음 그래프에서 1번 정점에서 각 정점으로 가는 최소 이동 간선수를 출력하세요.
//   1
//3
//25
//46
//                   ▣ 입력설명
//첫째 줄에는 정점의 수 N(1<=N<=20)와 간선의 수 M가 주어진다. 그 다음부터 M줄에 걸쳐 연 결정보가 주어진다.
//▣ 출력설명
//1번 정점에서 각 정점으로 가는 최소 간선수를 2번 정점부터 차례대로 출력하세요.

#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;
int ch[10001], d[]= {1,-1, 5};

int main() {
//    freopen("input.txt","rt", stdin);
    int s,e,x,pos;
    queue<int> q;
    cin >> s >> e;
    ch[s]=1;
    q.push(s);
    while(!q.empty()){
        x=q.front();
        q.pop();
        for(int i=0; i<3; i++){
            pos = x+d[i];
            if(pos<=0|| pos>10000) continue;
            if(pos==e){
                cout << ch[x];
                exit(0);
            }
            if(ch[pos]==0){
                ch[pos]=ch[x]+1;
                q.push(pos);
            }
        }
    }
    
}


