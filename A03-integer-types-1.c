#include <stdio.h>

/*
   From the GNU gcc reference manual: 
       
  * The 32-bit int data type can hold integer values
    in the range of −2,147,483,648 to 2,147,483,647.
    You may also refer to this data type as signed
    int or signed.   
   
  * The 32-bit long int data type can hold integer
    values in the range of at least
    −2,147,483,648 to 2,147,483,647.
    (Depending on your system, this data type might
    be 64-bit, in which case its range is identical
    to that of the long long int data type.)
    You may also refer to this data type as long,
    signed long int, or signed long. 

  * The 16-bit short int data type can hold integer
    valuesin the range of −32,768 to 32,767.
    You may also refer to this data type as short,
    signed short int, or signed short. 

  * The 16-bit unsigned short int data type can
    hold integer values in the range of 0 to 65,535.
    You may also refer to this data type as unsigned
    short. 

  From https://en.wikipedia.org/wiki/Integer_overflow:

    Since an arithmetic operation may produce a result
    larger than the maximum representable value,
    a potential error condition may result. In the
    C programming language, signed integer overflow
    causes undefined behavior, while unsigned integer
    overflow causes the number to be reduced modulo a
    power of two, meaning that unsigned integers
    "wrap around" on overflow.

  Note:
    
    65538 in binary is 10000000000000010
*/

int main(){
    int a = 65538;
    long int b = 65538;
    unsigned short c = 65538;
    short int d = 65538;
    printf("%d\n", a);
    printf("%ld\n", b);
    printf("%d\n", c);
    printf("%d\n", d);
}
