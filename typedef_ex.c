#include <stdio.h>


typedef int number;
typedef float floating_point;

// with this typedef we can use example as struct ex
typedef struct ex{
    number a;
    floating_point f;
}example;

example e;

int main(){
    e.a = 1;
    e.f = 1.1;

    printf("a: %d f: %f\n", e.a, e.f);

    return 0;
}