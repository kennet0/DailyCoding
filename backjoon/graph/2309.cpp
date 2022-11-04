//2309

#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

#define MAX 2147483647
#define MIN -2147483647
using namespace std;

int n;
int list[9];
int answer[7];

void recursive(int L,int s, int sum){
    if(L==7){
        if(sum==100){
            for(int i=0;i<7;i++){
               cout << answer[i] << endl ;
            }
            exit(0);
        }else return;
    }else{
        for(int i=s;i<9;i++){
            answer[L] = list[i];
            recursive(L+1, i+1, sum+answer[L]);
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    for(int i=0; i<9;i++){
        cin >> list[i];
    }
    sort(list,list+9);
 
    recursive(0,0,0);
    
}
