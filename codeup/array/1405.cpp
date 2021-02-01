// n개의 숫자가 입력되면,

// n개의 숫자를 왼쪽으로 하나씩 돌려서 출력하시오.

// 예) 1 2 3 4 5가 입력된 경우,

// 1 2 3 4 5

// 2 3 4 5 1

// 3 4 5 1 2

// 4 5 1 2 3

// 5 1 2 3 4

#include <iostream>

int main(){
    int n;

    //입력 받기
    scanf("%d", &n);

    //입력받은 만큼 배열생성
    int array[n+1];

    // 생성한 배열에 데이터 입력
    for(int i = 1; i <= n; i++)
    {
        scanf("%d", &array[i]);   
    }

    //순서대로 데이터 출력
    for(int i = 1; i <= n; i++)
    {
        for(int j = i; j < n + i ; j++){
            // j인덱스가 개수를 초과하면 처음 배열로 돌아감
            if(j > n)
            {   
                int temp =  j - n;
                printf("%d ",array[temp]); 
            } else{
                printf("%d ",array[j]); 
            }
        }
        printf("\n");     
    }    

}