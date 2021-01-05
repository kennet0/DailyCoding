#include <iostream>
#include <algorithm>

using namespace std;

class Student{
    public :
    int score;
    string name;

    Student(int score, string name){
        this->score = score;
        this->name = name; 

    }

    bool operator <(const Student &student)const {
        return this->score < student.score;
    }
};


int main(void){

   
    Student student[] = {
        Student(60, "장동현"),
        Student(55, "김슬기"),
        Student(90, "조재혁"),
        Student(76, "정재운")
    };

    sort(student, student+4);

    for(int i = 0; i<4; i++){
        cout << student[i].name << "\n";
    }

}