// 10진수 N이 입력되면 2진수로 변환하여 출력하는 프로그램을 작성하세요. 단 재귀함수를 이용
// 해서 출력해야 합니다.
// ▣ 입력설명
// 첫 번째 줄에 10진수 N(1<=N<=1,000)이 주어집니다.
// ▣ 출력설명
// 첫 번째 줄에 이진수를 출력하세요.

#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>

using namespace std;


void DFS(int n){
  if(n>7) return;

  DFS(n*2);
  DFS(n*2+1);
  cout << n << " ";
}


int main(){
  // freopen("input.txt","rt", stdin);
  // int n;
  // cin >> n ;
  DFS(1);

  

}

