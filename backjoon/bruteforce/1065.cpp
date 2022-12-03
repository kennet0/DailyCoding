//1065

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
        
    int n, cnt=0;
    cin >> n;
    
    if(n<100) cnt = n;
    else{
        cnt = 99;
        for(int i = 100;i<=n;i++){
            if(i==1000) break;
            int pos[3];
            int tmp = i;
            int index = 0;
            while(tmp !=0 ){
                pos[index] = tmp%10;
                tmp /= 10;
                index++;
            }
            if((pos[2]-pos[1])==(pos[1]-pos[0])) cnt++;
    
        }
        
    }
    cout << cnt;

    
    
 
}

