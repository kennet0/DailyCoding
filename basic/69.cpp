//
//아래 그림과 같은 이진트리를 넓이우선탐색해 보세요. 간선 정보 6개를 입력받아 처리해보세
//요.
//2
//1
//       3
//            4567
//넓이 우선 탐색 : 1 2 3 4 5 6 7

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int Q[100], front = -1, back= -1, ch[10];
vector<int> maps[7];



int main() {
    freopen("input.txt","rt", stdin);
    int x;
    for(int i=1; i<=6; i++){
        int a, b;
        scanf("%d %d", &a, &b);
        maps[a].push_back(b);
        maps[b].push_back(a);
        
    }
    Q[++back]=1;
    ch[1] =1;
    while(front < back){
        x = Q[++front];
        cout << x;
        for(int i=0; i<maps[x].size(); i++){
            if(ch[maps[x][i]==0]){
                ch[maps[x][i]]=1;
                Q[++back] = maps[x][i];
            }
        }
    }

}


