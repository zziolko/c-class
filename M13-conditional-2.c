#include <stdio.h>
#include <stdlib.h>

int main(){

  int i = 0;
  int max_i = 10;

  /* generate normalized random numbers */
  for(i; i<max_i; i++){

    float val = (float)rand()/(float)(RAND_MAX);

    if( val > 0.5 ){

      printf("%f *** \n", val);

    } else {
    
      printf("%f \n", val);

    } 

  }

  return EXIT_SUCCESS; 
}
