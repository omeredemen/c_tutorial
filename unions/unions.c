#include <stdio.h>
#include <string.h>

union example{
    int a;
    float b;
    char c[100];
};


int main() {
    union example ex;
    printf("size of ex is %ld\n", sizeof(ex)); // this line will print the member with highest size

    // we can use just one member of an union at a time
    ex.a = 5;
    ex.b = 34.8;
    strcpy(ex.c, "omer faruk edemen");

    /*
        you will see some garbage value for ex.a and ex.b
        because the ex.c was the latest variable that is used
    */
    printf("ex.a: %d\n", ex.a);
    printf("ex.b: %f\n", ex.b);
    printf("ex.c: %s\n", ex.c);

    /*
        but if we use the variable before the other we can use normally
    */
    ex.a = 5;
    printf("ex.a: %d\n", ex.a);

    ex.b = 34.8;
    printf("ex.b: %.3f\n", ex.b);

    strcpy(ex.c, "omer faruk edemen");
    printf("ex.c: %s\n", ex.c);
    
    return 0;
}