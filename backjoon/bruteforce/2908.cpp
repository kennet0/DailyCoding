#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <sstream>


using namespace std;

string reverse(string n)
{  
    
    int p1 = 0;
    int p2 = n.length()-1;
    while(p1 < p2){
        int tmp = n[p1];
        n[p1] = n[2];
        n[p2] = tmp;
        p1++;
        p2--;
    }  
    return n;

}
int main()
{
    // freopen("input.txt","rt", stdin);
    string n,m;
    cin >> n >> m;
    
    n = reverse(n);
    m = reverse(m);
    stoi(n);
    stoi(m);
    if(n < m) cout << m;
    else cout << n;

    
   

    
        
}