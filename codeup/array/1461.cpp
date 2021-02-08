
// 다음과 같은 n*n 배열 구조를 출력해보자.

// 입력이 3인 경우 다음과 같이 출력한다.
// 3 2 1
// 6 5 4
// 9 8 7

// 입력이 5인 경우는 다음과 같이 출력한다.
// 5 4 3 2 1
// 10 9 8 7 6
// 15 14 13 12 11
// 20 19 18 17 16
// 25 24 23 22 21

// 입력이 n인 경우의 2차원 배열을 출력해보자.

#include <iostream>

int main(){
    int n, count = 1;

    //입력 받기
    scanf("%d", &n);

    //입력받은 만큼 배열생성
    int array[n+1][n+1];

    // 생성한 배열에 데이터 입력
    for(int i = 1; i <= n; i++)
    {
        // j 배열에 거꾸로 데이터 입력
        for(int j = n; j >= 1; j--)
        {
            array[i][j] = count;
            count++; 
        }
     
    }

    //순서대로 데이터 출력
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n; j++)
        {
           printf("%d ",array[i][j]); 
        }
        printf("\n");     
    }    

}