#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    char x = 'a';
    printf("x is %c\n", x);
    printf("sizeof(x) is %ld\n", sizeof(x));

    char *a;
    a = (char*) malloc(0);
    strcpy(a, "012345");
    printf("a is %s\n", a);
}
