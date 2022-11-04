//2847

#include <iostream>
#include <vector>
//#include <string>
//#include <algorithm>

#define MAX 2147483647
#define MIN -2147483647
using namespace std;
int ch[28];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int n ;
    cin >> n;
    vector<int> level;
    
    for(int i=0; i<n;i++){
        int tmp;
        cin >> tmp;
        level.emplace_back(tmp);
    }
    
    int target = level[level.size()-1] - 1;
    int answer = 0;
    
    for(int i=level.size()-2 ; i>=0 ; i--){
        if(level[i] < target) target = level[i] - 1;
        else {
            answer += level[i] - target;
            target--;
        }
        
    }
  
    cout << answer;
}
