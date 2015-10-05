#include <stdio.h>
#include <stdlib.h>

void print_matrix(int n, float [][n]);

int main(){

  /* Multidimensional array */
  int size = 3;
  float matrix[size][size];

  int i, j;
  for(i=0; i<size; i++){
    for(j=0; j<size; j++){
      matrix[i][j] = (float)(i+j);
    } 
  }

  /* Passing array to a function */
  print_matrix(size, matrix);

  return EXIT_SUCCESS;
}

void print_matrix(int dim, float matrix[][dim]){

  int i, j;

  for(i=0; i<dim; i++){
    for(j=0; j<dim; j++){
      printf("%f ", matrix[i][j]);
    }
    printf("\n");
  }

}
