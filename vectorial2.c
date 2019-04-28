#include <stdlib.h>
  #include <math.h>
  /* -------- */
  /* Arreglos */
  /* -------- */

  /* 1D int */
  int *one_d_int_array(int n) {
    int *ptr;

    ptr = (int *) calloc(n,sizeof(int));
    return ptr;
  }

  /* 2D int */
  int **two_d_int_array(int lx, int ly) {
    int **ptr, i; 

    ptr = (int **) calloc(lx,sizeof(int*));
    for(i=0;i<lx;++i) 
      ptr[i] = (int *) calloc(ly,sizeof(int));
    return ptr;
  }

  /* 1D double */
  double *one_d_double_array(int n) {
    double *ptr;

    ptr = (double *) calloc(n,sizeof(double));
    return ptr;
  }

  /* 2D double */
  double **two_d_double_array(int lx, int ly) {
    int i;
    double  **ptr;

    ptr = (double **) calloc(lx,sizeof(double*));
    for(i=0;i<lx;++i) 
      ptr[i] = (double*) calloc(ly,sizeof(double));
    return ptr;
  }


double *rotx(double *v, double theta){
  int i, j;
  double *x, **M;

  M = two_d_double_array(3, 3);
  x = one_d_double_array(3);

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
        x[i] += M[i][j]*v[j];

    return x;
}
