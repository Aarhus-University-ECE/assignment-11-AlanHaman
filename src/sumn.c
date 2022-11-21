#include "sumn.h"

#include <stdio.h>
#include <assert.h>

int sumn(int n)
{

    /*Pre-Condition*/
    assert(n >= 1);

    /*Recusrion*/
    if (n > 1)
    {
        return 2 * n - 1 + sumn(n - 1); // Recursion
    }
    /*Base Case*/

    if (n == 1) // Recursion
    {
        return 1;
    }
}
