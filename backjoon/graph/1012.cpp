//1012

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <queue>

#define MAX 2147483647
#define MIN -2147483647
using namespace std;

int m,n,k;
int ch[50][50];
int graph[50][50];
int flag;
int cnt = 0;


int dx[4] = {1,0,-1,0};
int dy[4] = {0,1,0,-1};

void DFS(int x, int y){
    
    if(x<0 || y<0 || x>=m || y>=n || ch[x][y]==1 || graph[x][y]==0 ) return;
    else {
        if(flag==0) {
            cnt++;
            flag = 1;
        }
        ch[x][y]=1;
        for(int i=0;i<4;i++){
            int nextx = x + dx[i];
            int nexty = y + dy[i];
            DFS(nextx,nexty);
        }
    }
}
    


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int t;
    cin >> t;
    for(int i=0; i<t;i++){
        
        cin >> m >> n >>k;
        // 입력
        for(int j=0; j<k;j++){
            int a, b;
            cin >> a >> b;
            graph[a][b] = 1;
        }
        //DFS
        for(int j=0; j<50;j++){
            for(int l=0; l<50;l++){
                DFS(l,j);
                flag = 0;
            }
        }
        
        cout << cnt << endl;
        
        //끝, 초기화
        flag = 0;
        cnt = 0;
        for(int j=0; j<50;j++){
            for(int l=0; l<50;l++){
                ch[l][j]=0;
                graph[l][j]=0;
            }
        }
    }
}

