// 64. 경로 탐색(DFS)
// 방향그래프가 주어지면 1번 정점에서 N번 정점으로 가는 모든 경로의 가지 수를 출력하는 프
// 로그램을 작성하세요. 아래 그래프에서 1번 정점에서 5번 정점으로 가는 가지 수는 
// 1 2 3 4 5
// 1 2 5
// 1 3 4 2 5
// 1 3 4 5
// 1 4 2 5
// 1 4 5
// 총 6 가지입니다. 
// ▣ 입력설명
// 첫째 줄에는 정점의 수 N(1<=N<=20)와 간선의 수 M가 주어진다. 그 다음부터 M줄에 걸쳐 연
// 결정보가 주어진다.
// ▣ 출력설명
// 총 가지수를 출력한다.

#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>

using namespace std;

int list[21][21] ,ch[21];
int cnt=0;
int n, m;

void DFS(int v)
{
  if(v == n) {
    cnt++;
  }else{
    for(int i =1; i<=n;i++){
      if(list[v][i]==1 && ch[i]==0){
        ch[i] == 1;
        DFS(i);
        ch[i]== 0;
      }
    }
  }
}

int main()
{
  freopen("input.txt","rt", stdin);
  cin >> n >> m;
  
  for(int i=1; i<=m; i++){
      int a,b;
      scanf("%d %d", &a, &b);
      list[a][b] = 1;      
    }
  ch[1]=1;
  DFS(1);
}

