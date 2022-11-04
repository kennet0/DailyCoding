//2667

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

int n ;
int map[25][25];
int ch[25][25];
int flag = 0;
int gcnt = 0;
int hcnt = 0;
vector<int> cnts;


void DFS(int x, int y){
    if(x<0 || y<0 || x>=n || y>=n || ch[x][y] == 1 || map[x][y] == 0) return;
    else {
        if(flag == 0){
            flag = 1;
            gcnt++;
        }
        ch[x][y] = 1;
        hcnt++;
        for(int i=0;i<4;i++){
            int nextx= x + dx[i];
            int nexty= y + dy[i];
            DFS(nextx,nexty);
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    cin >> n;
    for(int i=0; i<n;i++){
        for(int j=0;j<n;j++){
            char tmp;
            cin >> tmp;
            map[i][j] = tmp - '0';
        }
    }
    
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            DFS(i,j);
            if(hcnt !=0 ) cnts.push_back(hcnt);
            flag = 0;
            hcnt = 0;
        }
    }
    cout << gcnt << endl;
    
    sort(cnts.begin(),cnts.end());
    for(int i=0; i<cnts.size();i++){
        cout << cnts[i] << endl;
    }
    
     
}

