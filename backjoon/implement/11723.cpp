//11723

#include <iostream>
#include <cstring>
#define MAX 2147483647
#define MIN -2147483647
using namespace std;

int ch[21];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
//    freopen("input.txt", "rt", stdin);
    int n, x;
    string str="";
    cin >> n;
   
    for(int i=0; i<n;i++){
        cin >> str;
        if(str == "add") {
            cin >> x;
            if(ch[x]==0) ch[x]=1;
        }
        else if(str == "remove"){
            cin >> x;
            if(ch[x]==1) ch[x]=0;
            
        }
        else if(str == "check") {
            cin >> x;
            if(ch[x]==1) cout << "1\n";
            else cout << "0\n";
        }
        
        else if(str == "toggle") {
            cin >> x;
            
            if(ch[x]==1) ch[x] = 0;
            else ch[x] = 1;
           
        }
        else if(str == "all") {
            for(int j=1; j<=20;j++){
                if(ch[j]==0) ch[j] = 1;
            }
        }
        else if(str == "empty") {
            memset(ch, 0, sizeof(ch));
        
        }
    }
    
}

