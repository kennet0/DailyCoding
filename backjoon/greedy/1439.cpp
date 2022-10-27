//1439

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
    int cnt=0;
    int flag=0;
    string s;
    cin >> s;
    for(int i=1; i<s.length();i++){
        if(s[i]!=s[i-1]) {
            if(flag == 0) {
                cnt++;
                flag = 1;
            }else {
                flag = 0;
            }
        }
    }
    cout << cnt;
}

