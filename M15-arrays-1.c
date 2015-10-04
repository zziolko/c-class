#include <stdio.h>
#include <stdlib.h>

int main(){

  /* Simple array */
  int var0[10];

  /* Simple array with assigned values */
  int var1[10] = {0, 1 , 2, 3, 4, 5, 6, 7, 8, 9}; 

  /* Size is not needed if we initialize all elements */
  int var2[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

  /* Size has to be a constant */
  /* Indexing start with 0 */
  const int size3 = 10;
  float var3[size3];

  int i;

  for(i=0; i<size3; i++){
    var3[i] = (float)i;
  }

  for(i=0; i<size3; i++){
    printf("var3[%d] = %f \n", i, var3[i]);
  }

  return EXIT_SUCCESS;
}
