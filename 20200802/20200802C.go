package main

import "fmt"
import "math"

func main() {
	var K, count int
	count = 1
	var base float64
	base = 7

	fmt.Scan(&K)

	if int(K)%2 == 0 {
		println(-1)
		return
	}

	for {
		if int(base)%int(K) == 0 {
			println(count)
			return
		}

		base += 7 * (math.Pow(10, float64(count)))
		count++
	}
}
