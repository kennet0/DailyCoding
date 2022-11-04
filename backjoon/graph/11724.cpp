
//11724

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <queue>

#define MAX 2147483647
#define MIN -2147483647
using namespace std;

int n, m, cnt;
int ch[1000];
int flag = 0 ;

vector<int> graph[1000];

void DFS(int node){
    if(ch[node]==1) return;
    if(flag==0){
        cnt++;
        flag = 1;
    }
    ch[node]=1;
    for(int i=0;i<graph[node].size(); i++){
        DFS(graph[node][i]);
    }
    
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    cin >> n >> m;
    
    for(int i=0; i<m;i++){
        int a,b;
        cin >> a >> b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }
    
    for(int i=1;i<=n;i++){
        DFS(i);
        flag = 0;
    }
    
    cout << cnt;
}

