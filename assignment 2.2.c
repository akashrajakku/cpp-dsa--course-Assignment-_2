
#include <stdio.h>

int main ()
{
  int a;
  printf ("Enter a number:");
  scanf ("%d", &a);
  printf ("\n %d without last digit is %d", a, a / 10);

  return 0;
}
