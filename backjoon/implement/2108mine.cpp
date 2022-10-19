//11866

#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
#include <cmath>
#define MAX 2147483647
#define MIN -2147483647
using namespace std;


int ch[8001];
int main() {
    ios_base::sync_with_stdio(false);
//    freopen("input.txt", "rt", stdin);
  
    int n, mins = MAX, maxs = MIN;
    double sum=0;
    cin >> n;
    vector<int> list(n);
    
    for(int i=0;i<n;i++){
        cin >> list[i];
        maxs = max(maxs,list[i]);
        mins = min(mins,list[i]);
        sum += list[i];
        
    }
    sort(list.begin(),list.end());
    
    int mean =round(sum/n);
    if (mean == -0) mean = 0;
    cout << mean << endl;

    //중앙값
    cout << list[n/2] << endl;
    
    //최빈값
    int index;
    int value=MIN;
    int mode=0;
    bool flag = false;
    for(int i=0; i<n;i++){
        if(list[i]<0) index = -list[i] + 4000;
        else index = list[i];
        ch[index]++;
        if(value < ch[index]) {
            value = ch[index];
            if(index > 4000) index = -index + 4000;
            mode = index;
            flag = false;
        }else if( value == ch[index] && !flag){
            if(index > 4000) index = -index + 4000;
            if(index > mode) {
                mode = index;
                flag = true;
            }
        }
    }
    cout << mode << endl;
    
    //범위
    cout << abs(maxs-mins)<<endl;
    
    
}

