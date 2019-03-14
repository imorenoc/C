#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  int n;
  double x;

  n = atoi(argv[1]);
  printf("%d\n", n);

  x = atof(argv[2]);
  printf("%f\n", x);

  return 0;
}
