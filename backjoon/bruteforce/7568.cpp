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

vector<pair<int,int>> a;


int main() {
    int n ;
    cin >> n;
    
   
    
    for(int i=0;i<n;i++){
        int x, y;
        scanf("%d %d", &x,&y);
        a.emplace_back(pair<int, int> (x,y));
      
    }
    for(int i=0; i<n; i++){
        int k = 1;
        for(int j=0;j<n;j++){
            if(a[i].first < a[j].first && a[i].second < a[j].second) k++;
            
        }
        cout << k << " ";
    }
    
  
}

