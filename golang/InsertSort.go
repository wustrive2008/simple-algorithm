package main

import "fmt"

func InsertSort(vector []int) {
	fmt.Println("InsertSort")
	fmt.Println(vector)
	for i := 1; i < len(vector); i++ {
		// 每一趟不满足条件就选择i为哨兵保存，将哨兵插入0~i-1有序序列（0~i-1始终是有序的）
		if vector[i] < vector[i-1] { /*vector[i] > vector[i-1]*/
			temp := vector[i]
			//后移直到找到哨兵合适的位置
			j := i - 1
			for ; j >= 0 && vector[j] > temp; j-- { /*vector[j] < temp*/
				vector[j+1] = vector[j]
			}
			//插入位置前后都是有序的，最后也是有序的
			vector[j+1] = temp
		}
		fmt.Println(vector)
	}
}

func main() {
	InsertSort([]int{3, 4, 2, 4, 6, 7, 8, 4})
}
