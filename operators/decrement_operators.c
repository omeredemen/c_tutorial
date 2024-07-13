#include <stdio.h>


int main(){

    int x = 5, y;
    y = x--;
    printf("after post decrement x = %d and y = %d\n", x, y);


    int a = 5, b;
    b = --a;
    printf("after pre decrement a = %d and b = %d\n", a, b);

    return 0;
}