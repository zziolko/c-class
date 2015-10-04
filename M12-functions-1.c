#include <stdio.h>
#include <stdlib.h>

float random_number(){

  float val;
  srand((unsigned int)time(NULL));

  val = (float)rand()/(float)(RAND_MAX);

  return val;

}

int main(){

  float random_value = random_number();
  printf("Random number : %f \n", random_value);

  return EXIT_SUCCESS;
}
