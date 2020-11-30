#include <stdio.h>
#include <stdlib.h>

int
main()
{
    /* unsigned --> interval without negative values */
  const unsigned int arraySize = 10;

  int * const array = (int *) malloc(sizeof(int) * arraySize);

  for(int index = 0; index < arraySize; index++) {
    array[index] = index;
  }

  for(unsigned int index = 0; index < arraySize; index++) {
    printf("Integer %i is located at address 0x%x\n", array[index], &array[index]);
  }

  return 0;
}
