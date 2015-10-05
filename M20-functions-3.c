#include <stdio.h>
#include <stdlib.h>

/* Definitions (prototypes) */
#include "M20-functions-3.h"

static int first = 1; /* global variable */

int main(){

  generate_set(10);

  return EXIT_SUCCESS;
}

void generate_set(int n){

  int i;

  for(i=0; i<n; i++){

    float val = random_number();
    printf("%d - %f \n", i, val);

  }

}

float random_number(){

  float val;

  if(first) {
    srand((unsigned int)time(NULL));
    first = 0; 
  }

  val = (float)rand()/(float)(RAND_MAX);

  return val;

}

