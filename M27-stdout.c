#include <stdio.h>
#include <stdlib.h>

int main(){
  
  /* stdout - standard output stream
   * stderr - standard error stream */

  fprintf(stdout,"Some message \n");
  fprintf(stderr,"Some error message \n");
 
  return 0;
}
