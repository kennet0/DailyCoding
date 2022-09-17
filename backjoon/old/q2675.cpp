#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

char str[20];
int main()
{
    // freopen("input.txt","rt", stdin);
    int n, num, i,j,k;
    scanf("%d", &n);
    vector<int> a(n);
  
     
    for(i=0;i<n;i++){
        scanf("%d %s", &num, &str);  
        for(j=0;str[j]!='\0';j++){
            for(k=0;k<num;k++){
                printf("%c", str[j]);
            }   
        }
        printf("\n");
    }
    
    


}