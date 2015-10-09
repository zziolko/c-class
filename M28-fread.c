#include <stdio.h>
#include <stdlib.h>

int main(){

  /* File is 
   *
   * 12345678901234566
   * ------------------
   * A 1.0 1.1 1.2
   * B 2.0 2.1 2.2
   * C 3.0 3.1 3.2
   */

  const char filename[15] = "data.txt";
  FILE *f;

  char buffer[100];

  f = fopen(filename,"r");

  printf("sizeof(buffer) %d \n", sizeof(buffer));
  fread(buffer, sizeof(buffer), 1, f);

  printf("%s \n", buffer);

  fclose(f);

  return EXIT_SUCCESS;
}
