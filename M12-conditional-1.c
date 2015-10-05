#include <stdio.h>
#include <stdlib.h>

/* bool - a logical type is not part of original C language,
   it is an extension added later */
#include <stdbool.h>

int main(){

  bool val = true;

  /* conditional execution based on value of a variable */
  if( val ){

    printf(" true \n");

  } else {
    
    printf(" false \n");

  }

  return EXIT_SUCCESS;
}
