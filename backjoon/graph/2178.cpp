//2178

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <queue>
#define MAX 2147483647
#define MIN -2147483647
using namespace std;

int graph[101][101], ch[101][101];
int dx[4] = {-1,0,1,0};
int dy[4] = {0,1,0,-1};
int n ,m;
int cnt = 0;
int mins = MAX;

void BFS(int y, int x, int L){
    queue<pair<int,int>> q;
    q.push({y,x});
    while(!q.empty()){
        y = q.front().first;
        x = q.front().second;
        q.pop();
        
        for(int i=0; i<4;i++){
            int nexty = y+dy[i];
            int nextx = x+dx[i];
            if(nextx < 1 || nexty < 1 || nextx > m || nexty > n) continue;
            if(graph[nexty][nextx] == 0 || ch[nexty][nextx] == 1) continue;
            
            ch[nexty][nextx]=1;
            q.push({nexty,nextx});
            graph[nexty][nextx] = graph[y][x]+1;
           
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    cin >> n >>m;
    for(int i=1;i<=n;i++){
        string tmp;
        cin >> tmp;
        for(int j=0;j<tmp.length();j++){
            int parsing = tmp[j]-'0';
            graph[i][j+1] = parsing ;
        }
    }
    
    ch[1][1]=1;
    BFS(1,1,2);
    cout << graph[n][m];
    
}
