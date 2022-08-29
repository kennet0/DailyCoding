// 30. 3의 개수는?(large)
// 자연수 N이 입력되면 1부터 N까지의 자연수를 종이에 적을 때 각 숫자 중 3의 개수가 몇 개 
// 있는지 구하려고 합니다.
// 예를 들어 1부터 15까지는 1, 2, 3, 4, 5, 6, 7, 8, 9, 1, 0, 1, 1, 1, 2, 1, 3, 1, 4, 1, 5으로 
// 3의 개수는 2개입니다.
// 자연수 N이 입력되면 1부터 N까지 숫자를 적을 때, 3의 개수가 몇 개인지 구하여 출력하는 
// 프로그램을 작성하세요.
// ▣ 입력설명
// 첫 줄에 자연수의 개수 N(3<=N<=1,000,000,000)이 주어집니다.
// ▣ 출력설명
// 3의 개수를 출력하세요.

#include <iostream>
#include <vector>

int main()
{
  //  freopen("input.txt","rt", stdin);
  int n, i, j, tmp, digit, cnt=0, pos=0;
  scanf("%d",&n);
  std::vector<int> a(n);
  tmp = n;
  i=1;
  while(1)
  {
    a[i] = tmp%10;
    tmp /= 10;
    // printf("tmp %d\n" , tmp);
    if(tmp<1) break;
    i++;
    // printf("i : %d\n", i );
  }

  // printf("i : %d", i );

  if(a[1]>=3) cnt++;

  for(j=2;j<=2;j++)
  {
    if(a[j]<=3)
    {
      cnt += a[j-1]+ (j-1);
    }
  }
  printf("%d", cnt);

 
  return 0;
}