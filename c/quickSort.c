#include <stdio.h>

void quick_sort(int data[], int low, int high){
    int mid;
    if(low < high){
        int Partition(int data[], int low, int high);
        mid = Partition(data, low, high);
        quick_sort(data, low, mid-1);
        quick_sort(data, mid+1, high);
    }
}

int Partition(int data[], int low, int high){
    int mid;
    data[0] = data[low];
    mid = data[low];
    while(low < high){
        while((low < high) && (data[high]) >= mid){
            --high;
        }
        data[low] = data[high];
         
        while((low < high) && (data[low] < mid)){
            ++low;
        }
 
        data[high] = data[low];
    }   
    data[low] = data[0];
    return low;
 
}

int main(){
    int v[] = {2,3,4,52,23,0,9,7,5};
    int len = sizeof(v)/sizeof(int);
    quick_sort(v,0,len);
    for(int i = 0; i < len; i++){
        printf("%d ", v[i]);
    }
}