package main

import "fmt"

func main() {
	v := []int{1, 5, 6, 4, 3, 2, 7, 8, 9, 3}

	flag := true

	for i := 0; i < len(v)-1; i++ {
		flag = true
		for j := 0; j < len(v)-i-1; j++ {
			if v[j] > v[j+1] {
				v[j], v[j+1] = v[j+1], v[j]
				flag = false
			}
		}
		if flag == true {
			break
		}
	}

	for _, value := range v {
		fmt.Println(value, " ")
	}
}
