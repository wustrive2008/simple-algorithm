#include <stdio.h>

void selectsort(int a[], int n){
    int i, j, temp;
    for(i = 0; i < n; i++){
        for(j = i + 1; j <= n; j++){
            if(a[i] > a[j]){
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}

int main(){
    int v[] = {2,3,4,52,23,0,9,7,5};
    int len = sizeof(v)/sizeof(int);
    selectsort(v,len);
    for(int i = 0; i < len; i++){
        printf("%d ", v[i]);
    }
}