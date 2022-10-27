//1449

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#define MAX 2147483647
#define MIN -2147483647
using namespace std;

bool compare(int a, int b){ return a > b;}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
//    freopen("input.txt", "rt", stdin);
    int n, L;
    vector<int> list;
    cin >> n >> L;
    for(int i=0; i<n; i++){
        int tmp;
        cin>> tmp;
        list.push_back(tmp);
    }
    sort(list.begin(), list.end());
    int answer =0;
    int sum =0;
    
    if(list.size()!=0) answer=1;
    
    for(int i=0; i<list.size()-1;i++){
        int dist = list[i+1] - list[i];
        sum += dist;
        if(sum<L) continue;
        else{
            answer++;
            sum = 0;
        }
    }
    cout << answer;
    
}
