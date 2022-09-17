// 59. 부분집합(DFS)
// 자연수 N이 주어지면 1부터 N까지의 원소를 갖는 집합의 부분집합을 모두 출력하는 프로그램
// 을 작성하세요.
// ▣ 입력설명
// 첫 번째 줄에 자연수 N(1<=N<=10)이 주어집니다.
// ▣ 출력설명
// 첫 번째 줄부터 각각의 부분집합을 출력합니다. 부분집합을 출력하는 순서는 출력예제에서 출
// 력한 순서와 같게 합니다. 단 공집합은 출력하지 않습니다.

#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>

using namespace std;

int n, ch[11];

void DFS(int L){
  if(L == n+1) {
    for(int i =1; i<=n; i++){
      if(ch[i]==1) cout << i << " ";   
    }
    cout << endl;
  }else{
    ch[L] = 1;
    DFS(L+1);
    ch[L] = 0;
    DFS(L+1);
  }
  
  
}


int main(){
  // freopen("input.txt","rt", stdin);
  cin >> n ;
  DFS(1);
}

