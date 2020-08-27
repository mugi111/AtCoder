package main

import (
	"bufio"
	"fmt"
	"os"
	"strconv"
)

var sc = bufio.NewScanner(os.Stdin)

func nextInt() int {
	sc.Scan()
	i, e := strconv.Atoi(sc.Text())
	if e != nil {
		panic(e)
	}
	return i
}

func main() {
	var N, D int
	count := 0
	sc.Split(bufio.ScanWords)

	N, D = nextInt(), nextInt()

	D *= D
	var X, Y int

	for i := 0; i < N; i++ {
		X, Y = nextInt(), nextInt()

		if X*X+Y*Y <= D {
			count++
		}
	}
	fmt.Println(count)
}
