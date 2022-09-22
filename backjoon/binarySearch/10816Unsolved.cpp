

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> cards;


int upperBound(int front, int rear, int key){
    int mid;
    while(front < rear){
        mid = (front + rear) /2;
        if(cards[mid] <= key) front = mid + 1;
        else rear = mid;
    }
    return rear;
}

int lowerBound(int front, int rear, int key){
    int mid;
    while(front < rear){
        mid = (front + rear) /2;
        if(cards[mid] < key) front = mid + 1;
        else rear = mid;
    }
    return rear;
}

int main() {
    freopen("input.txt","rt", stdin);
    int n,m;
    cin >> n;
    
    for(int i=0; i<n; i++){
        int tmp;
        cin >> tmp;
        cards.push_back(tmp);
    }
    
    sort(cards.begin(),cards.end());
    cin >> m;
    int res;
    for(int i=0; i<m; i++){
        int tmp, mid,  front = 0, rear = (int)cards.size();
        cin >> tmp;
        res = upperBound(front, rear, tmp);
        if(res == -1) res = 0;
        else res -= lowerBound(front,rear,tmp);
         cout << res << " ";
    }
   

}


