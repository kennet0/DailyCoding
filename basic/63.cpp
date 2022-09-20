// 63. 인접행렬(가중치 방향그래프)
// 아래 그림과 같은 그래프 정보를 인접행렬로 표현해보세요.
// 2 5
// 1 2 5
// 7
// 5
// 4
// 5
// 2
// 3 4 6
// 5
// 5
// ▣ 입력설명
// 첫째 줄에는 정점의 수 N(1<=N<=20)와 간선의 수 M가 주어진다. 그 다음부터 M줄에 걸쳐 연
// 결정보와 거리비용이 주어진다.
// ▣ 출력설명
// 인접행렬을 출력하세요.

#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>

using namespace std;
int list[21][21];

int main(){
  freopen("input.txt","rt", stdin);
  int n, m;
  cin >> n >> m;
  
  for(int i=1; i<=m; i++){
      int a,b,c;
      scanf("%d %d %d", &a, &b, &c);
      list[a][b] = c;      
    }


 for(int i=1; i<=n; i++){
    for(int j=1; j<=n; j++){
      cout << list[i][j] << " ";      
    }
    cout << endl;
       
  }

}

