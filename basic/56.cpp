// 56. 재귀함수 분석
// 자연수 N이 주어지면 아래와 같이 출력하는 프로그램을 작성하세요. 재귀함수를 이용해서 출
// 력해야 합니다.
// ▣ 입력설명
// 첫 번째 줄에 자연수 N(1<=N<=20)이 주어집니다.
// ▣ 출력설명
// 첫 번째 줄에 재귀함수를 이용해서 출력하세요.

#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>

using namespace std;

void DFS(int n){
  
  if(n == 0) return;
  DFS(n-1);
  cout << n <<" ";


}


int main(){
  // freopen("input.txt","rt", stdin);
  int n;
  cin >> n ;
  DFS(n);

  

}

