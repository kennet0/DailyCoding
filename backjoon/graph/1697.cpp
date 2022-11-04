//1697

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <queue>

#define MAX 2147483647
#define MIN -2147483647
using namespace std;
int n, k ;
int cnt;
int ch[100001];


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    queue<pair<int, int>> q;
    
    cin >> n >> k;
    
    q.push({n,0});
    while (!q.empty()) {
        int pos = q.front().first;
        int cost =q.front().second;
        q.pop();
        
        if(pos == k) {
            cout << cost;
            break;
        }
        
        int next1 = pos - 1;
        int next2 = pos + 1;
        int next3 = pos * 2;
        
        if(0<=next1 && ch[next1]!=1){
            q.emplace(next1,cost+1);
            ch[next1] = 1;
        }
        if(next2 <= k && ch[next2]!=1 ){
            q.emplace(next2,cost+1);
            ch[next2] = 1;
        }
        if(next3<= k+1 && ch[next3]!=1){
            q.emplace(next3, cost+1);
            ch[next3]=1;
        }
    }
     
}

