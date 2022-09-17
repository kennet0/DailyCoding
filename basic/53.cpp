// 53. K진수 출력
// 10진수 N이 입력되면 K진수로 변환하여 출력하는 프로그램을 작성하세요. 스택 자료구조를 사
// 용하시기 바랍니다.
// ▣ 입력설명
// 첫 번째 줄에 10진수 N(10<=N<=1,000)과 K(2, 5, 8, 16)가 주어진다.
// ▣ 출력설명
// K진수를 출력한다.

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


int main(){
  // freopen("input.txt","rt", stdin);
  int n , k;
  vector<int> nums;

  cin >> n >> k;
  int tmp = n;
  while (tmp > 0){
    nums.push_back(tmp % k); 
    tmp /= k;
   
  }
  
  while(!nums.empty()){
    int res = nums.back();
    if(res > 10) cout <<  (char)res+55;
    else 
    cout << res;
    nums.pop_back();
 }
 

}

