//77. 친구인가? (Union&Find 자료구조)
//오늘은 새 학기 새로운 반에서 처음 시작하는 날이다. 현수네 반 학생은 N명이다. 현수는 각 학생들의 친구관계를 알고 싶다.
//모든학생은1부터N까지번호가부여되어있고, 현수에게는각각두명의학생은친구관계 가 번호로 표현된 숫자쌍이 주어진다. 만약 (1, 2), (2, 3), (3, 4)의 숫자쌍이 주어지면 1번 학 생과 2번 학생이 친구이고, 2번 학생과 3번 학생이 친구, 3번 학생과 4번 학생이 친구이다. 그리고 1번 학생과 4번 학생은 2번과 3번을 통해서 친구관계가 된다.
//학생의 친구관계를 나타내는 숫자쌍이 주어지면 특정 두 명이 친구인지를 판별하는 프로그램 을 작성하세요. 두 학생이 친구이면 “YES"이고, 아니면 ”NO"를 출력한다.
//▣ 입력설명
//첫 번째 줄에 반 학생수인 자연수 N(1<=N<=1,000)과 숫자쌍의 개수인 M(1<=M<=3,000)이 주어지고, 다음 M개의 줄에 걸쳐 숫자쌍이 주어진다.
//마지막 줄에는 두 학생이 친구인지 확인하는 숫자쌍이 주어진다.
//▣ 출력설명
//첫 번째 줄에 “YES"또는 "NO"를 출력한다.

#include <iostream>
#include <vector>
#include <string>

using namespace std;
int unf[1001];

int Find(int v){
    if(unf[v]==v) return v;
    else return unf[v]=Find(unf[v]);
}

void Union(int a, int b){
    a = Find(a);
    b = Find(b);
    if(a!=b) unf[a]=b;

}


int main() {
    freopen("input.txt", "rt", stdin);
    int n,m,a,b;
    cin >> n >> m;
    for(int i=1;i<n;i++){
        unf[i]=i;
    }
    for(int i=1;i<=m;i++){
        cin >> a >> b;
        Union(a,b);
    }
  
    cin >> a >> b;
    a=Find(a);
    b=Find(b);
    if(a == b) cout << "YES";
    else cout << "NO";
}

