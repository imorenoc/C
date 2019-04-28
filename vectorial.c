#include <stdlib.h>

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
