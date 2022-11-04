//7576

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <queue>

#define MAX 2147483647
#define MIN -2147483647
using namespace std;

int dx[4] = {1,0,-1,0};
int dy[4] = {0,1,0,-1};

int n, m, cnt;
int tmt[1000][1000];
queue<pair<int, int> > q;
int maxs= MIN;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    cin >> m >> n;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> tmt[i][j];
            if(tmt[i][j] == 1) q.push({i,j});
        }
    }
    
    while (!q.empty()) {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();
        for(int i=0; i<4;i++){
            int nextx = x + dx[i];
            int nexty = y + dy[i];
            if(nextx < 0 || nexty < 0 || nextx >=n || nexty >= m ||
               tmt[nextx][nexty] == -1) continue;
            if(tmt[nextx][nexty] == 0){
                tmt[nextx][nexty] = tmt[x][y]+1;
                q.push({nextx,nexty});
            }
        }
        
    }
    
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(tmt[i][j] == 0){
                cout << "-1";
                exit(0);
            }
            if(maxs < tmt[i][j]) maxs = tmt[i][j];
        }
    }
    cout << maxs-1 ;
    
 
    
    
     
}

