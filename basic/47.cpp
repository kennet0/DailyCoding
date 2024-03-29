// 47. 봉우리
// 지도 정보가 N*N 격자판에 주어집니다. 각 격자에는 그 지역의 높이가 쓰여있습니다. 각 격자
// 판의 숫자 중 자신의 상하좌우 숫자보다 큰 숫자는 봉우리 지역입니다. 봉우리 지역이 몇 개 
// 있는 지 알아내는 프로그램을 작성하세요. 
// 격자의 가장자리는 0으로 초기화 되었다고 가정한다.
// 만약 N=5 이고, 격자판의 숫자가 다음과 같다면 봉우리의 개수는 10개입니다.
// 0 0 0 0 0 0 0
// 0 5 3 7 2 3 0
// 0 3 7 1 6 1 0
// 0 7 2 5 3 4 0
// 0 4 3 6 4 1 0
// 0 8 7 3 5 2 0
// 0 0 0 0 0 0 0
// ▣ 입력설명
// 첫 줄에 자연수 N이 주어진다.(1<=N<=50) 
// 두 번째 줄부터 N줄에 걸쳐 각 줄에 N개의 자연수가 주어진다. 각 자연수는 100을 넘지 않는
// 다. 
// ▣ 출력설명
// 봉우리의 개수를 출력하세요.

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int dx[4]={-1,0,1,0};
int dy[4]={0,1,0,-1};
int main(){
  freopen("input.txt","rt", stdin);
  int n,i,j,k, cnt=0, flag;
  scanf("%d", &n);
  vector<vector<int>> a(n+2, vector<int>(n+2, 0));
  for(i=1; i<=n; i++){
    for(j=1; j<=n; j++){
      scanf("%d", &a[i][j]);
    }
  }

  for(i=1; i<=n; i++){
    for(j=1; j<=n; j++){
      flag=0;
      for(k=0;k<4; k++){
        if(a[i][j] <= a[i+dx[k]][j+dy[k]]){
          flag=1;
          break;
        }
      }
      if(flag==0) cnt++;
    }
  }
  printf("%d\n", cnt);
}


