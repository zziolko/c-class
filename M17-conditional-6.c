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

  switch(total) {
    case 0:
      printf("Total is zero\n");
      break;
    case 1:
      printf("Total is one\n"); 
      break;
    case 2: 
      printf("Total is two\n");
      break;
    case 3: 
      printf("Total is three\n"); 
      break;
    case 4:
      printf("Total is four\n");
      break;
    case 5:
      printf("Total is five\n");
      break;
    case 6:
      printf("Total is six\n");
      break;
    case 7:
      printf("Total is seven\n");
      break;
    case 8:
      printf("Total is eight\n");
      break;
    case 9:
      printf("Total is nine\n");
      break;

    /* we can also give a default response for different result */ 
    default:
      printf("Something went terribly wrong \n");
  }

  return EXIT_SUCCESS;

}


