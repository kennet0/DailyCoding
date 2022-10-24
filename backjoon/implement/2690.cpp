//2960
#include <iostream>
#include <vector>
#define MAX 2147483647
#define MIN -2147483647
using namespace std;

vector<int> list;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
//    freopen("input.txt", "rt", stdin);
    int n,k ;
    
    cin >> n >> k;
    for(int i=2;i<=n;i++){
        list.push_back(i);
    }
    int num=2;
    int index=0;
    int count = 0;
    while(!list.empty()){
        if(list[index]%num==0){
            int tmp = list[index];
            list.erase(list.begin()+index);
            count++;
            if(count == k){
                cout << tmp ;
                exit(0);
            }
        }else{
            index++;
        }
        
        if(index == list.size()){
            index = 0;
            num = list[0];
        }
    }
}

