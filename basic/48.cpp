// 48. 각 행의 평균과 가장 가까운 값
// <그림 1>과 같이 9 × 9 격자판에 쓰여진 81개의 자연수가 주어질 때, 각 행의 평균을 구하고, 
// 그 평균과 가장 가까운 값을 출력하는 프로그램을 작성하세요. 평균은 소수점 첫 째 자리에서 반
// 올림합니다. 평균과 가까운 값이 두 개이면 그 중 큰 값을 출력하세요.
// ▣ 입력설명
// 첫 째 줄부터 아홉 번째 줄까지 한 줄에 아홉 개씩 자연수가 주어진다. 주어지는 자연수는 100보
// 다 작다.
// ▣ 출력설명
// 첫째 줄에 첫 번째 줄부터 각 줄에 각행의 평균과 그 행에서 평균과 가장 가까운 수를 출력한다.

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int map[10];

int main(){
  // freopen("input.txt","rt", stdin);
  int i,j, avr, num, tmp, min;
  float sum;
 
  for(i=1; i<=9; i++){
    sum=0; num=0; min=2147000000;
    for(j=1; j<=9; j++){
      scanf("%d", &map[j]);
      sum += (float)map[j];
    }
    avr = sum/9 + 0.5f;
    for(j=1; j<=9; j++){
      tmp = abs(avr - map[j]);
      if(tmp<min) {
        min = tmp;
        num = map[j];
      }else if(tmp == min){
        if(num<map[j]) num = map[j];
      }
      
    }
    printf("%d %d\n", avr, num);
  }


}

