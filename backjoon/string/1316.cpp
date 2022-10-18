//1316

#include <iostream>
#include <vector>
#include <string>
#include <queue>
#define MAX 2147483647
#define MIN -2147483647
using namespace std;

bool flag = true;
int ch[40], cnt=0;
int main() {
//    ios_base::sync_with_stdio(false);
//    freopen("input.txt", "rt", stdin);
    int n;
    cin >> n;
    string str;
    for(int i=0;i<n;i++){
        cin >> str;
        ch[str[0]-'a'] = 1;
        for(int j=1;j<str.length();j++){
            if( str[j-1] == str[j]) continue;
            if(ch[str[j]-'a']== 1) {
                flag = false;
                break;
            }
            else ch[str[j]-'a'] = 1;
        }
        if(flag) cnt++;
        
        for(int j=0;j<40;j++){
            ch[j]=0;
        }
        flag=true;
        
    }
    cout << cnt;
    
}

