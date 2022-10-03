//80. 다익스트라 알고리즘
//  - 86 -
//[C++를 이용한 창의적 문제 해결]
//  아래의 가중치 방향그래프에서 1번 정점에서 모든 정점으로의 최소 거리비용을 출력하는 프로 그램을 작성하세요. (경로가 없으면 Impossible를 출력한다)
//2
//▣ 입력설명
//첫째 줄에는 정점의 수 N(1<=N<=20)와 간선의 수 M가 주어진다. 그 다음부터 M줄에 걸쳐 연 결정보와 거리비용이 주어진다.
//▣ 출력설명
//1번 정점에서 각 정점으로 가는 최소 비용을 2번 정점부터 차례대로 출력하세요.
//▣ 입력예제 1
//     1
//4
//3
//12 5
//255
//5 456

#include <iostream>
#include <vector>
#include <string>
#include <queue>
#define MAX 2147483647

using namespace std;
struct Edge{
    int vex;
    int dis;
    Edge(int a, int b){
        vex = a;
        dis = b;
    }
    bool operator<(const Edge &b)const{
        return dis > b.dis;
    }
};

int main() {
    freopen("input.txt", "rt", stdin);
    priority_queue<Edge> q;
    vector<pair<int,int>> graph[30];
    int n, m ,a ,b ,c;
    cin >> n >> m;
    vector<int> dist(n+1, MAX);
    for(int i=1; i<=m ; i++){
        cin >> a >> b >> c;
        graph[a].push_back({b,c});
    }
    q.push(Edge(1,0));
    dist[1]=0;
    while(!q.empty()){
        int now = q.top().vex;
        int cost = q.top().dis;
        q.pop();
        if(cost > dist[now]) continue;
        for(int i=0;i<graph[now].size();i++){
            int next = graph[now][i].first;
            int nextdis= cost+graph[now][i].second;
            if(nextdis < dist[next]){
                dist[next]=nextdis;
                q.push(Edge(next,nextdis));
            }
        }
    }
    for(int i=2;i<=n;i++){
        if(dist[i]==MAX) cout<<i<<" : impossible" << endl;
        else cout <<i<< " : " << dist[i] << endl;
    }
   
}

