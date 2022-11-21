
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <queue>

#define MAX 2147483647
#define MIN -2147483647
using namespace std;
int dy[100001];

int solution(int n) {
    for(int i=0;i<=n;i++){
          if(i==0 || i == 1) dy[i]= i;
          else{
              dy[i] = (dy[i-1] +dy[i-2])%1234567;
          }
      }

    int answer = dy[n];
    return answer;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n = 5;

    cout << solution(n);
    
}

