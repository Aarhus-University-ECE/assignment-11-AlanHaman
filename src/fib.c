/*
 * Fibonacci numbers defined recursively
 */
#include "fib.h"

#include <assert.h> /* assert */
#include <stdio.h>  /* printf */

/* Fibonacci function definition */

int fib_tail(int n, int p, int pp)
{
    if (n == -1 || n == 0)
    {
        return 1;
    }

    /*Pre-condition*/
    assert(n > 0);

    /*Base case*/
    if (n == 1) 
    {
        return p + pp;
    }
    else
    {
        return fib_tail(n - 1, p + pp, p); // Recusrion
    }
}

int fib(int n)
{
    return fib_tail(n - 2, 1, 1); 
}
