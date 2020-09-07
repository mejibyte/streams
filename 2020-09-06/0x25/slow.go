package main

import (
	"fmt"
)

func solve(a []int, p, q int) {
	sum := 0
	for i := p; i <= q; i++ {
		sum += a[i]
	}
	fmt.Println(sum)
}

func main() {
	var n int
	_, err := fmt.Scanf("%d", &n)
	if err != nil {
		panic(err)
	}

	a := make([]int, n)
	for i := 0; i < n; i++ {
		_, err := fmt.Scanf("%d", &a[i])
		if err != nil {
			panic(err)
		}
	}

	var c int
	_, err = fmt.Scanf("%d", &c)
	if err != nil {
		panic(err)
	}

	for k := 0; k < c; k++ {
		var p, q int
		_, err := fmt.Scanf("%d %d", &p, &q)
		if err != nil {
			panic(err)
		}

		solve(a, p, q)
	}
}