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

int n, x=1,y=1;
string plans;
int dx[4] = {-1,1,0,0};
int dy[4] = {0,0,-1,1};
char moveTypes[4] = {'L','R','U','D'};

int main() {
    cin >> n;
    cin.ignore();
    getline(cin,plans);
    

    for(int i=0; i<plans.size();i++){
        if(plans[i] != ' '){
            char plan = plans[i];
            cout << plans[i] << endl;
            int nx = -1, ny = -1;
            for(int j=0; j<4; j++){
                if(plan == moveTypes[j]){
                    nx = x + dx[j];
                    ny = y + dy[j];
                }
            }
            //공간을 벗어나는경우 무시
            if(nx < 1 || ny < 1 || nx > n || ny > n) continue;
            x = nx;
            y = ny;
        }
    }
    
    cout << x <<' '<< y << endl;
    
    
//    clock_t start, finish;
//    double duration;
//    start = clock();
    
//    finish = clock();
//
//    duration = (double)(finish - start) / CLOCKS_PER_SEC;
//    cout << duration << "초" << endl;
//
    
}
