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
#include <map>

using namespace std;

int main() {
    int n, result=0;
    cin >> n ;
    for(int i=1;i<n;i++){
        int tmp=i;
        int sum=i;
        do{
            sum = sum + tmp%10;
            tmp /= 10;
        }while(tmp/10>0);
        sum = sum + tmp%10;
        
        
        if(sum == n){
            result = i;
            break;
            
        }
        
    }
    
    cout << result;
}

