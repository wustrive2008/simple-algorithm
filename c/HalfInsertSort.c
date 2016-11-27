#include <stdio.h>

void HalfInsertSort(int a[],int len){
    int i, j, temp;
    int low, high, mid;
    for(i = 0; i < len; i++){
        temp = a[i];
        low = 0;
        high = i-1;
        while(low <= high){                  //12548756
            mid = (low + high)/2;
            if(a[mid] > temp){
                high = mid - 1;
            }else{
                low = mid + 1;
            }
        }
        for(j = i-1; j > high; j--){
            a[j+1] =  a[j];
        }
        a[high+1] = temp;
    }
}

int main(){
    int v[] = {2,3,4,52,23,0,9,7,5};
    int len = sizeof(v)/sizeof(int);
    HalfInsertSort(v,len);
    for(int i = 0; i < len; i++){
        printf("%d ", v[i]);
    }
}