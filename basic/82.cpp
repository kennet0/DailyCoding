//82. 순열구하기(DFS : Depth First Search)
//  자연수 N과 R이 주어지면 서로 다른 N개의 자연수 중 R개를 뽑아 일렬로 나열하는 프로그램 을 작성하세요.
//▣ 입력설명
//첫 번째 줄에 자연수 N(1<=N<=15)과 R(0<=R<=15)이 주어진다. 단 (N>=R) 두 번째 줄에 N개의 서로 다른 자연수가 오름차순으로 주어진다.
//▣ 출력설명
//순열의 각 경우를 아래와 같이 오름차순으로 출력한다. 마지막 줄에 총 개수도 출력한다.


#include <iostream>
#include <vector>
#include <string>
#include <queue>
#define MAX 2147483647

using namespace std;
int a[20], res[20], ch[20];
int n,r, cnt=0;

void DFS(int L){
    if(L==r){
        for(int i=0; i<L; i++){
            cout << res[i] << " ";
        }
        cout << endl;
        cnt++;
    }else{
        for(int i=0; i<n; i++){
            if(ch[i]==0){
                res[L] = a[i];
                ch[i] = 1;
                DFS(L+1);
                ch[i] = 0;
            }
        }
    }
}

int main() {
    freopen("input.txt", "rt", stdin);
    cin >> n >> r;
    for(int i=0;i<n; i++){
        cin >> a[i];
    }
    DFS(0);
    
    cout << cnt << endl;
}

