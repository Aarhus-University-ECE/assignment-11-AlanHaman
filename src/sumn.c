#include "sumn.h"

#include <stdio.h>

int sumn(int n) {
    // basecase at n == 1.
    if (n == 1) {
        return n;
    } else {
       
        return (2 * n - 1) + sumn(n - 1);
    }
    return 0;
}
