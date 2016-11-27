package main

import "fmt"

func SelectSort(vector []int) {
	fmt.Println("SelectSort")
	fmt.Println(vector)
	for i := 0; i < len(vector); i++ {
		// 选择最小的元素
		k := i
		for j := i + 1; j < len(vector); j++ {
			if vector[k] > vector[j] {
				k = j
			}
		}
		// 交换
		if k != i {
			temp := vector[i]
			vector[i] = vector[k]
			vector[k] = temp
		}
		fmt.Println(vector)
	}
}

func main() {
	SelectSort([]int{3, 4, 2, 4, 6, 7, 8, 4})
}
