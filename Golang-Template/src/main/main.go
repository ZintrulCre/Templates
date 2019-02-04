package main

import "fmt"

func sumEvenAfterQueries(A []int, queries [][]int) []int {
    sum, ret := 0, make([]int, 0)
    for i := 0; i < len(A); i++ {
        if A[i]%2 == 0 {
            sum += A[i]
        }
    }
    for i := 0; i < len(queries); i++ {
        if A[queries[i][1]]%2 == 0 {
            sum -= A[queries[i][1]]
        }
        A[queries[i][1]] += queries[i][0]
        if A[queries[i][1]]%2 == 0 {
            sum += A[queries[i][1]]
        }
        ret = append(ret, sum)
    }
    return ret
}

func main() {
    a := []int{1, 2, 3, 4}
    b := [][]int{{1, 0}, {-3, 1}, {-4, 0}, {2, 3}}
    s := sumEvenAfterQueries(a, b)
    fmt.Println(s)
}
