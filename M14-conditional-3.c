#include <stdio.h>
#include <stdlib.h>

int main(){

  int status = 2;

  if( status ){
  
    printf("Terror Error! \n");
    return EXIT_FAILURE;

  } else {
  
    printf("Everything vent fine! \n");
    return EXIT_SUCCESS;
  
  }

}
