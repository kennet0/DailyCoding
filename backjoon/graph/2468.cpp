//2468

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <queue>

#define MAX 2147483647
#define MIN -2147483647
using namespace std;
int n, wth, flag,cnt;
int map[100][100];
int ch[100][100];
int maxs = 0;
int maxcnt = 0;
int dx[4] = {1,0,-1,0};
int dy[4] = {0,1,0,-1};

void DFS(int x, int y){
    if(map[x][y]<wth) return;
    if(ch[x][y]==1) return;
    if(flag==0){
        cnt++;
        flag=1;
    }
    ch[x][y]=1;
    for(int i=0;i<4;i++){
        int nextx = x+dx[i];
        int nexty = y+dy[i];
        if(nextx<0 || nexty<0 || nextx>=n || nexty>=n) continue;
        DFS(nextx,nexty);
    }
    
    
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    cin >> n;
    
    for(int i=0;i<n;i++){
        for (int j=0; j<n; j++) {
            cin >> map[i][j];
            if(maxs < map[i][j]) maxs = map[i][j];
        }
    }
   
    if(maxs==1) maxcnt = 1;
    else{
        for(int k=2;k<=maxs;k++){
            wth = k;
            for(int i=0;i<n;i++){
                for (int j=0; j<n; j++) {
                    DFS(i,j);
                    if(cnt!=0){
                        if(maxcnt<cnt) maxcnt=cnt;
                    }
                    flag = 0;
                }
            }
            cnt=0;
            for(int i=0;i<n;i++){
                for (int j=0; j<n; j++) {
                    ch[i][j]=0;
                }
            }
            
        }
    }
    cout << maxcnt;

   
}

