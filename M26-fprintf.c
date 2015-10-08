#include <stdio.h>
#include <stdlib.h>

int main(){

   FILE *f;

   f = fopen("file.txt", "w");

   fprintf(f, "%s %s %s %s %d \n", "Today", "is", "Thursday", "October", 8);
   
   fclose(f);
   
   return EXIT_SUCCESS;
}
