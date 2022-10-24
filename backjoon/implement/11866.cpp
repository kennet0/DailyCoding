//11866

#include <iostream>
#include <queue>
#define MAX 2147483647
#define MIN -2147483647
using namespace std;


int main() {
//    ios_base::sync_with_stdio(false);
//    freopen("input.txt", "rt", stdin);
    int n, k;
    cin >> n >> k;
    queue<int> q;
    
    for(int i=1;i<=n;i++){
        q.push(i);
    }
    int cnt=1;
    cout << "<";
    while(1){
        int tmp = q.front();
        q.pop();
        if(cnt == k) {
            cout << tmp ;
            cnt=0;
            if(q.empty()) break;
            cout << ", ";
        }
        else q.push(tmp);
        cnt++;
    }
    cout << ">";
}

