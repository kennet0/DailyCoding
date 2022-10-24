//2167
#include <iostream>
#include <cstring>
#define MAX 2147483647
#define MIN -2147483647
using namespace std;

int n,m,k, list[301][301], sum[301][301];


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
//    freopen("input.txt", "rt", stdin);
    cin >> n >> m;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            cin >> list[i][j];
        }
    }
    
     for(int i=1; i<=n; i++){
           for(int j=1; j<=m; j++){
               sum[i][j] = sum[i-1][j] + sum[i][j-1] - sum[i-1][j-1] + list[i][j];
           }
       }
       
    
    
    cin >> k;
    int i,j,x,y;
    for(int a=0;a<k; a++){
        cin >> i >> j >> x >> y;
        int result = sum[x][y] - sum[i-1][y] - sum[x][j-1] + sum[i-1][j-1];
        cout << result << endl;
    }
}

