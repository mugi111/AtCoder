package main

import "fmt"

func main() {
	var L, R, d int
	var count int

	fmt.Scan(&L, &R, &d)

	for i := L; i <= R; i++ {
		if(i % d ==0){
			count++
		}
	}
}