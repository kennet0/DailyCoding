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
    string doc,word;
    getline(cin,doc);
    getline(cin,word);
    int cnt=0;
    while(1){
        int wordidx= doc.find(word);
        if(-1 < wordidx){
            doc.erase(0,wordidx+word.length());
            cnt++;
        }else{
            break;
        }

    }
    
    cout << cnt;
  
    
}


