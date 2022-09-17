#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

char str[1000000];
int cnt[123];
int main()
{
    // freopen("input.txt","rt", stdin);
    int n, num, i,j,k,idx, max=-214700000;
    scanf("%s", &str);
    for(i=0; str[i]!='\0';i++){
        if(str[i] >= 97) cnt[str[i]-32]++;
        else cnt[str[i]]++;
       
    }
    for(i=65;i<=90;i++){
        if(max < cnt[i]){
            max = cnt[i];
            idx = i;
          
        }else if(max == cnt[i]) {
            idx = '?';
        }     
    }
    printf("%c", idx);      
}