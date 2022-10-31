//10610

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

#define MAX 2147483647
#define MIN -2147483647
using namespace std;

bool compare(int a, int b) { return a>b;}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    string n,answer;
    cin >> n;
    int flag = 0;
   
    flag = n.find('0');
    if(flag != -1){
        int sum = 0;
        for(int i=0;i<n.length();i++){
            sum += n[i];
        }
        if(sum%3!=0) flag = -1;
        else{
            n.erase(flag,1);
            
            sort(n.begin(),n.end(),compare);
            
            n.push_back('0');
            
        }
    }
    
    if(flag == -1) cout << flag ;
    else cout << n;
    
   
    
}
