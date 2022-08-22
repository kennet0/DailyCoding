// 3. 진약수의 합
// 자연수 N이 주어지면 자연수 N의 진약수의 합을 수식과 함께 출력하는 프로그램을 작성하세
// 요.
// ▣ 입력설명
// 첫 줄에 자연수 N이 주어집니다. (3<N<=100)
// ▣ 출력설명
// 첫 줄에 더하는 수식과 함께 합을 출력합니다.

#include <iostream>

int main(){

    int n = 0, sum = 1;
    std::cin >> n ;
    std::cout << 1;

    for(int i = 2 ; i < n ; i++)
    {
        if(n % i == 0)
        {
            std::cout << " + "  << i ;
            sum += i;
        }
    }
     std::cout << " = " << sum;
}