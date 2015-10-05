#include <stdio.h>

int main(){
    
    /*
       =, >, <, <=, ==,
       ++, --
    */
    
    int x;
    int n;

    x = 5;
    n = 1;
    x = n++;

    printf("%d\n", x);
    printf("%d\n", n);
}
