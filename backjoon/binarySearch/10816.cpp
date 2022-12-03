
//10816
#include <iostream>
#include <algorithm>
#include <vector>
#define MAX 2147483647
#define MIN -2147483647
using namespace std;

int Lowerbound(vector<int> &cardlist, int target){
    int start=0, end=cardlist.size()-1, mid;
    
    while(start < end){
        mid = (start+end)/2;
        if(cardlist[mid]>=target){
            end = mid;
        }else{
            start = mid + 1;
        }
    }
    
    return end ;
    
}

int Upperbound(vector<int> &cardlist, int target){
    int start=0, end=cardlist.size()-1, mid;
    while(start < end){
        mid = (start+end)/2;
        if(cardlist[mid]>target){
            end = mid;
        }else{
            start = mid + 1;
        }
    }
    
    return end ;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
//    freopen("input.txt", "rt", stdin);
    
    int n,m;
    cin >> n;
    vector<int> cardlist(n);
    
    
    for(int i=0;i<n; i++){
        cin >> cardlist[i];
    }
    
    sort(cardlist.begin(),cardlist.end());
    
    
    cin >> m;
    vector<int> checklist(m);
    vector<int> cntlist(m);
    
    for(int i=0;i<m; i++){
        int target;
        cin >> target;
        
        int lower = Lowerbound(cardlist, target);
        int upper = Upperbound(cardlist, target);
        
        if(upper == n-1 && cardlist[n-1] == target)
            upper++;
        cntlist[i] = upper - lower;
    }
    
    for(int i=0; i<cntlist.size();i++){
        cout << cntlist[i]<<" ";
    }
    
}

