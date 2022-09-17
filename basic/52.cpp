// 52. Ugly Numbers
// 어떤 수를 소인수분해 했을 때 그 소인수가 2 또는 3 또는 5로만 이루어진 수를 Ugly 
// Number라고 부릅니다. Ugly Number를 차례대로 적어보면 
// 1, 2, 3, 4, 5, 6, 8, 9, 10, 12, 15, .......입니다. 숫자 1은 Ugly Number의 첫 번째 수로 합
// 니다. 자연수 N이 주어지면 Ugly Number를 차례로 적을 때 N번째 Ugly Number를 구하는 
// 프로그램을 작성하세요.
// ▣ 입력설명
// 첫 줄에 자연수 N(3<=N<=1500)이 주어집니다. 
// ▣ 출력설명
// 첫 줄에 N번째 Ugly Number를 출력하세요.

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int a[1501];

int main(){
  // freopen("input.txt","rt", stdin);
  int n,min=2147000000, idx, p2, p3, p5;
 
  cin >> n;

  a[1]=1;
  p2=p3=p5=1;

  for(int i = 2; i<=n; i++){
    
    if(a[p2]*2 < a[p3]*3) min = a[p2]*2;
    else min = a[p3]*3;
    if(a[p5]*5 < min) min = a[p5]*5;

    if(min == a[p2]*2) p2++;
    if(min == a[p3]*3) p3++;
    if(min == a[p5]*5) p5++;
    a[i] = min;
  }
  
  cout << a[n];

}

