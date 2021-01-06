
#include <iostream>

using namespace std;
int n = 9;
int heap[9]= {7,5,6,8,4,3,1,9,2};

int main(void){

    for(int i = 1; i < n; i++){
        int c = i;

        do{
            int root = (c -1) / 2;

             //      1         3
            if(heap[root] < heap[c]){
                int temp = heap[root];
                heap [root] = heap[c];
                heap[c] = temp;
            }
            c = root;
        }while (c !=0);

    }

    for (int i = n - 1 ; i>=0; i--){
        int temp = heap[0];
        heap[0] = heap[i];
        heap[i] = temp;

        int root = 0;
        int c = 1;
        do{
            c = 2 * root + 1;
            //자식들중에 더 큰값 찾기
            if(c < i - 1 && heap[c] < heap[c + 1]){
                c++;
            }

            if(c < i && heap[root] < heap[c]){
                temp = heap[root];
                heap[root] = heap[c];
                heap[c] = temp;
            }
            root =c;
        } while(c < i);
    }

    for(int i = 0; i < n ; i++){
        cout << heap[i] << " ";
    }
}

