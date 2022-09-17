#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <sstream>


using namespace std;



int main()
{
    // freopen("input.txt","rt", stdin);
    int n, i, cnt=0;
    string str,s;
    getline(cin,str);
    stringstream ss(str);
    while (ss >> s){
        cnt++;
    }
    cout << cnt;

    
   
        
}