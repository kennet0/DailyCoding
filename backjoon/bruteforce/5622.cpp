#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <sstream>

using namespace std;

int main()
{
    // freopen("input.txt","rt", stdin);
    string n;
    int sum =0;
    cin >> n;
    

    for(int i=0; i<n.length(); i++){
        if(n[i]>='W') sum+=10;
        else if(n[i]>='T')sum+=9;
        else if(n[i]>='P')sum+=8;
        else if(n[i]>='M')sum+=7;
        else if(n[i]>='J')sum+=6;
        else if(n[i]>='G')sum+=5;
        else if(n[i]>='D')sum+=4;
        else if(n[i]>='A')sum+=3;

    }

    cout << sum;

   

    
   

    
        
}