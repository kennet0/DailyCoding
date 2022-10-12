//87. 섬나라 아일랜드(BFS 활용)
//
//  섬나라 아일랜드의 지도가 격자판의 정보로 주어집니다. 각 섬은 1로 표시되어 상하좌우와 대 각선으로 연결되어 있으며, 0은 바다입니다. 섬나라 아일랜드에 몇 개의 섬이 있는지 구하는 프로그램을 작성하세요.
//
//만약 위와 같다면
//▣ 입력설명
//첫 번째 줄에 자연수 N(1<=N<=20)이 주어집니다. 두 번째 줄부터 격자판 정보가 주어진다.
//▣ 출력설명
//첫 번째 줄에 섬의 개수를 출력한다.


#include <iostream>
#include <vector>
#include <string>
#include <queue>
#define MAX 2147483647
#define MIN -2147483647
using namespace std;

int n, cnt=0;
int map[21][21];
int ch[21][21];
int dx[8] = {1,0,-1,0,1,-1,-1,1};
int dy[8] = {0,-1,0,1,-1,-1,1,1};




int main() {
    ios_base::sync_with_stdio(false);
    freopen("input.txt", "rt", stdin);
    queue<pair<int,int>> q;
    cin >> n;
    
    for(int i=1; i<=n;i++){
        for(int j=1;j<=n;j++){
            scanf("%1d", &map[i][j]);
        }
    }
    
    for(int i=1; i<=n;i++){
        for(int j=1;j<=n;j++){
            if(map[i][j]==1 && ch[i][j]==0){
                q.push({i,j});
                ch[i][j]=1;
                while(!q.empty()){
                    int x = q.front().first;
                    int y = q.front().second;
                    q.pop();
                    for(int k=0;k<8;k++){
                        int nextx = x+dx[k];
                        int nexty = y+dy[k];
                        if(nextx<=n && nexty <=n){
                            if(map[nextx][nexty]==1 && ch[nextx][nexty]==0){
                                q.push({nextx,nexty});
                                ch[nextx][nexty]=1;
                            }
                        }
                    }
                }
                cnt++;
            }
        }
    }
   
    cout << cnt;
}

