/*
 * Fibonacci numbers defined recursively
 */
#include "fib.h"

#include <assert.h>		/* assert */
#include <stdio.h>		/* printf */


// fib 1 = 1

int fib(int n, int p, int pp) {
    // basecase is where n==1.
    if (n == 1) {
        return p;
    } else {
       
        return fib(n - 1, pp, p + pp);
    }
    return 0;
}
