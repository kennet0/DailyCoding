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

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<long long> dist(n-1);
    vector<long long> price(n);
    
    for(int i=0; i<n-1; i++){
        scanf("%lld" ,&dist[i]);
        
    }
    for(int i=0; i<n; i++){
        scanf("%lld" ,&price[i]);
//        cout << price[i] << endl;
    }
    
    long long sum= dist[0]* price[0];
    long long now = price[0];
    
    for(int i=1;i<n-1;i++){
        if(now > price[i]){
            sum += price[i]*dist[i];
            now = price[i];
        }else{
            sum += now *dist[i];
        }
    }
  
    cout << sum;
}

