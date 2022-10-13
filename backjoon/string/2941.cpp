//2941

#include <iostream>
#include <vector>
#include <string>
#include <queue>
#define MAX 2147483647
#define MIN -2147483647
using namespace std;


int main() {
//    ios_base::sync_with_stdio(false);
//    freopen("input.txt", "rt", stdin);
    vector<string> croatian = {"c=","c-","dz=","d-","lj","nj","s=","z="};
    string str;
    int idx;
    cin >> str;
    for(int i=0;i<croatian.size();i++){
        while (1) {
            idx = str.find(croatian[i]);
            if(idx == string::npos) break;
            str.replace(idx, croatian[i].length(), "#");
        }
    }
  
    cout << str.length();
    
}

