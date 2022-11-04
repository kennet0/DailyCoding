//1783

#include <iostream>
//#include <vector>
//#include <string>
//#include <algorithm>

#define MAX 2147483647
#define MIN -2147483647
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int n ;
    cin >> n ;
    int cnt=0;
    int flag = 0;
    
    while(n%5 != 0){
        if(n==1){
            flag = -1;
            break;
        }
        n -= 2;
        cnt++;
        
    }
    if(flag == -1){
        cout << flag;
    }else{
        while(n!=0){
            n-=5;
            cnt++;
        }
        cout << cnt;
    }
    
    
    
  
     
}
