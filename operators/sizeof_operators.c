#include <stdio.h>


int main(){

    int x = 5, y;
    char c;
    float f;
    double d;

    printf("size of the given variable: %zu\n", sizeof(x));
    printf("max size of the given variables: %zu\n", sizeof(x, y, c, f, d)); // it returns the max size if passed variabled more than one

    return 0;
}