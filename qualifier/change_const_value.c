/* this example shows how to change a constant variable value */


#include <stdio.h>

const int a = 9; // you cannot change a constant global variables value  

int main() {

    const int b = 7;
    int *ptr;
    ptr = &b;

    printf("b is: %d\n", b);

    *ptr = 3;
    printf("b is: %d\n", b);


    /* tried to change value of a */

    // ptr = &a;
    // printf("a is: %d\n", a);

    // *ptr = 3;
    // printf("a is: %d\n", a);

    return 0;
}