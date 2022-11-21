/*
 * Fibonacci numbers defined recursively
 */
#include "fib.h"

#include <assert.h>		/* assert */
#include <stdio.h>		/* printf */


// fib 1 = 1
// fib 2 = 1
// fib 3 = 2
// fib 4 = 3
// fib 5 = 5

/* Fibonacci function definition */
int fib_tail (int n, int p,int pp)
{
/* assert to make sure there is at least 1 fib number */
assert (n >= 1);

    if(n == 1)
        return p;

    else
        return fib_tail(n-1,pp+p,p);
}


int fib(int n) {
    return fib_tail(n, 1, 0);
}
