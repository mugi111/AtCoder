package main

import "fmt"

func main() {
	var X int
	const base = 400

	fmt.Scan(&X)

	for i := 0; i < 8; i++ {
		added := base + (i * 200)
		if added <= X && X < added+200 {
			fmt.Println(8 - i)
		}
	}
}
