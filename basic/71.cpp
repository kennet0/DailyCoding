//다음 그래프에서 1번 정점에서 각 정점으로 가는 최소 이동 간선수를 출력하세요.
//   1
//3
//25
//46
//                   ▣ 입력설명
//첫째 줄에는 정점의 수 N(1<=N<=20)와 간선의 수 M가 주어진다. 그 다음부터 M줄에 걸쳐 연 결정보가 주어진다.
//▣ 출력설명
//1번 정점에서 각 정점으로 가는 최소 간선수를 2번 정점부터 차례대로 출력하세요.

#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;
int ch[10001], d[]= {1,-1, 5};

int main() {
//    freopen("input.txt","rt", stdin);
    int s,e,x,pos;
    queue<int> q;
    cin >> s >> e;
    ch[s]=1;
    q.push(s);
    while(!q.empty()){
        x=q.front();
        q.pop();
        for(int i=0; i<3; i++){
            pos = x+d[i];
            if(pos<=0|| pos>10000) continue;
            if(pos==e){
                cout << ch[x];
                exit(0);
            }
            if(ch[pos]==0){
                ch[pos]=ch[x]+1;
                q.push(pos);
            }
        }
    }
    
}


