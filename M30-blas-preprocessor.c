#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void print_matrix(int, int, double *); 

#ifdef USE_BLAS
extern void dgemm_(char *transa, char *transb, int *m, int *n, int *k, \
                double *alpha, double *a, int *lda, double *b, int *ldb, \
                double *beta, double *c, int *ldc);
#endif

int main(){

  int size = 2;

  int m, n, k;
  double *A, *B, *C;
  char trans = 'n';

  m = size;
  n = size;
  k = size;

  /* allocate memory */
  A = (double *)malloc(m*k*sizeof(double));
  B = (double *)malloc(k*n*sizeof(double));
  C = (double *)malloc(m*n*sizeof(double));

  memset(A,0,m*k*sizeof(double));
  memset(B,0,k*n*sizeof(double));
  memset(C,0,m*n*sizeof(double));

  int i;
  for(i=0; i<size*size; i++){
    A[i] = (double)i;
    B[i] = (double)i;
  }

  double alpha = 1.0;
  double beta = 0.0;

#ifdef USE_BLAS
  dgemm_(&trans, &trans, &m, &n, &k, &alpha, A, &m, B, &k, &beta, C, &m);
#else
  printf("This program requires BLAS to run. \n");
  return EXIT_FAILURE;
#endif

  print_matrix(m,k,A);
  print_matrix(k,n,B);

  print_matrix(m,n,C);

  free(A);
  free(B);
  free(C);

  return EXIT_SUCCESS;

}

void print_matrix(int m, int n, double *data){

  int i,j;
  int offset;

  for(i=0; i<m; i++){
    offset = i*n;
    for(j=0; j<n; j++){
      printf("%f ", data[offset + j]);
    }
    printf("\n");
  }

}

