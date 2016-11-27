#include <stdio.h>

/*带哨兵的直接插入排序*/
 /**
  ** 带哨兵的直接插入排序,数组的第一个元素不用于存储有效数据
  ** 将input[0]作为哨兵，可以避免判定input[j]中，数组是否越界
  ** 因为在j--的过程中，当j减小到0时,变成了input[0]与input[0]
  ** 自身进行比较，很明显这个时候说明位置i之前的数字都比input[i]小
  ** 位置i上的数字不需要移动，直接进入下一轮的插入比较。
  * 
  **/
 
void InsertionSortWithPiquet(int input[], int len){
    int i, j;
    for(i = 2; i < len; i++){
        input[0] = input[i];
        for(j = i-1; input[j] > input[0]; j--){
            input[j+1] = input[j];
            input[j] = input[0];
        }
    }
}

int main(){
    int v[] = {2,3,4,52,23,0,9,7,5};
    int len = sizeof(v)/sizeof(int);
    InsertionSortWithPiquet(v,len);
    for(int i = 0; i < len; i++){
        printf("%d ", v[i]);
    }
}