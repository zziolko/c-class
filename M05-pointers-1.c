#include <stdio.h>

int main(){
  
  int A = 1;
  char B = 's';

  printf("Address of A : %x \n", &A);
  printf("Address of B : %x \n", &B);

  printf("Value of A : %d \n", A);
  printf("Value of B : %c \n", B);

  return 0;

}
