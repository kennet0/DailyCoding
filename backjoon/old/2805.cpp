#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;



int main()
{
    int n,m, k,lt=0,rt, mid;
    bool check;

    // freopen("input.txt","rt", stdin);
    scanf("%d", &n);
    vector<int> x(n);
    for(int i=0;i<n;i++){
        scanf("%d", &x[i]);
    }
    sort(x.begin(),x.end());

    scanf("%d", &m);
  
    for(int i=0;i<m;i++){
        check = false;
        lt=0;
        rt=m-1;
        scanf("%d", &k);
        while(lt <= rt)
        {
            mid = (lt+rt)/2;
            if(k==x[mid]) {
                check = true;
                break;
            }
            else if(k < x[mid]) rt = mid - 1;
            else lt = mid + 1;
        }
        if(check) printf("1\n");
        else printf("0\n");
    } 
        
}