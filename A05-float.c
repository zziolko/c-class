#include <stdio.h>
#include <float.h>

/*
    From the GNU gcc reference manual: 
    
    float 
        The float data type is the smallest
        of the three floating point types,
        if they differ in size at all.
        Its minimum value is stored in the FLT_MIN,
        and should be no greater than 1e-37.
        Its maximum value is stored in FLT_MAX,
        and should be no less than 1e37.

    double
        The double data type is at least as large
        as the float type, and it may be larger.
        Its minimum value is stored in DBL_MIN,
        and its maximum value is stored in DBL_MAX. 

    long double 
         The long double data type is at least as
        large as the float type, and it may be larger.
        Its minimum value is stored in LDBL_MIN,
        and its maximum value is stored in LDBL_MAX. 
*/

int main(){
    printf("Min value of float: %e\n", FLT_MIN);
    printf("Max value of float: %e\n", FLT_MAX);
    /* print the minimum and maximum values of double */
    

    /* floats are significantly smaller to store than doubles: */
    printf("Size of float in bytes: %ld\n", sizeof(float));
    printf("Size of double in bytes: %ld\n", sizeof(double));

    /* but they operate at a smaller range: */
    float x;
    x = 1e50;
    printf("Printing 1e50 using float : %e\n", x);
}
