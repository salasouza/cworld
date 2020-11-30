#include <stdio.h>
#include <stdlib.h>

int
main()
{
    /* unsigned --> interval without negative values */
  int a, b;

  printf("A and B? ");
  scanf("%d %d", &a, &b);
  printf("a: %i b: %i", a, b);

  printf("\n");
  return 0;
}
