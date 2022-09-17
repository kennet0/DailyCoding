//11047
//  main.cpp
//  CodingTest
//
//  Created by Jang Han on 10/09/2022.
//  Copyright © 2022 Jang Han. All rights reserved.
//

#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;


int main() {
    string input;
    cin >> input;

    int result = 0;
    string num;
    bool isMinus = false;
    
    for(int i=0; i<=input.size();i++){
        if(input[i] == '-' || input[i] == '+' || i == input.size()){
            if(isMinus){
                result -= stoi(num);
                num= "";
                
            }else{
                result += stoi(num);
                num = "";
            }
        }else{
            num += input[i];
        }
        if(input[i] == '-'){
            isMinus = true;
        }
    }
    cout << result;
}


