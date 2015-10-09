#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){


  int a, b, c, d;
  double e, f, g, h;

  a = 1;
  b = 1024;
  c = 7;
  d = 512;

  e = 3.1415;
  f = M_PI;
  g = 1e-10;
  h = sin(M_PI/2.0);

  char i = 'a', j[10] = "some_name";

  printf("Integer : %d \n", a);
  printf("Integer : %d \n", b);
  printf("Integer : %10d \n", c);
  printf("Integer : %010d \n", d);

  printf("\n");

  printf("Double : %f \n", e);
  printf("Double : %14.10f \n", f);
  printf("Double : %e \n", g);
  printf("Double : %10.7e \n", h);

  printf("\n");

  printf("Char : %c \n", i);
  printf("Char : %s \n", j);




  return EXIT_SUCCESS;
}
