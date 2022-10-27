//1789

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#define MAX 2147483647
#define MIN -2147483647
using namespace std;

long long s;
void recursive(long long sum, int L){
    if(sum >s){
        cout << L-1;
        return;
    }else{
        L += 1;
        recursive(sum + L, L);
    }
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
//    freopen("input.txt", "rt", stdin);
   
    cin >> s;
    recursive(0,0);
    
   
    
}

