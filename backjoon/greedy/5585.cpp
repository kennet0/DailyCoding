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
    int n;
    cin >> n;
    int cnt =0, sum=1000-n;
    vector<int> coins = {500,100,50,10,5,1};
    
    for(int i=0; i<coins.size(); i++){
        while(sum - coins[i] >=0){
            sum -= coins[i];
            cnt++;
        }
    }
    

    
    cout << cnt;

    
}


