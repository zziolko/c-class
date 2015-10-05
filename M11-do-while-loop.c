#include <stdio.h>
#include <stdlib.h>

int main(){

  int iter = 0;
  int max_iter = 10;

  /* do-while loop - first execute the body, then check the condition */
  do
  {
  
    int i;

    printf("Iter %d : ", iter);
    for(i=0; i<5; i++) printf("%d", i);
    printf("\n");

    iter++;

  } while( iter < max_iter );

  return EXIT_SUCCESS;

}
