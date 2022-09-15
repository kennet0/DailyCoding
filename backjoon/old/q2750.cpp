#include <iostream>
#include <vector>
#include <algorithm>

int main()
{

    freopen("input.txt","rt", stdin);
    int n, i;
    scanf("%d", &n);
    std::vector<int> a(n);
    for(i=0;i<n;i++){
        scanf("%d", &a[i]);
    }

    sort(a.begin(), a.end());
     for(i=0;i<n;i++){
        printf("%d\n", a[i]);
    }
}