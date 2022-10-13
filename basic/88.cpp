//88. 미로의 최단거리 통로(BFS 활용)
//  7*7 격자판 미로를 탈출하는 최단경로의 경로수를 출력하는 프로그램을 작성하세요. 경로수는 출발점에서 도착점까지 가는데 이동한 횟수를 의미한다. 출발점은 격자의 (1, 1) 좌표이고, 탈 출 도착점은 (7, 7)좌표이다. 격자판의 1은 벽이고, 0은 도로이다.
//격자판의 움직임은 상하좌우로만 움직인다. 미로가 다음과 같다면
//위와 같은 경로가 최단 경로이며 경로수는 12이다.
//▣ 입력설명
//첫 번째 줄부터 7*7 격자의 정보가 주어집니다.
//▣ 출력설명
//첫 번째 줄에 최단으로 움직인 칸의 수를 출력한다. 도착할 수 없으면 -1를 출력한다.


#include <iostream>
#include <vector>
#include <string>
#include <queue>
#define MAX 2147483647
#define MIN -2147483647
using namespace std;

int map[8][8];
int ch[8][8];
int dx[4] = {1,0,-1,0};
int dy[4] = {0,-1,0,1};

int main() {
    ios_base::sync_with_stdio(false);
    freopen("input.txt", "rt", stdin);
    queue<pair<int,int>> q;
   
    for(int i=1; i<=7;i++){
        for(int j=1;j<=7;j++){
            scanf("%1d", &map[i][j]);
        }
    }
    q.push({1,1});
    ch[1][1]=1;
    while(!q.empty()){
        int x = q.front().first;
        int y = q.front().second;
        q.pop();
        for(int i=0;i<4;i++){
            int nextx = x+dx[i];
            int nexty = y+dy[i];
            if(nextx > 0 && nexty > 0 && nextx < 8 && nexty < 8){
                if(map[nextx][nexty]==0){
                    q.push({nextx,nexty});
                    map[nextx][nexty]= map[x][y]+1;
                }
            }
        }
        
    }
    
    cout << map[7][7];
    
}

