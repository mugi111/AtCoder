package main

import (
	"bufio"
	"fmt"
	"os"
	"strconv"
)

var sc = bufio.NewScanner(os.Stdin)

func scanStr() string {
	sc.Scan()
	return sc.Text()
}

func scanInt() int {
	sc.Scan()
	a, err := strconv.Atoi(sc.Text())
	if err != nil {
		// fmt.Println(err)
	}
	return a
}

func scanInt2() (int, int) {
	return scanInt(), scanInt()
}

func scanInt3() (int, int, int) {
	return scanInt(), scanInt(), scanInt()
}

func main() {
	sc.Split(bufio.ScanWords)

	H, W, M := scanInt3()

	h := make([][]int, M)
	for i, _ := range h {
		h[i] = make([]int, 2)
	}

	mH := []int{-1}
	mW := []int{-1}

	sum := 0

	for i := 0; i < M; i++ {
		h[i][0], h[i][1] = scanInt2()
	}

	for i := 0; i < H; i++ {
		sum = 0
		for _, val := range h {
			if i == val[0] {
				sum++
			}
		}
		if mH[0] == sum {
			mH = append(mH, i)
		} else if mH[0] < sum {
			mH = []int{i}
		}
	}

	sum = 0
	for i := 0; i < W; i++ {
		sum = 0
		for _, val := range h {
			if i == val[1] {
				sum++
			}
		}
		if mW[0] == sum {
			mW = append(mW, i)
		} else if mW[0] < sum {
			mW = []int{i}
		}
	}

	ansH, ansW := 0, 0

	min := -1
	for _, valH := range mH {
		for _, valW := range mW {
			sum = 0
			if valH == valW {
				sum++
			}
		}
		if min > sum {
			ansH = valH
		}
	}

	fmt.Println(ansH, ansW)
}
