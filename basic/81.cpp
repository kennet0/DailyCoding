//81. 벨만-포드 알고리즘
//  - 87 -
//
//  N개의 도시가 주어지고, 각 도시들을 연결하는 도로와 해당 도로를 통행하는 비용이 주어질 때 한 도시에서 다른 도시로 이동하는데 쓰이는 비용의 최소값을 구하는 프로그램을 작성하세 요.
//5
//1 2135
//               4
//354
//▣ 입력설명
//첫 번째 줄에는 도시의 수N(N<=100)과 도로수 M(M<=200)가 주어지고, M줄에 걸쳐 도로정보 와 비용이 주어진다. 만약 1번 도시와 2번도시가 연결되고 그 비용이 13이면 “1 2 13”으로 주어진다. 그 다음 마지막 줄에 출발도시와 도착도시가 주어진다.
//▣ 출력설명
//출발도시에서 도착도시까지 가는데 걸리는 최소비용을 출력한다. 음의 사이클이 존재할 경우 -1를 출력한다.


#include <iostream>
#include <vector>
#include <string>
#include <queue>
#define MAX 2147483647

using namespace std;
int dist[101];

struct Edge{
    int s;
    int e;
    int val;
    Edge(int a, int b, int c){
        s=a;
        e=b;
        val=c;
    }
};

int main() {
    freopen("input.txt", "rt", stdin);
    vector<Edge> ed;
    int n,m,a,b,c,s,e;
    cin >> n >> m;
    
    for(int i=1;i<=m;i++){
        cin >> a >> b >> c;
        ed.push_back(Edge(a,b,c));
    }
    for(int i=1;i<=n;i++){
        dist[i]=MAX;
    }
    cin >> s >> e;
    dist[s]=0;
    for(int i=1; i<n;i++){
        for(int j=0; j<ed.size();j++){
            int start=ed[j].s;
            int des=ed[j].e;
            int val = ed[j].val;
            if(dist[start] != MAX && dist[start] + val < dist[des]){
                dist[des] = dist[start]+val;
            }
        }
    }
    cout << dist[e];
   
}

