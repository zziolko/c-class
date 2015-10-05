#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <math.h>

#define PI 3.14159265359

int main(int argc, char* argv[]){
    double a = atof(argv[1]);
    assert(a <= 360);
    printf("%f\n", sin((PI/180.0)*a));

    /* write a program to convert from degrees to radians,
       accepting the value of degrees from the command line */
}
