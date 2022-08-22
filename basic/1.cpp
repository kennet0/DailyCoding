#include <iostream>

int main(){
  // 1부터 N 까지 M의 배수 합

  int m ,n, i, sum = 0;
  std::cin >> n >> m;
  for (int i = 0; i <= n ; i++ )
  {
      if(i % m == 0)
      {
          sum += i;
      }
  }
  std::cout << sum;
}