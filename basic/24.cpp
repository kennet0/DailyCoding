// 24. Jolly Jumpers
// N개의 정수로 이루어진 수열에 대해 서로 인접해 있는 두 수의 차가 1에서 N-1까지의 값을 
// 모두 가지면 그 수열을 유쾌한 점퍼(jolly jumper)라고 부른다. 예를 들어 다음과 같은 수열에
// 서 1 4 2 3 앞 뒤에 있는 숫자 차의 절대 값이 각각 3 ,2, 1이므로 이 수열은 유쾌한 점퍼가 
// 된다. 어떤 수열이 유쾌한 점퍼인지 판단할 수 있는 프로그램을 작성하라.
// ▣ 입력설명
// 첫 번째 줄에 자연수 N(3<=N<=100)이 주어진다.
// 그 다음 줄에 N개의 정수가 주어진다. 정수의 크기는 int 형 범위안에 있으며, 인접한 두 수의 
// 차도 정수형 범위에 있습니다.
// ▣ 출력설명
// 유쾌한 점퍼이면 “YES"를 출력하고, 그렇지 않으면 ”NO"를 출력한다.
#include <iostream>
#include <vector>

int main()
{
  //  freopen("input.txt","rt", stdin);
  int n,i, pre, now, pos, sum = 0, cnt = 0, result=0, max = -2147000000;
  scanf("%d",&n);
  std::vector<int> a(n);
  scanf("%d",&pre);
  for(i=1; i<n; i++){
    scanf("%d",&now);
    pos = abs(pre-now);
    if(pos>0 && pos <n && a[pos]==0) a[pos]=1;
    else{
      printf("NO");
      exit(0);
    }
    pre=now;
  } 
  
  printf("YES");
  return 0;
}