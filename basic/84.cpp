//84. 휴가(삼성 SW역량평가 기출문제 : DFS활용)
//  카운셀러로 일하고 있는 현수는 오늘부터 N+1일째 되는 날 휴가를 가기 위해서, 남은 N일 동 안 최대한 많은 상담을 해서 휴가비를 넉넉히 만들어 휴가를 떠나려 한다.
//현수가 다니는 회사에 하루에 하나씩 서로 다른 사람의 상담이 예약되어 있다.
//각각의 상담은 상담을 완료하는데 걸리는 날수 T와 상담을 했을 때 받을 수 있는 금액 P로 이 루어져 있다.
//만약 N = 7이고, 아래와 같이 예약이 잡혔있다면
//1일에 잡혀있는 상담은 총 4일이 걸리며, 상담했을 때 받을 수 있는 금액은 20이다. 만약 1일 에 예약된 상담을 하면 4일까지는 상담을 할 수가 없다.
//하나의 상담이 하루를 넘어가는 경우가 많기 때문에 현수는 예약된 모든 상담을 혼자 할 수 없어 최대 이익이 나는 상담 스케쥴을 짜기로 했다.
//휴가를 떠나기 전에 할 수 있는 상담의 최대 이익은 1일, 5일, 7일에 있는 상담을 하는 것이 며, 이때의 이익은 20+30+10=60이다.
//현수가 휴가를 가기 위해 얻을 수 있는 최대 수익을 구하는 프로그램을 작성하시오.
//▣ 입력설명
//첫째 줄에 N (1 ≤ N ≤ 15)이 주어진다.
//둘째 줄부터 1일부터 N일까지 순서대로 주어진다. (1 ≤ T ≤ 7, 1 ≤ P ≤ 100)
//▣ 출력설명
//첫째 줄에 현수가 얻을 수 있는 최대 이익을 출력한다.


#include <iostream>
#include <vector>
#include <string>
#include <queue>
#define MAX 2147483647
#define MIN -2147483647

using namespace std;
int n,res=MIN;
vector<pair<int,int>> list;
int ch[1000];

void DFS(int L, int sum){
    if(L==n+1){
        if(sum>res) res=sum;
    }else{
        if(L+list[L].first<=n+1) DFS(L+list[L].first, sum+list[L].second);
        DFS(L+1,sum);
            
    
    }
}



int main() {
    ios_base::sync_with_stdio(false);
    freopen("input.txt", "rt", stdin);
    int a,b;
    cin >> n;
    list.push_back({0,0});
    for(int i=1;i<=n;i++){
        cin >> a >> b;
        list.push_back({a,b});
    }
    
    DFS(1,0);
    


}

