// 자연수 A, B가 주어지면 A부터 B까지의 합을 수식과 함께 출력하세요.
// ▣ 입력설명
// 첫 줄에 자연수 A, B가 공백을 사이에 두고 차례대로 입력된다. (1<=A<B<=100)
// ▣ 출력설명
// 첫 줄에 더하는 수식과 함께 합을 출력합니다

#include <iostream>

int main(){


  int a ,b, i = 0, sum = 0, temp = 0;
  std::cin >> a >> b;
  for (int i = a; i < b ; i++ )
  {
      std::cout << i << " +" ;
      sum += i;
  }

  std::cout << b << " = " << sum+b;

}