#include <stdio.h>

void bublesort(int a[], int n){
    int i, j, k;
    for(j = 0; j < n; j++){
        for(i = 0; i < n-j; i++){
            if(a[i] > a[i+1]){
                k = a[i];
                a[i] = a[i+1];
                a[i+1] = k;
            }
        }
    }
}

int main(){
    int v[] = {2,3,4,52,23,0,9,7,5};
    int len = sizeof(v)/sizeof(int);
    bublesort(v,len);
    for(int i = 0; i < len; i++){
        printf("%d ", v[i]);
    }
}