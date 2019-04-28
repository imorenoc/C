/* gcc -o runvec runvec.c vectorial.c  */
#include <stdio.h>
#include <math.h>
#include "vectorial.h"

int main(int argc, char *argv[])
{
  int i, j;
  double theta;
  double *v, *vr, **M;

  v = one_d_double_array(3);
  vr= one_d_double_array(3);
  M = two_d_double_array(3, 3);

  theta = D2R(90);

  v[0] = 0.;
  v[1] = 2.;
  v[2] = 3.;

  M[0][0] = 1.;
  M[0][1] = 0.;
  M[0][2] = 0.;

  M[1][0] = 0.;
  M[1][1] = cos(theta);
  M[1][2] = -sin(theta);

  M[2][0] = 0.;
  M[2][1] = sin(theta);
  M[2][2] = cos(theta);

  for (i = 0; i < 3; ++i)
    for (j = 0; j < 3; ++j)
      vr[i] += M[i][j]*v[j];

  printf("vr = (%.2f, %.2f, %.2f)\n", vr[0], vr[1], vr[2]);

  return 0;
}
