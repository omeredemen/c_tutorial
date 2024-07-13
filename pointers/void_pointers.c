#include <stdio.h>


int main() {
    void *ptr = NULL;

    int a = 5;
    float b = 3.1;

    ptr = &a;
    // *ptr = 4; // not allowed
    printf("a: %d\n", a);

    ptr = &b;
    printf("b: %f\n", b);

    return 0;
}