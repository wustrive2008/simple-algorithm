package main

import "fmt"

func QuickSort(vector []int, low, hight int) {
	fmt.Println(vector)
	if low < hight {
		i := low
		j := hight
		temp := vector[low] // 开始挖坑填数
		for i < j {
			for i < j && vector[j] >= temp {
				j--
			}
			vector[i] = vector[j]
			for i < j && vector[i] <= temp {
				i++
			}
			vector[j] = vector[i]
		}
		vector[i] = temp
		QuickSort(vector, low, i-1) // 分治
		QuickSort(vector, i+1, hight)
	}
}

func main() {
	QuickSort([]int{3, 4, 2, 4, 6, 7, 8, 4}, 0, 7)
}
