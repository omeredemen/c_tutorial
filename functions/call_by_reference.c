#include <stdio.h>

void assignNewValue(int *a, int *b) {
    *a = 5;
    *b = 4;
}

int main() {
    int y =10; 
    int v =10; 

    printf("y: %d, v: %d\n", y, v);

    assignNewValue(&y, &v);

    printf("y: %d, v: %d\n", y, v);

    return 0;
}