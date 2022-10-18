
//10773

#include <iostream>
#include <stack>
#define MAX 2147483647
#define MIN -2147483647
using namespace std;

int main() {
//    ios_base::sync_with_stdio(false);
//    freopen("input.txt", "rt", stdin);
    int n;
    cin >> n;
    stack<int> st;
    for(int i=0; i<n; i++){
        int tmp;
        cin >> tmp;
        if(tmp == 0) st.pop();
        else st.push(tmp);
    }
    
    int sum=0;
    while(!st.empty()){
        sum += st.top();
        st.pop();
    }
    cout << sum;
    
}

