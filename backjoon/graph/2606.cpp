//2606

#include <iostream>
#include <vector>
#include <queue>

#define MAX 2147483647
#define MIN -2147483647
using namespace std;
int n,m, cnt=0;
int ch[101];
vector<int> graph[101];

void BFS(int start){
    queue<int> q;
    q.push(start);
    ch[start] =1;
    
    while (!q.empty()) {
        int now = q.front();
        q.pop();
        
//        cout << now <<"Size" << graph[now].size() << endl;
        
        for(int i=0; i<graph[now].size();i++){
            int next = graph[now][i];
            if(ch[next] == 1) continue;
            
            q.push(next);
            ch[next] =1;
            cnt++;
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    cin >> n >> m;
    
    
    for(int i=0; i<m; i++){
        int a, b;
        cin >> a >> b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }
    BFS(1);
    cout << cnt;
    
}
