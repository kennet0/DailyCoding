//1969 DNA

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#define MAX 2147483647
#define MIN -2147483647
using namespace std;

int ch[51];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
//    freopen("input.txt", "rt", stdin);
    int n, m;
    cin >> n >> m;
    vector<string> list;
    
    for(int i=0; i<n;i++){
        string tmp;
        cin >> tmp;
        list.push_back(tmp);
    }
    string answer = "";
    int answerDist = 0;
    
    for(int j=0; j<m;j++){
        int maxs = MIN;
        char letter = ' ';
        
        //앞글자부터 다른글자 찾기
        for(int i=0; i<n;i++){
            int tmp = ++ch[list[i][j]-'A'];
        
            if(tmp > maxs) {
                letter = list[i][j];
                maxs = tmp;
            }else if(tmp == maxs){
                if(letter > list[i][j]) letter = list[i][j];
                answerDist++;
            }else answerDist++;
        }
        for(int k =0; k<51;k++) ch[k]=0;
        answer += letter;
    }
    
    cout << answer << endl;
    cout << answerDist;
    
}
