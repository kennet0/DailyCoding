//83. 복면산 SEND+MORE=MONEY (MS인터뷰)
//  SEND+MORE=MONEY 라는 유명한 복면산이 있습니다. 이 복면산을 구하는 프로그램을 작성 하세요.
//출력형태
//9567 +1085 --------- 10652

#include <iostream>
#include <vector>
#include <string>
#include <queue>
#define MAX 2147483647

using namespace std;
int a[11], ch[11];

int send(){
    return a[6]*1000+a[1]*100+a[3]*10+a[0];
}
int more(){
    return a[2]*1000+a[4]*100+a[5]*10+a[1];
}
int money(){
    return a[2]*10000+a[4]*1000+a[3]*100+a[1]*10+a[7];
}

void DFS(int L){
    if(L==8){
        if(send()+more()==money()){
            if(a[2]==0 || a[6]==0) return;
            printf("  %d %d %d %d\n", a[6],a[1],a[3],a[0]);
            printf("+ %d %d %d %d\n", a[2],a[4],a[5],a[1]);
            printf("---------\n");
            printf("%d %d %d %d %d\n", a[2],a[4],a[3],a[1],a[7]);
            puts("");
        }
    }else{
        for(int i=0;i<10;i++){
            if(ch[i]==0){
                a[L]=i;
                ch[i]=1;
                DFS(L+1);
                ch[i]=0;
            }
        }
    }
}

int main() {
    freopen("input.txt", "rt", stdin);
  
    DFS(0);

}

