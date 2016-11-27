package main

import "fmt"

func BinarySelectSort(vector []int) {
	fmt.Println("SelectSort")
	fmt.Println(vector)
	n := len(vector)
	for i := 0; i < n/2; i++ {
		// 选择最小的元素和最大元素
		k := i
		t := n - i - 1
		for j := i + 1; j <= n-i-1; j++ {
			if vector[k] > vector[j] {
				k = j
			}
			if vector[t] < vector[j] {
				t = j
			}
		}
		// 交换
		if k != i {
			temp := vector[i]
			vector[i] = vector[k]
			vector[k] = temp
		}
		if t != n-i-1 {
			temp := vector[n-i-1]
			vector[n-i-1] = vector[t]
			vector[t] = temp
		}
		fmt.Println(vector)
	}
}

func main() {
	BinarySelectSort([]int{3, 4, 2, 4, 6, 7, 8, 4})
}
