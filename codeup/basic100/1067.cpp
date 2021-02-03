#include <iostream>

int main(){
    int a;
    
    scanf("%d",&a);
    

    if(a>0){
        if(a%2 == 0){
            printf("plus\n");
            printf("even\n");
        }else{
            printf("plus\n");
            printf("odd\n");
        }
    }
     else{
        if(a%2 == 0){
            printf("minus\n");
            printf("even\n");
        }else{
            printf("minus\n");
            printf("odd\n");
        }
    }
    
}