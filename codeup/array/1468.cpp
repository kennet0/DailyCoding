// 다음과 같은 n*m 배열 구조를 출력해보자.

// 입력이 3 4인 경우 다음과 같이 출력한다.
// 10 7 4 1
// 11 8 5 2
// 12 9 6 3

// 입력이 4 5인 경우는 다음과 같이 출력한다.
// 17 13 9 5 1
// 18 14 10 6 2
// 19 15 11 7 3
// 20 16 12 8 4

// 입력이 n m인 경우의 2차원 배열을 출력해보자.

#include <iostream>

int main(){
    int n, count = 1;

    scanf("%d", &n);

    int array[n+1][n+1];
    
    for(int i = 1; i <= n; i++)
    {
        if(i % 2 != 0){
            for(int j = 1; j <= n; j++)
            {
                array[i][j] = count;
                count++; 
            }
        }else{
            for(int j = n; j >= 1; j--)
            {
                array[i][j] = count;
                count++; 
            }
        }
        
     
    }

 
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n; j++)
        {
           printf("%d ",array[i][j]); 
        }
        printf("\n");     
    }    

}