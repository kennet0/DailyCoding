#include <iostream>
#include <string>
#include <math.h>

using namespace std;

int main(){
    
    int yyyy, mm ,dd;
    scanf("%04d.%02d.%02d", &yyyy,&mm,&dd);

    printf("%02d-%02d-%04d",dd,mm,yyyy);

    return 0;
}