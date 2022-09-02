// 40. 교집합(투포인터 알고리즘)
// 두 집합 A, B가 주어지면 두 집합의 교집합을 출력하는 프로그램을 작성하세요.
// ▣ 입력설명
// 첫 번째 줄에 집합 A의 크기 N(1<=N<=30,000)이 주어집니다.
// 두 번째 줄에 N개의 원소가 주어집니다. 원소가 중복되어 주어지지 않습니다.
// 세 번째 줄에 집합 B의 크기 M(1<=M<=30,000)이 주어집니다.
// 네 번째 줄에 M개의 원소가 주어집니다. 원소가 중복되어 주어지지 않습니다.
// 각 집합의 원소는 int형 변수의 크기를 넘지 않습니다.
// ▣ 출력설명
// 두 집합의 교집합을 오름차순 정렬하여 출력합니다.

#include <iostream>
#include <vector>

int main()
{
   freopen("input.txt","rt", stdin);
  int n,m,i,j, p1=1, p2=1, p3=1;
  scanf("%d",&n);
  std::vector<int> a(n+1);
  for(i=1; i<=n; i++){
    scanf("%d",&a[i]);
    if(a[i]>a[i-1])
  }
  scanf("%d",&m);
  std::vector<int> b(m+1), sum(n+m+1);
  for(i=1; i<=m; i++){
    scanf("%d",&b[i]);
  }
  while(a[p1]<=n && p2<=m)
  {
    if(a[p1]!=b[p2]){
      if(p1<p2) p1++;
      else p2++;
      
    }else{
       sum[p3++] = a[p1++];
    }
  }
 


 
  
  for(i=1;i<=n+m;i++)
  {
    printf("%d ",sum[i]);
  }
 
  return 0;
}