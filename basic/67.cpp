//66. 경로 탐색(DFS : 인접리스트 방법)
//방향그래프가 주어지면 1번 정점에서 N번 정점으로 가는 모든 경로의 가지 수를 출력하는 프
//로그램을 작성하세요. 아래 그래프에서 1번 정점에서 5번 정점으로 가는 가지 수는
//12345125 125
//13425
//1345
//                   1425 145
//총 6 가지입니다.
//3
//4
//   ▣ 입력설명
//첫째 줄에는 정점의 수 N(1<=N<=20)와 간선의 수 M가 주어진다. 그 다음부터 M줄에 걸쳐 연 결정보가 주어진다.
//▣ 출력설명
//총 가지수를 출력한다.
//

#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

int ch[30];
int cnt = 0, n,m, mins = 2147000000;
int maps[30][30];

void DFS(int v,int sum){
    if(v==n){
        if(sum < mins) mins = sum;
    }else{
        for(int i=1;i<=n;i++){
            if(ch[i]==0 && maps[v][i]!=0){
                ch[i] = 1;
                DFS(i,sum+maps[v][i]);
                ch[i] = 0;
            }
        }
    }
}

int main() {
    freopen("input.txt","rt", stdin);
    int a,b,c;
    cin >> n >> m;
    
    for(int i=1;i<=m;i++){
        scanf("%d %d %d",&a, &b, &c);
        maps[a][b] = c;
    }
    ch[1] = 1;
    DFS(1,0);
    cout << mins;
    

}


