#include <stdio.h>
#include "square.h"

int main() {
  int x;

  for (x=1; x <= 10; x++)
    printf("%d ", square(x));

  printf("\n");
  return 0;
}
