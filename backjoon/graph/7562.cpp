//7562

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <queue>

#define MAX 2147483647
#define MIN -2147483647
using namespace std;

int n;
int destx, desty;
int result;
int maxs = MIN;
int ch[300][300];

int dx[8] = {1,1,2,2,-1,-1,-2,-2};
int dy[8] = {2,-2,1,-1,2,-2,1,-1};

void BFS(int x, int y){
    queue<pair<int, int>> q;
    q.push({x,y});
    while (!q.empty()) {
        int nowx = q.front().first;
        int nowy = q.front().second;
        if(nowx==destx && nowy==desty) {
            result = ch[nowx][nowy];
            break;
        }
        q.pop();
        for(int i=0; i<8;i++){
            int nextx = nowx+dx[i];
            int nexty = nowy+dy[i];
            
            if(nextx<0 || nexty<0 || nextx>=n || nexty>=n) continue;
            if(ch[nextx][nexty]!=0) continue;
            q.push({nextx,nexty});
            ch[nextx][nexty] = ch[nowx][nowy]+1;
            
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int k;
    cin >> k;
    for(int i=0; i<k;i++){
        int x,y;
        cin >> n;
        cin >> x >> y;
        cin >> destx >> desty;
        BFS(x,y);
        cout << result << endl;
        //초기화
        result = 0;
        for(int j=0;j<n;j++){
            for(int h=0;h<n;h++){
                ch[j][h] = 0;
            }
        }
    }
}

