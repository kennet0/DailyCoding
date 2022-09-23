
#include <iostream>

#include <vector>
#include <string>

using namespace std;

int solution(string str1, string str2) {
    int answer = 0;

    vector<string> vec1, vec2;
    
    //str1 부분집합 만들기
    string tmp = "";
    int cnt = 0;
    for(int i=0 ; i<str1.length();i++){
        if(str1[i]>='A' && str1[i]<='Z') tmp += str1[i]+32;
        else if(str1[i]>='a' && str1[i]<='z') tmp += str1[i];
        else continue;
        cnt++;
        if(cnt==2){
            vec1.push_back(tmp);
            tmp = "";
            cnt = 0;
            i--;
        }
        
    }
    //str2 부분집합 만들기
    tmp = "";
    cnt = 0;
    for(int i=0 ; i<str2.length();i++){
          if(str2[i]>='A' && str2[i]<='Z') tmp += str2[i]+32;
          else if(str2[i]>='a' && str2[i]<='z') tmp += str2[i];
          else continue;
          cnt++;
          if(cnt==2){
              vec2.push_back(tmp);
              tmp = "";
              cnt = 0;
              i--;
          }
    }
    
    //교집합
    int inter = 0;
    for(int i=0;i<vec1.size();i++){
        for(int j=0;j<vec2.size();j++){
            if(vec1[i]==vec2[j]){
                inter++;
            }
        }
    }
    // 합집합
    int sum = vec1.size()+vec2.size()-inter;
    
    //check
    for(int i=0;i<vec1.size();i++){
        cout << vec1[i] << endl;
    }
    cout << endl;
    for(int i=0;i<vec2.size();i++){
        cout << vec2[i] << endl;
    }
    
    
    //자카드 유사도
    float jacad;
    if(sum!=0) jacad = (float)inter/sum;
    else jacad = 1;
    if(jacad > 1) jacad = 1;
    
    cout <<" jacad" << jacad<< endl;
    answer = jacad*65536;
    
    return answer;
}

int main() {
//    freopen("input.txt","rt", stdin);
    string str1,str2;
    getline(cin, str1);
    getline(cin, str2);

    cout << solution(str1, str2);
  
}


