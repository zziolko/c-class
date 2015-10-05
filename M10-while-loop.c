#include <stdio.h>
#include <stdlib.h>

int main(){

  int i = 0;
  int max_i = 100;

  /* while loop - check the condition, then execute the body */ 
  while( i < max_i ){

    printf("Value of i = %d \n", i);

    i = i + 10; 
  } 

  return EXIT_SUCCESS;
}
