#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

// 합뒤로 합쳐진 두문자열중 더 큰것 기준으로 정렬 
// 예를들면 1,30 이면 130 과 301을 비교하면 301이 더크므로 301로 정렬
bool cmp( string a,  string b) {
    return a + b > b + a;
}

string solution(vector<int> numbers) {
    string answer = "";
    vector<string> temp;

    // 들어온 파라미터 벡터를 스트링으로 변환
    for(auto num:numbers){
        temp.push_back(to_string(num));
    }

    sort(temp.begin(), temp.end(), cmp);
    
    //처음 숫자가 0 이면 0을반환
    if(temp.at(0) == "0") return "0";

    for(auto num : temp){
        answer += num;
    }

    return answer;
}

int main(void){
    vector<int> test;

    // test1
    // test.push_back(6);
    // test.push_back(10);
    // test.push_back(2);

    //test2
    test.push_back(3);
    test.push_back(30);
    test.push_back(34);
    test.push_back(5);
    test.push_back(9);

    string answer = solution(test);
    cout << answer ;
}