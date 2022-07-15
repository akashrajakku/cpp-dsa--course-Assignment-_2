
#include <stdio.h>

int main ()
{
  int a;
  printf ("Enter a number:");
  scanf ("%d", &a);
  printf ("\nUnit digit of %d is %d", a, a % 10);

  return 0;
}
