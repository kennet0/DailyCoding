//
//  main.cpp
//  CodingTest
//
//  Created by Jang Han on 10/09/2022.
//  Copyright © 2022 Jang Han. All rights reserved.
//

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <queue>

using namespace std;

int n,m;
int graph[1001][1001];

bool dfs(int x, int y){
    if(x <= -1 || x >= n || y <= -1 || y >= m)
        return false;
    
    if(!graph[x][y]){
        graph[x][y] = 1;
        dfs(x-1, y);
        dfs(x+1, y);
        dfs(x, y-1);
        dfs(x, y+1);
        
        return true;
    }
    
    return false;
}


int main() {
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++){
            scanf("%1d", &graph[i][j]);
        }
    }
   
    int result = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(dfs(i,j))
                result++;
        }
        
    }

    cout << result;
    
}
