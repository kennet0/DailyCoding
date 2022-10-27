//1049

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#define MAX 2147483647
#define MIN -2147483647
using namespace std;



int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
//    freopen("input.txt", "rt", stdin);
    int n, m;
    int answer = 0;
    int setMin = MAX, oneMin = MAX;
    cin >> n >> m;
    
    for(int i=0; i<m; i++){
        int set, one;
        cin >> set >> one;
        if(set < setMin) setMin = set;
        if(one < oneMin) oneMin = one;
    }
    
    if(6*oneMin < setMin){
        answer = n*oneMin;
        n = 0;
    }else{
        while(n >= 6){
            answer += setMin;
            n -= 6;
        }
    }
    
    if(n * oneMin > setMin){
        answer += setMin;
        n=0;
    }else{
        answer += oneMin * n;
        n=0;
    }

    cout << answer;
    
}
