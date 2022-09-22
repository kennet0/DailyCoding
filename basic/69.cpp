//68. 최소비용(DFS : 가중치 방향그래프 인접리스트)
//가중치 방향그래프가 주어지면 1번 정점에서 N번 정점으로 가는 최소비용을 출력하는 프로그
//램을 작성하세요.
//   1
//12
//225
//2
//5
//       6
//2
//10
//  3
//4 3
// ▣ 입력설명
//첫째 줄에는 정점의 수 N(1<=N<=20)와 간선의 수 M가 주어진다. 그 다음부터 M줄에 걸쳐 연 결정보가 주어진다.
//▣ 출력설명 최소비용을 출력합니다.
//

#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

int n,m, mins = 2147000000 ;
int ch[30];
vector<pair<int,int>> maps[30];

void DFS(int v, int sum){
    if(v==n){
        if(sum < mins) mins = sum;
        
    }else{
        for(int i=0;i<maps[v].size(); i++){
            int dest = maps[v][i].first;
            if(ch[dest] == 0){
                ch[dest] = 1;
                DFS(dest, sum + maps[v][i].second);
                ch[dest] = 0;
            }
        }
    }
}

int main() {
    freopen("input.txt","rt", stdin);
    int a,b,c;
    cin >> n >> m;
    
    for(int i=1; i<=m; i++){
        scanf("%d %d %d",&a,&b,&c);
        maps[a].push_back({b,c});
        
        
    }
    
    ch[1]=1;
    DFS(1,0);
    
    cout << mins;
}


