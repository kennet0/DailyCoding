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

bool compare(int a, int b){ return a > b ;}

int main() {
    int n,m, cnt=0;
    cin >> n >> m;
    vector<int> apply;
    
    for(int i=0; i<n;i++){
        int p,l;
        cin >> p >> l;
        vector<int> tmp;
        for(int i=0; i<p;i++){
            int insert;
            scanf("%d",&insert);
            tmp.push_back(insert);
        }
        sort(tmp.begin(),tmp.end(),compare);
        if(p<l) apply.push_back(1);
        else apply.push_back(tmp[l-1]);
    }
    
    sort(apply.begin(),apply.end());
    for(int i=0; i<apply.size();i++){
        if(apply[i]>m) break;
        m -= apply[i];
        cnt++;
    }
    
    cout << cnt;
    
}


