#include <stdio.h>

void InsertionSort(int input[], int len){
    int i, j, temp;
    for(i = 1; i < len; i++){
        temp = input[i];
        for(j = i-1; j > -1&&input[j]>temp; j--){
            input[j + 1] = input[j];
            input[j] = temp;
        }
    }
}

int main(){
    int v[] = {2,3,4,52,23,0,9,7,5};
    int len = sizeof(v)/sizeof(int);
    InsertionSort(v,len);
    for(int i = 0; i < len; i++){
        printf("%d ", v[i]);
    }
}