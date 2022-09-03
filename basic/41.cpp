// 41. 연속된 자연수의 합
// 입력으로 양의 정수 N이 입력되면 2개 이상의 연속된 자연수의 합으로 정수 N을 표현하는 방
// 법의 가짓수를 출력하는 프로그램을 작성하세요.
// 만약 N=15이면 
// 7+8=15
// 4+5+6=15
// 1+2+3+4+5=15
// 와 같이 총 3가지의 경우가 존재한다.
// ▣ 입력설명
// 첫 번째 줄에 양의 정수 N(7<=N<1000)이 주어진다.
// ▣ 출력설명
// 첫줄부터 각각의 경우의 수를 출력한다.
// 맨 마지막 줄에 총 개수를 출력한다.

#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
  //  freopen("input.txt","rt", stdin);
  int a,b=1,cnt=0, tmp, i;
  scanf("%d",&a);
  tmp=a;
  a--;
  while(a>0){
    b++;
    a=a-b;
    if(a%b==0){
      for(i=1; i<b; i++){
        printf("%d + ", (a/b)+i);
      }
      printf("%d = %d\n", (a/b)+b, tmp);
      cnt++;
    }

  }
  printf("%d",cnt);
 
  return 0;
}