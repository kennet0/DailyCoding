// 54. 올바른 괄호(stack)
// 괄호가 입력되면 올바른 괄호이면 “YES", 올바르지 않으면 ”NO"를 출력합니다.
// (())() 이것은 괄호의 쌍이 올바르게 위치하는 거지만, (()()))은 올바른 괄호가 아니다.
// ▣ 입력설명
// 첫 번째 줄에 괄호 문자열이 입력됩니다. 문자열의 최대 길이는 30이다. 
// ▣ 출력설명
// 첫 번째 줄에 YES, NO를 출력한다

#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>

using namespace std;


int main(){
  // freopen("input.txt","rt", stdin);
  string str;
  cin >> str;
  stack<int> a;

  for(int i=0;i<str.length();i++){
    if(str[i] == '(') a.push(1);
    else{
      if(a.empty()) {
        cout << "NO"; 
        exit(0);
      }else a.pop();
    }
  }
  if(a.empty()) cout << "YES";
  else cout << "NO";



 

}

