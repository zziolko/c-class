#include <stdio.h>
#include <float.h>
#include <math.h>

/* See:

   "What every computer scientist should know about floating point"
        http://docs.oracle.com/cd/E19957-01/806-3568/ncg_goldberg.html
*/
int main(){
    float a;
    float b;

    for (int i=1; i<=50; i++){
        a += 0.9;
        b = i*0.9;
        printf("%f \t %f \t %f \n", a, b, fabs(a-b));
    }
}
