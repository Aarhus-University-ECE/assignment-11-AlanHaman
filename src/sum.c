#include "sum.h"

#include <assert.h>
#include <stdio.h>

/* Sum integers 1 to n */
int sum(int n) {
    /* pre-condition */
    assert(n >= 1);
    /* post-condition */
    if (n > 1)
        return n + sum(n - 1);
    else
        return 1;
}

/* Sum integers 1 to n */
int sumtail(int n, int total) {
    // basecase is at n==1.
    
    if (n == 1) {
        return n + total;
    } else {
        return sumtail(n - 1, n + total);
    }
}

/* Sum integers 1 to n */
int sumwhile(int n) {
    int total = 0;
    // While that runs as long as n is not 0, n!=0
    while (n != 0) {
        total = total + n;
        n--;
    }
    return total;
}
