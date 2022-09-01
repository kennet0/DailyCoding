// 39. 두 배열 합치기
// 오름차순으로 정렬이 된 두 배열이 주어지면 두 배열을 오름차순으로 합쳐 출력하는 프로그램
// 을 작성하세요.
// ▣ 입력설명
// 첫 번째 줄에 첫 번째 배열의 크기 N(1<=N<=100)이 주어집니다.
// 두 번째 줄에 N개의 배열 원소가 오름차순으로 주어집니다. 
// 세 번째 줄에 두 번째 배열의 크기 M(1<=M<=100)이 주어집니다.
// 네 번째 줄에 M개의 배열 원소가 오름차순으로 주어집니다. 
// 각 배열의 원소는 int형 변수의 크기를 넘지 않습니다.
// ▣ 출력설명
// 오름차순으로 정렬된 배열을 출력합니다.
#include <iostream>
#include <vector>
int main()
{
   freopen("input.txt","rt", stdin);
  int n,m,i,j,pos;
  scanf("%d",&n);
  std::vector<int> a(n);
  for(i=0; i<n; i++){
    scanf("%d",&a[i]);
  }
  scanf("%d",&m);
  std::vector<int> b(m),sum(n+m);
  for(i=0; i<m; i++){
    scanf("%d",&b[i]);
  }

  for(i=0; i<n; i++){
    for(j=0; j<m; j++){
      
    }
    
  }
  
  for(i=1;i<=n;i++)
  {
    printf("%d ",os[i]);
  }
 
  return 0;
}