// 다음과 같은 n*n 배열 구조를 출력해보자.

// 입력이 3인 경우 다음과 같이 출력한다.
// 1 4 7
// 2 5 8
// 3 6 9

// 입력이 5인 경우는 다음과 같이 출력한다.
// 1 6 11 16 21
// 2 7 12 17 22
// 3 8 13 18 23
// 4 9 14 19 24
// 5 10 15 20 25

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
        //i 배열 숫자를 count에 초기화
        count = i ;
        // j 배열에 거꾸로 데이터 입력
        for(int j = 1; j <= n; j++)
        {
            array[i][j] = count;
            count += n; 
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