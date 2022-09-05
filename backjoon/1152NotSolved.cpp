#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

#define MAXSIZE 1000000
using namespace std;



int main()
{
    freopen("input.txt","rt", stdin);
    int n, i, cnt=0;
    char* str = new char[MAXSIZE];
    fgets(str,sizeof(char)*MAXSIZE,stdin);
    for(i=0;str[i]!='\0';i++){
        if(str[i]=' ') cnt++;
    }
    printf("%d", cnt);
   
   
        
}