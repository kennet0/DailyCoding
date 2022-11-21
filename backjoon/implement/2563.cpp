
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <queue>

#define MAX 2147483647
#define MIN -2147483647
using namespace std;

int paper[101][101];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int n,cnt=0;
    cin >> n;
 
    
    for(int i=0;i<n;i++){
        int x , y;
        cin >> x >> y;
        for(int j=x;j<x+10;j++){
            for(int k=y;k<y+10;k++){
                if(paper[j][k]==1) continue;
                else{
                    paper[j][k]=1;
                    cnt++;
                }
                
            }
        }
        
    }
    
    cout << cnt;
    
  
}

