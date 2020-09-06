package main

import (
	"fmt"
	"os"
	"io"
	"bufio"
)

func main() {
	in := bufio.NewReader(os.Stdin)
	out := bufio.NewWriter(os.Stdout)


	for {
			c, err := in.ReadByte()
			if err == io.EOF {
					break
			}
			out.WriteByte(c)
			fmt.Printf("\nByte is: 0x%x\n", c)
	}

}