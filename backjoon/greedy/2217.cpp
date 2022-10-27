//2217

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#define MAX 2147483647
#define MIN -2147483647
using namespace std;

bool compare(int a, int b){return a>b;}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
//    freopen("input.txt", "rt", stdin);
    int n;
    int maxs = MIN;
    cin >> n;
    vector<int> rope;
    for(int i=0;i<n;i++){
        int tmp;
        cin >> tmp;
        rope.push_back(tmp);
    }
    sort(rope.begin(),rope.end());
    
     for(int i=n-1;i>=0;i--){
         int sum = rope[i] * (n-i) ;
         if(maxs < sum) maxs = sum;
        
    }
    cout << maxs;
    
}

