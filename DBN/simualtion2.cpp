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
#include <algorithm>

#define SEC 3600

using namespace std;
int h, result = 0;

bool check(int h, int m, int s){
    if(h%10==3 || m/10==3 || m%10==3|| s/10==3 || s%10==3)
        return true;
    return false;
}


int main() {
    cin >> h;
    
    for(int i=0; i<=h; i++){
        for (int j=0; j<60; j++){
            for(int k=0; k<60; k++){
                if(check(i, j, k)) result++;
            }
        }
    }
    cout << result << endl;
    
    
    
    

    // 기본 3의 갯수
//    result += (SEC/10 + SEC/6)*2 * (n+1);
//
//    if(n>=3) result = result + SEC + SEC*(n/10);
//
//    cout << result;

    
    
//    clock_t start, finish;
//    double duration;
//    start = clock();
    
//    finish = clock();
//
//    duration = (double)(finish - start) / CLOCKS_PER_SEC;
//    cout << duration << "초" << endl;
//
    
}
