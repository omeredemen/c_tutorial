#include <stdio.h>

const int a = 5;

int * const const_ptr;

const int *b = &a;

int main() {
    // a = 5; // not allowed to do this just define in declaration
    // *b = 3; // error: assignment of read-only location ‘*b’

    // const_ptr = &b; // error: assignment of read-only variable ‘const_ptr’

    printf("b: %d\n", *b);  
    return 0;
}