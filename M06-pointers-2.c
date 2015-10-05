#include <stdio.h>

int main(){

   int A = 1; 
   int *B;   

   B = &A; 

   printf("Address of A : %x \n", &A);

   printf("Address of B : %x \n", B );

   printf("Value *B : %d \n", *B );

   return 0;
}
