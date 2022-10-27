//1260

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <queue>
#define MAX 2147483647
#define MIN -2147483647
using namespace std;

int ch[1001];
void DFS(vector<int> graph[], int node){
    if(ch[node]==1) return;
    else{
        ch[node]=1;
        cout << node << " ";
        for(int i=0; i<graph[node].size();i++){
            int next = graph[node][i];
            DFS(graph, next);
        }
    }
    
}

void BFS(vector<int> graph[], int node){
    queue<int> q;
    ch[node] = 1;
    cout << node << " ";
    q.push(node);
    while (!q.empty()) {
        int tmp = q.front();
        q.pop();
        for(int i=0; i<graph[tmp].size();i++){
            int next = graph[tmp][i];
            if(ch[next] == 0){
                q.push(next);
                ch[next]=1;
                cout << next << " ";
            }else continue;
        }
    }
}



int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
//    freopen("input.txt", "rt", stdin);
    int n ,m, v;
    cin >> n >> m >> v;
    vector<int> graph[n+1];
    
    for(int i=0; i<m; i++){
        int a, b;
        cin >> a >> b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }
    for(int i=1; i<n+1; i++){
        sort(graph[i].begin(),graph[i].end());
    }
    
    
    DFS(graph, v);
    cout << endl;
    
    for(int i=0; i<1001; i++) ch[i]=0;
    

    BFS(graph, v);
    
    
}
