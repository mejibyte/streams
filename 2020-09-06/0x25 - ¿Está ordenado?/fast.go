// Solution to https://codeo.app/problemas/0x25-suma-de-un-subarreglo
package main

import (
	"fmt"
)

func solve(a, s []int, p, q int) {
	// O(1)
	sum := s[q]  // a[0] + a[1] + ... + a[q]
	if (p - 1 >= 0) {
		sum -= s[p - 1]
	}

	// Alternatively, this works too, and some people might like it more.
	// sum := s[q] - s[p] + a[p];
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


	s := make([]int, n)
	// s[i] = sum of a[0] + ... + a[i]

	// O(n)
	sum := 0
	for i := 0; i < n; i++ {
		sum += a[i]
		s[i] = sum
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

		solve(a, s, p, q)
	}
}