
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <queue>

#define MAX 2147483647
#define MIN -2147483647
using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int T;
    cin >> T;
 
    for(int i=0;i<T;i++){
        queue<pair<int, int>> q;
        priority_queue<int> pq;
        int n, paper, cnt=0;
        
        cin >> n >> paper ;
        
        for(int j=0;j<n;j++){
            int importance;
            cin >> importance;
            q.push({j,importance});
            pq.push(importance);
        }
        
        while(!q.empty()){
            int index = q.front().first;
            int value = q.front().second;
            q.pop();
            if(pq.top()==value){
                pq.pop();
                cnt++;
                if(index == paper){
                    cout << cnt<< endl;
                    break;
                }
                               
            }else{
                q.push({index,value});
               
            }
        }
        
        
    }
        
  
}

