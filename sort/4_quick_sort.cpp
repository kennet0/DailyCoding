
#include <iostream>

using namespace std;

int number = 10;
int list[] = {5,10,8,1,7,6,4,3,2,9};

void quickSort(int* list, int start, int end){
    if (start >= end){ // 원소가 1개인 경우 그냥 두기
        return; 
    }

    int key = start;
    int i = start + 1;
    int j = end;
    int temp;

    while (i <= j) { // 엇갈릴때 까지 반복
        while(i <= end && list[i] <= list[key]){
            i++;
        }
        while(j > start && list[j] >= list[key]){
            j--;
        }
        if(i  > j){ //엇갈린 상태면  키값과 교체
            temp = list[j];
            list[j] = list[key];
            list[key] = temp;
        }else { // 엇갈리지 않았다면 i와 j를 교체
            temp = list[j];
            list[j] = list[i];
            list[i] = temp;
        }
    }

    quickSort(list, start, j - 1);
    quickSort(list, j + 1, end);   
}


int main(void){

    quickSort(list, 0, number - 1);

    for (int i=0; i<number; i++){
        cout << list[i] << endl;
    }

}