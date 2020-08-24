package main

import "fmt"

func main() {
	var N int
	count := 0
	fmt.Scanf("%d", &N)
	number := make([]int, N)
	for i := 0; i < N; i++ {
		fmt.Scanf("%d", &number[i])
	}

	for i := 0; i < N; i++ {
		if((i+1) % 2 == 1) {
			if(number[i] % 2 == 1) {
				count++
			}
		}
	}
	fmt.Println(count)
}