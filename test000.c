#include <stdarg.h>
#include <stdio.h>

int add_em_up (int count,...)
{
  va_list ap;
  int i;
  int sum;

  va_start (ap, count);         /* Initialize the argument list. */

  sum = 0;
  i = 0;
  while(i < count)
  {
    sum = sum + va_arg(ap, int); /*each call to va_arg meaning we are calling the next argument on the ap variable */
    i++;
  }
  
  va_end (ap);                  /* Clean up. */
  return sum;
}

int main (void)
{
  /* This call prints 16. */
  printf ("%d\n", add_em_up (3, 5, 5, 6));

  /* This call prints 55. */
  printf ("%d\n", add_em_up (10, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10));

  return 0;
}