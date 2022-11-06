//2504
#include <iostream>
#include <string>
#include <stack>
#define MAX 2147483647
#define MIN -2147483647
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
//    freopen("input.txt", "rt", stdin);
    string str;
    int temp = 1, answer = 0;
   

    cin >> str;
    stack<char> st;
    
    for(int i=0;i<str.length();i++){
        if(str[i] == '(' ){
            temp *= 2;
            st.push('(');
         
        }else if(str[i] == '[' ){
            temp *= 3;
            st.push('[');
        
        }else if(str[i] == ')' ){
            if(st.empty() || st.top() !=('(')){
                answer = 0;
                break;
            }
            if(str[i-1] == '('){
                answer += temp ;
                temp /= 2;
                st.pop();
            }else {
                temp /= 2;
                st.pop();
            }
               
              
 
  
}

