// 49. 블록의 최댓값
// 현수는 블록놀이를 좋아합니다. 현수에게 정면에서 본 단면과 오른쪽 측면에서 본 단면을 주
// 고 최대 블록개수를 사용하여 정면과 오른쪽 측면에서 본 모습으로 블록을 쌓으라 했습니다.
// 현수가 블록을 쌓는데 사용해야 할 최대 개수를 출력하는 프로그램을 작성하세요.
// 정면
 
// 오른쪽 측면
 
// 2 3 1
// 2 2 1
// 1 1 1
// 1 1 1
// 위에서 본 높이(최대개수)
 
// 위에서 봤을 때 각 칸의 블록의 개수입니다. 정면에서의 높이 정보와 오른쪽 측면에서의 높이 
// 정보가 주어지면 사용할 수 있는 블록의 쵀대 개수를 출력하세요.
// ▣ 입력설명
// 첫 줄에 블록의 크기 N(3<=N<=10)이 주어집니다. 블록이 크기는 정사각형 N*N입니다.
// 두 번째 줄에 N개의 정면에서의 높이 정보가 왼쪽 정보부터 주어집니다.
// 세 번째 줄에 N개의 오른쪽 측면 높이 정보가 앞쪽부터 주어집니다.
// 블록의 높이는 10 미만입니다.
// ▣ 출력설명
// 첫 줄에 블록의 최대 개수를 출력합니다.

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


int main(){
  // freopen("input.txt","rt", stdin);
  int i,j, n, sum=0;
  scanf("%d", &n);
  vector<vector<int> > x(n, vector<int> (n));
  
  vector<vector<int> > a(2, vector<int> (n));
  for(i=0;i<2;i++){
    for(j=0;j<n;j++){
      scanf("%d", &a[i][j]);
      // printf("%d ", a[i][j]);
    }
  }

  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      x[j][i] = a[0][i];
    }
  }

  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      if(x[i][j] > a[1][i])
        x[i][j] = a[1][i];
    }
  }

  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      sum += x[i][j];
    }
  }
  printf("%d", sum);

}

