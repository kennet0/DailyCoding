//
//  main.cpp
//  CodingTest
//
//  Created by Jang Han on 10/09/2022.
//  Copyright © 2022 Jang Han. All rights reserved.
//

#include <iostream>
#include <string>
#include <vector>
#include <cctype>

using namespace std;

string solution(string new_id) {
    string answer = "";
    
    
    for(int i = 0; i < new_id.length(); i++){
       //1단계
        if(new_id[i]>='A' && new_id[i]<='Z' ){
            new_id[i]+=32;
        }
        
        //2단계
        if(new_id[i]=='-' || new_id[i]=='_' || new_id[i]=='.'
           || (new_id[i]>='0' && new_id[i]<='9') || (new_id[i]>='a' && new_id[i]<='z'))
        {
            answer.push_back(new_id[i]);
        }
    }
    //3단계
    for(int i = 0; i < answer.length(); i++){
        if(answer[i]=='.'){
            while(answer[i+1] == '.'){
                answer.erase(i,1);
                
            }
        }
    }
    //4단계
    if(answer[0]=='.') answer.erase(answer.begin());
   
    // 5단계
    if(answer.empty()) answer = "a";
    
    // 6단계
    if(answer.length()>15) answer.erase(15);
    if(answer.back()=='.') answer.pop_back();
    
    // 7단계
    while(answer.length() < 3) answer += answer.back();
    
    
    return answer;
}



int main() {
    string str;
    
    
    cout << solution("z-+.^.") << endl;
    
}
