#include <stdio.h>


int main(){

    int x = 5, y;
    y = x++;
    printf("after post increment x = %d and y = %d\n", x, y);


    int a = 5, b;
    b = ++a;
    printf("after pre increment a = %d and b = %d\n", a, b);

    return 0;
}