// 4. 나이 차이
// N(2<=N<=100)명의 나이가 입력됩니다. 이 N명의 사람 중 가장 나이차이가 많이 나는 경우는
// 몇 살일까요? 최대 나이 차이를 출력하는 프로그램을 작성하세요.
// ▣ 입력설명
// 첫 줄에 자연수 N(2<=N<=100)이 입력되고, 그 다음 줄에 N개의 나이가 입력된다.
// ▣ 출력설명
// 첫 줄에 최대 나이차이를 출력합니다.

#include <iostream>
using namespace std;

int main(){

    // freopen("input.txt","rt", stdin);
    int a, n = 0, min = 1000000, max = 0;

    cin >> n;
    for(int i = 0 ; i < n; i++)
    {
        cin >> a;
        if(a > max) max = a;
        if(a < min) min = a;
    }
   

    cout << max - min;
 
}