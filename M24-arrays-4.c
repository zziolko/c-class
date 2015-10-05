#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void print_matrix(int, int, double *);

int main(){

  /* Dynamically allocated 2d array */
  int m = 4; /* number of rows */
  int n = 3; /* number of columnt (# elements in a row) */

  int nelements = m*n;
  double *matrix = (double *)malloc(sizeof(double)*nelements);

  memset(matrix,0,sizeof(double)*nelements);

  print_matrix(m,n,matrix);

  free(matrix);

  return EXIT_SUCCESS;
}

void print_matrix(int m, int n, double *matrix){

  int i, j;
  int offset;

  for(i=0; i<m; i++){
    offset = i*n;
    for(j=0; j<n; j++){
      printf("%f ", matrix[offset + j]);
    }
    printf("\n");
  }

}
