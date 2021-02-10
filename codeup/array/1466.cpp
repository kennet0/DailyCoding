// 다음과 같은 n*m 배열 구조를 출력해보자.

// 입력이 3 4인 경우 다음과 같이 출력한다.
// 12 9 6 3
// 11 8 5 2
// 10 7 4 1

// 입력이 4 5인 경우는 다음과 같이 출력한다.
// 20 16 12 8 4
// 19 15 11 7 3
// 18 14 10 6 2
// 17 13 9 5 1

// 입력이 n m인 경우의 2차원 배열을 출력해보자.

#include <iostream>

int main(){
    int n, m, count = 1;

    scanf("%d %d", &n, &m);

    int array[n+1][m+1];

    for(int j = m; j >= 1; j--)
    {
        for(int i = n; i >= 1; i--)
        {
            array[i][j] = count;
            count++; 
        }
     
    }

 
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= m; j++)
        {
           printf("%d ",array[i][j]); 
        }
        printf("\n");     
    }    

}