// 32. 선택정렬
// N개이 숫자가 입력되면 오름차순으로 정렬하여 출력하는 프로그램을 작성하세요.
// 정렬하는 방법은 선택정렬입니다.
// ▣ 입력설명
// 첫 번째 줄에 자연수 N(1<=N<=100)이 주어집니다.
// 두 번째 줄에 N개의 자연수가 공백을 사이에 두고 입력됩니다. 각 자연수는 정수형 범위 안에 
// 있습니다. 
// ▣ 출력설명
// 오름차순으로 정렬된 수열을 출력합니

#include <iostream>
#include <vector>

int main()
{
   freopen("input.txt","rt", stdin);
  int n,a[101], i,j,tmp;
  scanf("%d",&n);
  for(i=0; i<n; i++){
    scanf("%d",&a[i]);
  }

  for(i=0;i<n;i++)
  {
    for(j=0;j<n;j++){
      if(a[i]<a[j]){
        tmp=a[i];
        a[i]=a[j];
        a[j]=tmp;
      }
    }
  }
  for(i=0; i<n; i++){
    printf("%d ",a[i]);
  }


  return 0;
}