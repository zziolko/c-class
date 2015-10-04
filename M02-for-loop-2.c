#include <stdio.h>

/* ANSI C
   gcc -ansi    for-loop-2.c -o for-loop2.x

   C90 
   gcc -std=c99 for-loop-2.c -o for-loop2.x 
*/

int main(){

  int MAX_VALUE = 10;

  /* Iterator can be defined in the for loop stament in C99 and higher 
     but not ANSI C (C90) */
  for(int i=0; i<MAX_VALUE; i++){

    printf("i = %d \n", i);

  }

  /* ANSI C requires the interator to be defined before the loop */
  int j;

  for(j=0; j<MAX_VALUE; j++){

    printf("j = %d \n", j);

  }

  return 0;
}
