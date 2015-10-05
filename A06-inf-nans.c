#include <stdio.h>
#include <float.h>

/*
    Expressions like 0/0
    and sqrt(-1) lead to nans.
    
    Dividing by zero leads to infinity,
    and infinity propogates through calculations.
*/


int main(){

    float a, b;
    a = 0;
    b = 0;
    printf("%f\n", a/b);

    /* Produce a NaN using the sqrt() function:
       1. Include math.h
       2. Link with the math library (-lm)
    */

    float m, n;
    m = 1.0;
    n = 0.0;
    printf("%f\n", m/n);
}
