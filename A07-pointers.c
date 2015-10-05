#include <stdio.h>

int main(){
    double a, b;
    double *p_a, *p_b;

    a = 0;
    p_a = &a;
    *p_a += 256;
    
    printf("%f\n", a);
    printf("%f\n", *p_a);
    // printf("size of double: %ld\n", sizeof(a));
    // printf("size of pointer to double: %ld\n", sizeof(p_a));
    
    p_a += 256;
    printf("%f\n", a);    
    printf("%f\n", *p_a);
}
