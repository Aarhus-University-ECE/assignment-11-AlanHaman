#include "sum.h"

#include <stdio.h>
#include <assert.h>

/* Sum integers 1 to n */
int sum(int n)
{
  /* pre-condition */
  assert(n >= 1);
  /* post-condition */
  if (n > 1)
    return n + sum(n - 1);
  else
    return 1;
}

/* Sum integers 1 to n */
int sumtail(int n, int total)
{

  /*Pre-condition*/
  assert(n >= 1);

  /*Base Case*/
  if (n == 1) 
  {
    return 1 + total;
  }
  else if (n > 1) // Recursion
  {
    return sumtail(n - 1, n + total);
  }
}

/* Sum integers 1 to n */
int sumwhile(int n)
{
  /*Pre-condition*/
  assert(n >= 1);

  
  int sum = 0;

  //Loop that runs while n is not 0
  while (n != 0)
  {
    sum += n; 
    n--;      
  }

  printf("%d\n", sum); 

  return sum; 
}
