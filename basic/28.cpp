// 28. N!에서 0의 개수
// 자연수 N이 입력되면 N! 값에서 일의 자리부터 연속적으로 ‘0’이 몇 개 있는지 구하는 프로그
// 램을 작성하세요.
// 만약 5! =  × ×  ×  × = 120으로 일의자리부터 연속적된 ‘0’의 개수는 1입니다.
// 만약 12! = 479001600으로 일의자리부터 연속적된 ‘0’의 개수는 2입니다.
// ▣ 입력설명
// 첫 줄에 자연수 N(10<=N<=1,000)이 입력된다.
// ▣ 출력설명
// 일의 자리부터 연속된 0의 개수를 출력합니다.

#include <iostream>
#include <vector>

int main()
{
  //  freopen("input.txt","rt", stdin);
  int n, i, j, tmp, cnt = 0, cnt2 = 0;
  scanf("%d",&n);

  for(i=2; i<=n; i++)
  {
    tmp = i;
    j = 2;
    while(tmp != 1)
    {
      if(tmp % j == 0)
      {
        if(j == 2)
          cnt++;
        else if(j == 5)
          cnt2++;

        tmp = tmp/j;
      }else{
        j++;
      }
    }
  } 

  if(cnt<cnt2) printf("%d", cnt);
  else printf("%d", cnt2);
 
  return 0;
}