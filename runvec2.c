/* gcc -o runvec runvec.c vectorial.c  */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "vectorial2.h"

int main(int argc, char *argv[])
{
  double theta;
  double *u, *v, **M;

  u = one_d_double_array(3);
  v = one_d_double_array(3);

  u[0] = atof(argv[1]);
  u[1] = atof(argv[2]);
  u[2] = atof(argv[3]);

  theta = atof(argv[4]);
  theta = D2R(theta);

  v = rotx(u, theta);

  printf("v = (%.2f, %.2f, %.2f)\n", v[0], v[1], v[2]);

  return 0;
}
