#include <stdio.h>

int a; // uninitialized data segment
int b = 5; // initialized  data segment


const float f = 10; 

int main(){
    static double b = 2; // initialized  data segment
    int a; // stack
    return 0;
}