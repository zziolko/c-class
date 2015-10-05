#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]){
    
    if (argc < 3) {
        printf("Please provide two command line arguments\n");
        return EXIT_FAILURE;
    }

    double a = atof(argv[1]);
    double b = atof(argv[2]);
    printf("%f\n", a*b);

    /* write a program to convert from degrees to radians,
       accepting the value of degrees from the command line */
}
