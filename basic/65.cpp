//65. 미로탐색(DFS)
//7*7 격자판 미로를 탈출하는 경로의 가지수를 출력하는 프로그램을 작성하세요. 출발점은 격 자의 (1, 1) 좌표이고, 탈출 도착점은 (7, 7)좌표이다. 격자판의 1은 벽이고, 0은 통로이다. 격 자판의 움직임은 상하좌우로만 움직인다. 미로가 다음과 같다면
//출발
//
//도착
//위의 지도에서 출발점에서 도착점까지 갈 수 있는 방법의 수는 8가지이다.
//▣ 입력설명
//첫 번째 줄부터 7*7 격자의 정보가 주어집니다.
//▣ 출력설명
//첫 번째 줄에 경로의 가지수를 출력한다.
//

#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

int maps[8][8], ch[8][8];
int dx[] = {-1,0,1,0};
int dy[] = {0,1,0,-1};
int cnt = 0;
void DFS(int x, int y){
    int xx,yy;
    if(x==7 && y==7){
        cnt++;
    }else{
        for(int i=0;i<4;i++){
            xx=x+dx[i];
            yy=y+dy[i];
            if(1>xx || xx>7 || 1>yy || yy>7) continue;
            if(maps[xx][yy]==0 && ch[xx][yy]==0){
                ch[xx][yy]=1;
                DFS(xx,yy);
                ch[xx][yy]=0;
                
            }
        }
    }
    
}


int main() {
    
    freopen("input.txt","rt", stdin);
    for(int i=1;i<=7;i++){
        for(int j=1;j<=7;j++){
            scanf("%1d",&maps[i][j]);
        }
    }
   ch[1][1]=1;
    DFS(1,1);
    cout << cnt;

}


