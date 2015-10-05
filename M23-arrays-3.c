#include <stdio.h>
#include <stdlib.h>

int main(){

  /* Dynamically allocated arrays */

  int i;
  int size = 10;
  double *vector;

  /* Memory allocation */
  vector = (double *)malloc(size*sizeof(double));

  for(i=0; i<size; i++){
    vector[i] = (double)i;
  }
  
  for(i=0; i<size; i++){
    printf("vector[%d] = %f \n", i, vector[i]);
  }

  /* memory release */
  free(vector);

  return EXIT_SUCCESS;

}
