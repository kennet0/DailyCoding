//15904

#include <iostream>
#include <vector>
#include <string>
//#include <algorithm>

#define MAX 2147483647
#define MIN -2147483647
using namespace std;
int ch[28];
int flag = 0;
char ucpc[4] = {'U','C','P','C'};


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    string str;
    getline(cin,str);
    
    for(int i=0;i<4;i++){
        int index = str.find(ucpc[i]);
        if(index == -1){
            flag = -1;
            break;
        }
        str = str.substr(index);
    }
    
    if(flag== -1) cout << "I hate UCPC" ;
    else cout << "I love UCPC";
    
}

