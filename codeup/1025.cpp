#include <iostream>
#include <string>
#include <math.h>

using namespace std;

int main(){

    int num[5];
    scanf("%1d%1d%1d%1d%1d", &num[4],&num[3],&num[2],&num[1],&num[0]);

    for(int i = 4; i >= 0; i--){
        num[i] = num[i] * pow(10,i);
        printf("[%d]\n" , num[i]);
    }



    return 0;
}