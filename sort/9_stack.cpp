#include <iostream>
#include <stack>

using namespace std;

int main(void){
    stack<int> s;
    s.push(7);
    s.push(4);
    s.push(2);
    s.push(1);

    while (!s.empty()){
        cout << s.top() << ' ';
        s.pop();

    }
}