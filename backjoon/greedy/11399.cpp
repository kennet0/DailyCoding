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
    vector<int> p(n);
    for(int i=0; i<n; i++){
        scanf("%d",&p[i]);
//         cout << p[i];
    }
    sort(p.begin(),p.end());
    

    int sum=0;
    for(int i=n-1;i>=0;i--){
        for(int j=i;j>=0;j--){
            sum += p[j];
        }
    }
    cout << sum;
   
}


