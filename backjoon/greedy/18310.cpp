//18310

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

#define MAX 2147483647
#define MIN -2147483647
using namespace std;
int mins = MAX;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n ;
    cin >> n;
    
    vector<int> list;
    for(int i=0; i<n;i++){
        int tmp;
        cin >> tmp;
        list.push_back(tmp);
    }
    
    sort(list.begin(),list.end());
    
    int center = list[(list.size()-1)/2];
    
    
    int dist = 0;
    int answer=0;
    for(int i=0;i<n;i++){
        dist = abs(center - list[i]);
        if(mins > dist) {
            mins = dist;
            answer = list[i];
        }
    }
    
    cout << answer;
    
   
}

