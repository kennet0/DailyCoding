#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

bool compare(int a, int b){
    return a > b;
}

int main()
{
    int n,k, idx,cnt=1;

    freopen("input.txt","rt", stdin);
    scanf("%d %d", &n, &k );
    vector<int> x(n);
    for(int i=0;i<n;i++){
        scanf("%d", &x[i]);
    }
    sort(x.begin(),x.end(),compare);

    // for(int i=1; i<n; i++){
    //     printf("%d : %d\n ", i, x[i]);
    //     if(x[i-1] > x[i]){
    //         cnt++;
    //         idx = i;
    //     } 
    //     if(cnt==k) break;  

    // }
    printf("%d", x[k-1]);

   
        
}