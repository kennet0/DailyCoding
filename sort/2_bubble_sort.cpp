#include<iostream>

using namespace std;

int main(){
    int temp;
    int array[10] = {10,5,8,1,7,6,4,3,2,9};
    for (int i = 0; i < 10; i++){
        for (int j = 0; j< 9 - i; j++){
            if (array[j] > array[j + 1]){
                temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }
    for (int i=0; i<10; i++){
        cout << array[i]<<endl;
    }
}