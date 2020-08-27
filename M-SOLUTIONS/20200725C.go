package main

import (
	"bufio"
	"fmt"
	"os"
	"strconv"
	"strings"
)

func main() {
	var N, K int
	count := 0

	scanner := bufio.NewScanner(os.Stdin)
	scanner.Scan()
	line := scanner.Text()
	chars := strings.Split(line, " ")
	fmt.Println(chars)
	num, err := strconv.Atoi(chars[0])
	fmt.Println(err)
	N = num
	num, err = strconv.Atoi(chars[1])
	fmt.Println(err)
	K = num
	scanner.Scan()
	line = scanner.Text()
	chars = strings.Split(line, " ")
	A := make([]int, len(chars))
	for i, ch := range chars {
		num, err := strconv.Atoi(ch)
		fmt.Println(err)
		A[i] = num
	}

	fmt.Println(A)

	tmp := make([]int, N-K)

	for i := (N - K); i <= N; i++ {
		for j := K; j >= 0; j-- {
			tmp[count] *= A[i-j]
		}

		count++
	}

	fmt.Println(tmp)
}
