//11050

#include <iostream>
#include <stack>
#define MAX 2147483647
#define MIN -2147483647
using namespace std;

int n,k;

int factorial(int a)
{
    if(a < 1) return 1;
    else{
        return a * factorial(a-1);
    }
}

int main() {
//    ios_base::sync_with_stdio(false);
//    freopen("input.txt", "rt", stdin);
    
   
    cin >> n >> k;
    int result = factorial(n)/ (factorial(n-k) * factorial(k));
    cout << result;
    
}

