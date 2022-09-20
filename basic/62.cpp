//병합정렬


#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>

using namespace std;

int num[11], tmp[11];


void devide(int lt, int rt){
  int mid;
  int p1,p2,p3;
  if(lt<rt){
    mid = (lt+rt)/2;
    devide(lt,mid);
    devide(mid+1, rt);
    p1 = lt;
    p2 = mid+1;
    p3 = lt;
    while (p1<=mid && p2 <=rt){
      if(num[p1] < num[p2]) tmp[p3++] = num[p1++];
      else tmp[p3++] = num[p2++];
    }
    while(p1<=mid) tmp[p3++] = num[p1++];
    while(p2<=rt) tmp[p3++] = num[p2++];
    for(int i =lt; i<=rt;i++){
      num[i]= tmp[i];
    }

  }
 
}

int main(){
  freopen("input.txt","rt", stdin);
  int n;
  scanf("%d", &n);

  for(int i=1; i<=n; i++){
    scanf("%d", &num[i]);
  }

  devide(1,n);

  for(int i =1;i<=n;i++){
    cout << num[i];
  }

}

