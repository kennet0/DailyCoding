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

#define SEC 3600

using namespace std;
string plan;
int map[9][9];
int pos[2];
int dx[] = {-1,-1,1,1,-2,-2,2,2};
int dy[] = {-2,2,-2,2,-1,1,-1,1};
int x,y, count;


int main() {

    int count = 0;
    cin >> plan;
    
    x = plan[0] - 96;
    y = plan[1] - 48;
    
    for(int i=0; i<8; i++){
        int nextX = x + dx[i];
        int nextY = y + dy[i];
        if(nextX > 0 && nextY > 0 && nextX <=8 && nextY <=8){
            count++;
        }
        
    }
    
    cout << count;
    
    

    // 기본 3의 갯수
//    result += (SEC/10 + SEC/6)*2 * (n+1);
//
//    if(n>=3) result = result + SEC + SEC*(n/10);
//
//    cout << result;

    
    
//    clock_t start, finish;
//    double duration;
//    start = clock();
    
//    finish = clock();
//
//    duration = (double)(finish - start) / CLOCKS_PER_SEC;
//    cout << duration << "초" << endl;
//
    
}
