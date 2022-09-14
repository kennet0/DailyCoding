//
//  main.cpp
//  CodingTest
//
//  Created by Jang Han on 10/09/2022.
//  Copyright © 2022 Jang Han. All rights reserved.
//

#include <iostream>
#include <ctime>
#include <vector>
#include <string>

using namespace std;
int main(int argc, const char * argv[]) {
    
    string s = "50671";
    int sum=0;
//    getline(cin, s);
    
    clock_t start, finish;
    double duration;
    start = clock();
    
    vector<int> n(s.size());
    
    for(int i=0; i<s.size(); i++){
       n[i] = s[i] - 48;
    }
    
    
    for(int i=0; i<s.size(); i++){
        if(sum <= 1 || n[i] <= 1 ){
            sum += n[i];
        }else {
            sum *= n[i];
        }
    }
    
    cout << sum << endl;
    
    finish = clock();

    duration = (double)(finish - start) / CLOCKS_PER_SEC;
    cout << duration << "초" << endl;
    
    
}
