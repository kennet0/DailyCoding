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
#define minFinder(a,b) a < b ? a:b

char board[51][51];
using namespace std;

int main() {
    int n,m;
    scanf("%d %d",&n,&m);
    
    for(int i=0;i<n;i++){
        for(int j=0; j<m; j++){
            cin >> board[i][j];
//            cout << board[i][j] << endl;
        }
    }
    
    
    int min= 2147000000;
    for(int i=0;i<n-8+1;i++){
        for(int j=0; j<m-8+1; j++){
            int countB=0;
            int countW=0;
            for(int k=i;k<i+8;k++){
                for(int l=j;l<j+8;l++){
                    if((k+l)%2==0){
                        if(board[k][l]=='B'){
                            countW++;
                        }else{
                            countB++;
                        }
                    }else{
                        if(board[k][l]=='B'){
                            countB++;
                        }else{
                            countW++;
                        }
                    }cout << countB << endl;
                }
            }
            min = minFinder(min,countB);
            min = minFinder(min,countW);
        }
    }
    cout << min;
    
}

