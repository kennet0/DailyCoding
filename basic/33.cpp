// 33. 3등의 성적은?
// N명의 수학성적이 주어지면 그 중 3등을 한 수학성적을 출력하는 프로그램을 작성하세요.
// 만약 학생의 점수가 100점이 3명, 99점이 2명, 98점이 5명, 97점이 3명 이런식으로 점수가 
// 분포되면 1등은 3명이며, 2등은 2명이며 3등은 5명이 되어 98점이 3등을 한 점수가 됩니다.
// ▣ 입력설명
// 첫 번째 줄에 자연수 N(1<=N<=100)이 주어집니다.
// 두 번째 줄에 N개의 수학성적 점수가 공백을 사이에 두고 입력됩니다. 수학성적 점수는 100점 
// 만점 기준으로 입력됩니다.
// ▣ 출력설명
// 3등을 한 점수를 출력합니다.

#include <iostream>
#include <vector>

int main()
{
  //  freopen("input.txt","rt", stdin);
  int n,a[101], i,j,tmp,idx;
  scanf("%d",&n);
  for(i=0; i<n; i++){
    scanf("%d",&a[i]);
  }

  for(i=0; i<n-1; i++){
    idx = i;
    for(j=i+1; j<n; j++){
      if(a[idx]<a[j]) idx = j;
    }
    tmp = a[i];
    a[i] = a[idx];
    a[idx] = tmp;
  }
idx = 0;
for(i=0; i<n-1; i++){
  
  if(a[i]!=a[i+1]) idx++;
  if(idx == 3){
    printf("%d ",a[i]);
    break;
  } 
}

  


  return 0;
}