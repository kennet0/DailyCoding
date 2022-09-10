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

using namespace std;
int main(int argc, const char * argv[]) {
    int n;
    cin >> n ;
    vector<int> arr(n);
    int count=0 , result=0;
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end());
    
    for(int i=0; i<5; i++){
        count++;
        if(count >= arr[i]){
            result++;
            count=0;
        }
    }
    cout << result;
    
    
    
    
//    clock_t start, finish;
//    double duration;
//    start = clock();
    
//    finish = clock();
//
//    duration = (double)(finish - start) / CLOCKS_PER_SEC;
//    cout << duration << "초" << endl;
//
    
}
