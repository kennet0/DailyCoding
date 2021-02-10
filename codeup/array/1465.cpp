// 다음과 같은 n*m 배열 구조를 출력해보자.

// 입력이 3 4인 경우 다음과 같이 출력한다.
// 9 10 11 12
// 5 6 7 8
// 1 2 3 4

// 입력이 4 5인 경우는 다음과 같이 출력한다.
// 16 17 18 19 20
// 11 12 13 14 15
// 6 7 8 9 10
// 1 2 3 4 5

// 입력이 n m인 경우의 2차원 배열을 출력해보자.

#include <iostream>

int main(){
    int n, m, count = 1;

    //입력 받기
    scanf("%d %d", &n, &m);

    //입력받은 만큼 배열생성
    int array[n+1][m+1];

    // 생성한 배열에 데이터 입력
    for(int i = 1; i <= n; i++)
    {
      
        // j 배열에 거꾸로 데이터 입력
        for(int j = 1; j <= m; j++)
        {
            array[i][j] = count;
            count++; 
        }
     
    }

    //순서대로 데이터 출력
    for(int i = n; i >= 1; i--)
    {
        for(int j = 1; j <= m; j++)
        {
           printf("%d ",array[i][j]); 
        }
        printf("\n");     
    }    

}