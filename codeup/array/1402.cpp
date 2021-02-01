#include <iostream>

int main(){
    int n;
    scanf("%d", &n);
    int array[n+1];
    for(int i = 1; i <= n; i++)
    {
        scanf("%d", &array[i]);   
    }
    for(int i = n; i >= 1; i--)
    {
        printf("%d ",array[i]);   
    }
    

}