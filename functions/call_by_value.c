#include <stdio.h>

void assignNewValue(int a, int b) {
    a = 5;
    b = 4;
}

int main() {
    int y =10; 
    int v =10; 

    printf("y: %d, v: %d\n", y, v);

    assignNewValue(y, v);

    /*
        it will print 10 10 it is bc the function just create another varibale doesnt change the given parameters
    */

    printf("y: %d, v: %d\n", y, v);

    return 0;
}