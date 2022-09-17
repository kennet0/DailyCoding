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
    int n, k, cnt=0 ;
    cin >> n >> k;
    vector<int> coins;
    for(int i=0; i<n ;i++){
        int insert;
        scanf("%d",&insert);
        coins.push_back(insert);
    }
    int tmp=k ,idx = n-1;
    while (tmp != 0) {
        if(tmp - coins[idx] >= 0){
            tmp = tmp - coins[idx];
            cnt++;
        }else{
            idx--;
        }
        
       
    
    }
    
    cout << cnt;
  
}

