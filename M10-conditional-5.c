#include <stdio.h>
#include <stdlib.h>

int main(){

  int i = 0;
  int max_i = 10;
  int total = 0;


  /* seed the random number function */
  srand((unsigned int)time(NULL));

  /* generate normalized random numbers */
  for(i; i<max_i; i++){

    float val = (float)rand()/(float)(RAND_MAX);

    if( val > 0.5 ) total++;

  }

  printf("Total %d \n", total);

  if(total == 0) {
    printf("Total is zero\n");
  } else if (total == 1){
    printf("Total is one\n"); 
  } else if (total == 2){
    printf("Total is two\n");
  } else if (total == 3){
    printf("Total is three\n"); 
  } else if (total == 4){
    printf("Total is four\n");
  } else if (total == 5){
    printf("Total is five\n");
  } else if (total == 6){
    printf("Total is six\n");
  } else if (total == 7){
    printf("Total is seven\n");
  } else if (total == 8){
    printf("Total is eight\n");
  } else if (total == 9){
    printf("Total is nine\n");
  }

  return EXIT_SUCCESS;

}


