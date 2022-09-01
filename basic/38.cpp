// 38. Inversion Sequence
// 1부터 n까지의 수를 한 번씩만 사용하여 이루어진 수열이 있을 때, 1부터 n까지 각각의 수 
// 앞에 놓여 있는 자신보다 큰 수들의 개수를 수열로 표현한 것을 Inversion Sequence라 한다. 
// 예를 들어 다음과 같은 수열의 경우 
//  4 8 6 2 5 1 3 7
// 1앞에 놓인 1보다 큰 수는 4, 8, 6, 2, 5. 이렇게 5개이고,
// 2앞에 놓인 2보다 큰 수는 4, 8, 6. 이렇게 3개,
// 3앞에 놓인 3보다 큰 수는 4, 8, 6, 5 이렇게 4개......
// 따라서 4 8 6 2 5 1 3 7의 inversion sequence는 5 3 4 0 2 1 1 0 이 된다.
// n과 1부터 n까지의 수를 사용하여 이루어진 수열의 inversion sequence가 주어졌을 때, 원래
// 의 수열을 출력하는 프로그램을 작성하세요.
// ▣ 입력설명
// 첫 번째 줄에 자연수 N(3<=N<100)이 주어지고, 두 번째 줄에는 inversion sequence가 숫자 
// 사이에 한 칸의 공백을 두고 주어진다.
// ▣ 출력설명
// 오름차순으로 정렬된 수열을 출력합니다.
#include <iostream>
#include <vector>
int main()
{
   freopen("input.txt","rt", stdin);
  int n,i,j,pos;
  scanf("%d",&n);
  std::vector<int> is(n+1), os(n+1);
  for(i=1; i<=n; i++){
    scanf("%d",&is[i]);
  }

  for(i=n; i>0; i--){
    pos = i;
    for(j=1;j<=is[i];j++){
      os[pos]= os[pos+1];
      pos++;
    }
    os[pos]=i;

  }
  
  
  for(i=1;i<=n;i++)
  {
    printf("%d ",os[i]);
  }
 
  return 0;
}