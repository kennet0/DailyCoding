//1213

#include <iostream>
//#include <vector>
//#include <string>
//#include <algorithm>

#define MAX 2147483647
#define MIN -2147483647
using namespace std;
int ch[28];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    string str, answer="";
    cin >> str;
    int flag = 0;
    int cindex = -1;
    
    
    for(int i=0; i<str.length();i++){
        ch[str[i]-'A']++;
    }
    
    for(int i=0; i<28;i++){
       
        // 각 알파벳 개수와 센터 알파벳 확인
        if(ch[i]%2==1) {
            flag++;
            cindex = i;
        }
        //홀수 갯수가 두번나오면 불가
        if(flag > 1){
            flag = -1;
            break;
        }
        
        // 앞 펠린드롬 작성
        for(int j=0; j<ch[i]/2;j++){
            answer += i + 'A';
        }
        
    }
    
    // 홀수가 두번나와서 펠린드롬 불가
    if(flag == -1) cout << "I'm Sorry Hansoo";
    // 가능
    else{
        if(cindex != -1) answer += cindex +'A';
        for(int i=27; i>=0;i--){
            // 뒤 펠린드롬 작성
            for(int j=0; j<ch[i]/2;j++){
                answer += i + 'A';
            }
        }
        cout << answer;
    }
}
