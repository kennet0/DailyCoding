
//2108

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
  
    int n;
    double sum=0;
    cin >> n;
    vector<int> list(n);
    
    for(int i=0;i<n;i++){
        cin >> list[i];
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
    int maxValue=MIN;
    int mode=0;
    bool flag = false;
    for (int i=0; i<n; i++) {
        index = list[i]+4000;
        ch[index]++;
        if(maxValue < ch[index]) maxValue = ch[index];
    }
    for (int i=0; i<8001; i++) {
        if(ch[i]==0) continue;
        
        if(ch[i] == maxValue){
            if(!flag) {
                mode = i - 4000;
                flag = true;
            }else {
                mode = i - 4000;
                break;
            }
       
        }
    }
    
    
    cout << mode << endl;
    
    //범위
    int max = list[n-1];
    int min = list[0];
    int range = max - min;
    cout << range <<endl;
    
    
}

