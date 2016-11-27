#include <stdio.h>

void shellsort(int v[],int n){
    int gap, i, j, temp;
    for(gap = n/2; gap >0;gap /= 2){
        for(i = gap; i < n; i++){
            for(j = i-gap; (j >= 0)&&(v[j] > v[j+gap]); j -= gap){
                temp = v[j];
                v[j] = v[j+gap];
                v[j+gap] = temp;
            }
        }
    }
}

int main(){
    int v[] = {2,3,4,52,23,0,9,7,5};
    int len = sizeof(v)/sizeof(int);
    shellsort(v,len);
    for(int i = 0; i < len; i++){
        printf("%d ", v[i]);
    }
}